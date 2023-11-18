#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TimelineStateCondition.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/MoonTimeline.h>

namespace app::classes::TimelineStateCondition {
    IL2CPP_REGISTER_METHOD(0x00446590, bool, ShowEventTrigger, (app::TimelineStateCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010F7EC0, app::MoonTimeline*, get_Target, (app::TimelineStateCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010F7FB0, void, Awake, (app::TimelineStateCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009A3B40, void, HitEventTrigger, (app::TimelineStateCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010F82B0, void, OnDestroy, (app::TimelineStateCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010F8450, void, OnRestoreCheckpoint, (app::TimelineStateCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010F8460, bool, Validate, (app::TimelineStateCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::TimelineStateCondition * this_ptr))
} // namespace app::classes::TimelineStateCondition
