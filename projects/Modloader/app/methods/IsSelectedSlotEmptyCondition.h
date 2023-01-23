#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/IsSelectedSlotEmptyCondition.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::IsSelectedSlotEmptyCondition {
    IL2CPP_REGISTER_METHOD(0x00647A80, bool, Validate, (app::IsSelectedSlotEmptyCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::IsSelectedSlotEmptyCondition * this_ptr))
} // namespace app::classes::IsSelectedSlotEmptyCondition
