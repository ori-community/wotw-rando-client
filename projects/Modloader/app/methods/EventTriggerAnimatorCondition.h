#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EventTriggerAnimatorCondition.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::EventTriggerAnimatorCondition {
    IL2CPP_REGISTER_METHOD(0x00982E50, bool, Validate, app::EventTriggerAnimatorCondition* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x008223A0, void, ctor, app::EventTriggerAnimatorCondition* this_ptr)
} // namespace app::classes::EventTriggerAnimatorCondition
