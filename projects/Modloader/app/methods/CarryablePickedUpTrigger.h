#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CarryablePickedUpTrigger.h>

namespace app::classes::CarryablePickedUpTrigger {
    IL2CPP_REGISTER_METHOD(0x00B25F10, void, Awake, app::CarryablePickedUpTrigger* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B261A0, void, OnDestroy, app::CarryablePickedUpTrigger* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B26430, void, OnAnyCarryablePickedUpAction, app::CarryablePickedUpTrigger* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00611C70, void, ctor, app::CarryablePickedUpTrigger* this_ptr)
} // namespace app::classes::CarryablePickedUpTrigger
