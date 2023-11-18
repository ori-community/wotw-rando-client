#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_1_Moon_Timeline_EventTriggerAnimator_.h>
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::Moon::Timeline::EventTriggerAnimator {
    IL2CPP_REGISTER_METHOD(0x002FBBC0, app::Action_1_Moon_Timeline_EventTriggerAnimator_*, get_EventStartWithTriggerInfo, (app::EventTriggerAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBD0, void, set_EventStartWithTriggerInfo, (app::EventTriggerAnimator * this_ptr, app::Action_1_Moon_Timeline_EventTriggerAnimator_* value))
    IL2CPP_REGISTER_METHOD(0x01BBD1A0, bool, get_IsOn, (app::EventTriggerAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00738690, float, get_Duration, (app::EventTriggerAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00990EC0, void, set_Duration, (app::EventTriggerAnimator * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::Action*, get_EventStart, (app::EventTriggerAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBF0, void, set_EventStart, (app::EventTriggerAnimator * this_ptr, app::Action* value))
    IL2CPP_REGISTER_METHOD(0x002FBC00, app::Action*, get_EventStay, (app::EventTriggerAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC10, void, set_EventStay, (app::EventTriggerAnimator * this_ptr, app::Action* value))
    IL2CPP_REGISTER_METHOD(0x002FBC20, app::Action*, get_EventEnd, (app::EventTriggerAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC30, void, set_EventEnd, (app::EventTriggerAnimator * this_ptr, app::Action* value))
    IL2CPP_REGISTER_METHOD(0x01BBD1B0, void, OnStartPlayback, (app::EventTriggerAnimator * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0076FF70, void, OnStopPlayback, (app::EventTriggerAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BBD270, void, OnUpdateEntity, (app::EventTriggerAnimator * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x01BBD1A0, bool, Validate, (app::EventTriggerAnimator * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x01BBD2B0, void, ctor, (app::EventTriggerAnimator * this_ptr))
} // namespace app::classes::Moon::Timeline::EventTriggerAnimator
