#include <Arduino.h>
#include <algorithm>
#include "OC_gate_outputs.h"
#include "OC_gpio.h"
#include "OC_options.h"

int gate_pins[6] = {GATE_1,GATE_2,GATE_3,GATE_4,GATE_5,GATE_6};


/*static*/
void OC::GateOutputs::Init() {

    OC::pinMode(GATE_1, OUTPUT);
    OC::pinMode(GATE_2, OUTPUT);
    OC::pinMode(GATE_3, OUTPUT);
    OC::pinMode(GATE_4, OUTPUT);
    OC::pinMode(GATE_5, OUTPUT);
    OC::pinMode(GATE_6, OUTPUT);

    

}

 void OC::GateOutputs::Gateout(int ch, int value) {
        digitalWriteFast(gate_pins[ch-4],value);    
 }




