#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::GetWorldEventCondition {
    IL2CPP_REGISTER_METHOD(0x00E12D60, bool, Validate, (app::GetWorldEventCondition * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00E12E70, void, ctor, (app::GetWorldEventCondition * this_ptr))
}
