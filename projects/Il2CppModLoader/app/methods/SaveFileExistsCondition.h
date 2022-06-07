#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SaveFileExistsCondition {
    IL2CPP_REGISTER_METHOD(0x00C2AF70, bool, Validate, (app::SaveFileExistsCondition * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SaveFileExistsCondition * this_ptr))
}
