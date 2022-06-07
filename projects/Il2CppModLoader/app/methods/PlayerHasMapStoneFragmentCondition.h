#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::PlayerHasMapStoneFragmentCondition {
    IL2CPP_REGISTER_METHOD(0x0140F520, bool, Validate, (app::PlayerHasMapStoneFragmentCondition * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00597BB0, void, ctor, (app::PlayerHasMapStoneFragmentCondition * this_ptr))
}
