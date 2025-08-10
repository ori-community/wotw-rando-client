#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DestroyOnEventTriggerAnimator.h>

namespace app::classes::DestroyOnEventTriggerAnimator {
    IL2CPP_REGISTER_METHOD(0x00B8C270, void, OnEnable, app::DestroyOnEventTriggerAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B8C420, void, OnDisable, app::DestroyOnEventTriggerAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B8C5D0, void, OnDestroyTrigger, app::DestroyOnEventTriggerAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::DestroyOnEventTriggerAnimator* this_ptr)
} // namespace app::classes::DestroyOnEventTriggerAnimator
