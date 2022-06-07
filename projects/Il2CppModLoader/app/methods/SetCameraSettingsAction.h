#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SetCameraSettingsAction {
    IL2CPP_REGISTER_METHOD(0x005A1C90, void, Perform, (app::SetCameraSettingsAction * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x005A1EB0, void, ctor, (app::SetCameraSettingsAction * this_ptr))
}
