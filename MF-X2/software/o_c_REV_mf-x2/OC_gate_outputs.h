#ifndef OC_GATE_OUTPUTS_H_
#define OC_GATE_OUTPUTS_H_

#include <stdint.h>
#include "OC_config.h"
#include "OC_core.h"
#include "OC_gpio.h"

namespace OC {


class GateOutputs {
public:

  static void Init();
  static void Gateout(int ch, int value);
  

private:

};
};

#endif // OC_GATE_OUTPUTS_H_
