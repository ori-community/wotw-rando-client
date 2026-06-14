#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/LegacyEventTriggerAnimator.h>

namespace app::classes::LegacyEventTriggerAnimator {
    IL2CPP_REGISTER_METHOD(0x00A242F0, void, add_Started, app::LegacyEventTriggerAnimator* this_ptr, app::Action* value)
    IL2CPP_REGISTER_METHOD(0x00A243E0, void, remove_Started, app::LegacyEventTriggerAnimator* this_ptr, app::Action* value)
    IL2CPP_REGISTER_METHOD(0x00A244D0, void, OnStartPlay, app::LegacyEventTriggerAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, CacheOriginals, app::LegacyEventTriggerAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SampleValue, app::LegacyEventTriggerAnimator* this_ptr, float value, bool force_sample)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, RestoreToOriginalState, app::LegacyEventTriggerAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A244F0, float, get_Duration, app::LegacyEventTriggerAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsLooping, app::LegacyEventTriggerAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005A4BA0, void, ctor, app::LegacyEventTriggerAnimator* this_ptr)
} // namespace app::classes::LegacyEventTriggerAnimator
