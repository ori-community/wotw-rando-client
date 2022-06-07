#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::IsLoadingInProgressCondition {
    IL2CPP_REGISTER_METHOD(0x00646940, bool, Validate, (app::IsLoadingInProgressCondition * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::IsLoadingInProgressCondition * this_ptr))
}
