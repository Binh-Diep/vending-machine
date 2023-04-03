#define MAX_SIM 20
void set_random(Vtop *dut, vluint64_t sim_unit) {
    unsigned int tmp_nickel,tmp_dime,tmp_quarter;
    tmp_nickel = rand()%2;
    tmp_dime = rand()%2;
    tmp_quarter = rand()%2;
    //1 cycle: 1 trong 3 coin len muc 1
    if(tmp_nickel){
        dut -> nickel_i = 0b1;
        dut -> dime_i = 0b0;
        dut -> quarter_i = 0b0;        
    }
    if(tmp_dime){
        dut -> nickel_i = 0b0;
        dut -> dime_i = 0b1;
        dut -> quarter_i = 0b0;    	
    }
    if(tmp_quarter){
        dut -> nickel_i = 0b0;
        dut -> dime_i = 0b0;
        dut -> quarter_i = 0b1;    	
    }
}
