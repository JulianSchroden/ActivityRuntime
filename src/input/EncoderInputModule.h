#ifndef _ENCODER_INPUT_MODULE_h
#define _ENCODER_INPUT_MODULE_h

#include <InputDevices/Button.h>
#include <InputDevices/Encoder.h>

#include "InputModule.h"


namespace ActivityGUI
{
class EncoderInputModule : public InputModule
{
public:
   EncoderInputModule(InputDevices::Button button,
                      InputDevices::Encoder encoder);
   void runOnce() override;

private:
   InputDevices::Button button_;
   InputDevices::Encoder encoder_;
};

}  // namespace ActivityGUI

#endif