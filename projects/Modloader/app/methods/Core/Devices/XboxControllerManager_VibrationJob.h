#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/XboxControllerManager_VibrationJob__Boxed.h>

namespace app::classes::Core::Devices::XboxControllerManager_VibrationJob {
    IL2CPP_REGISTER_METHOD(0x00124CA0, void, Execute, (app::XboxControllerManager_VibrationJob__Boxed * this_ptr))
}
