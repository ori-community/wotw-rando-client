#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/TimelineInterruptionAnimatorEntity.h>

namespace app::classes::Moon::Timeline::TimelineInterruptionAnimatorEntity {
    IL2CPP_REGISTER_METHOD(0x01E8C8F0, app::MoonTimeline*, get_ResolvedTimeline, app::TimelineInterruptionAnimatorEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E8C980, void, OnUpdateEntity, app::TimelineInterruptionAnimatorEntity* this_ptr, float delta_time)
    IL2CPP_REGISTER_METHOD(0x01E8CA00, void, ctor, app::TimelineInterruptionAnimatorEntity* this_ptr)
} // namespace app::classes::Moon::Timeline::TimelineInterruptionAnimatorEntity
