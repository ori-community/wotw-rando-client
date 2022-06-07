#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::IsSelectedSlotEmptyCondition {
    IL2CPP_REGISTER_METHOD(0x00647A80, bool, Validate, (app::IsSelectedSlotEmptyCondition * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::IsSelectedSlotEmptyCondition * this_ptr))
}
