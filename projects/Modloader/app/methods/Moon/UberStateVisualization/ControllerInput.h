#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ControllerInput.h>

namespace app::classes::Moon::UberStateVisualization::ControllerInput {
    IL2CPP_REGISTER_METHOD(0x019975D0, bool, get_InputDownActive, (app::ControllerInput * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019975F0, bool, get_InputUpActive, (app::ControllerInput * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01997610, bool, get_InputDpadDownActive, (app::ControllerInput * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01997630, bool, get_InputDpadUpActive, (app::ControllerInput * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ControllerInput * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01997650, void, cctor, ())
} // namespace app::classes::Moon::UberStateVisualization::ControllerInput
