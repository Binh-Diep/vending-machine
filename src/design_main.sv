module design_main(
    //inputs
    input logic clk_i,
    input logic nickel_i,
    input logic dime_i,
    input logic quarter_i,
    //outputs
    output logic soda_o,
    output logic [2:0] change_o
);
    logic tmp_soda;
    logic [2:0] tmp_change;
	//parameter for states
    typedef enum logic [1:0] {
    	IDLE =   2'b00,
    	NICKEL = 2'b01,
    	DIME =   2'b10,
    	TEMP =   2'b11
    } state_e;
    state_e state_next;
    state_e state_current;
    //combination 1
    always_comb begin : proc_next_state
       case(state_current)
           IDLE: begin
              if      (nickel_i)   state_next = NICKEL;
              else if (dime_i)     state_next = DIME;
              else if (quarter_i) state_next = state_current;
              else                 state_next = state_current;
           end
           NICKEL: begin
              if      (nickel_i)   state_next = DIME;
              else if (dime_i)     state_next = TEMP;
              else if (quarter_i)  state_next = IDLE;
              else                 state_next = state_current;                  
           end 
           DIME: begin
              if      (nickel_i)   state_next = TEMP;
              else if (dime_i)     state_next = IDLE;
              else if (quarter_i)  state_next = IDLE;
              else                 state_next = state_current;                   
           end
           TEMP: begin
              if      (nickel_i)  state_next = IDLE;
              else if (dime_i)    state_next = IDLE;
              else if (quarter_i) state_next = IDLE;
              else                state_next = state_current;                   
           end
           default: state_next = IDLE;
       endcase
    end
	//current state <= next state
    always_ff @(posedge clk_i) begin
        state_current <= state_next;
    end
    //combination 2 - soda
    always_comb begin : proc_soda
        case(state_current)
            IDLE: begin
                if (quarter_i)          tmp_soda = 1'b1;
                else                    tmp_soda = 1'b0; 
            end
            NICKEL: begin
                if (quarter_i)          tmp_soda = 1'b1;
                else                    tmp_soda = 1'b0;
            end
            DIME: begin
                if (dime_i | quarter_i) tmp_soda = 1'b1;
                else                    tmp_soda = 1'b0;
            end
            TEMP: begin
                if (nickel_i | dime_i | quarter_i) tmp_soda = 1'b1;
                else                               tmp_soda = 1'b0;
            end
            default: tmp_soda = 1'b0;
        endcase
    end
    //combination 2 - change
    always_comb begin : proc_change
        case(state_current)
            IDLE: begin
                if (quarter_i)        tmp_change = 3'b001;
                else                  tmp_change = 3'b000; 
            end
            NICKEL: begin
                if (quarter_i)        tmp_change = 3'b010;
                else                  tmp_change = 3'b000;
            end
            DIME: begin
                if (quarter_i)        tmp_change = 3'b011;
                else                  tmp_change = 3'b000;
            end
            TEMP: begin
                if (dime_i)           tmp_change = 3'b001;
                else if (quarter_i)   tmp_change = 3'b100;
                else                  tmp_change = 3'b000;
            end
            default: tmp_change = 3'b000;        
        endcase
    end

    assign soda_o   = tmp_soda;
    assign change_o = tmp_change;
endmodule : design_main
