#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SwitchController_VibrationData.h>

namespace app::classes::frameworks::Switch::SwitchController_VibrationData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SwitchController_VibrationData * this_ptr))
}
