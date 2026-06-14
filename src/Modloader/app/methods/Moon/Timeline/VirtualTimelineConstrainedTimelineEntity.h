#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EntityId.h>
#include <Modloader/app/structs/IConstrainedEntity.h>
#include <Modloader/app/structs/IConstrainedEntityWithChildren.h>
#include <Modloader/app/structs/ITimelineEntityParent.h>
#include <Modloader/app/structs/TimelineEntityRecord.h>
#include <Modloader/app/structs/VirtualMoonTimeline.h>
#include <Modloader/app/structs/VirtualTimelineConstrainedTimelineEntity.h>

namespace app::classes::Moon::Timeline::VirtualTimelineConstrainedTimelineEntity {
    IL2CPP_REGISTER_METHOD(0x01E92970, int32_t, get_ConstrainedEntitiesCount, app::VirtualTimelineConstrainedTimelineEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E92A00, bool, IsTheSame, app::VirtualTimelineConstrainedTimelineEntity* this_ptr, app::IConstrainedEntityWithChildren* context)
    IL2CPP_REGISTER_METHOD(0x01E92AC0, float, get_Progress, app::VirtualTimelineConstrainedTimelineEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01E92AE0,
        app::IConstrainedEntity*,
        GetConstrainedEntityFrom,
        app::VirtualTimelineConstrainedTimelineEntity* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x01E92BB0,
        app::IConstrainedEntity*,
        GetConstrainedEntity,
        app::VirtualTimelineConstrainedTimelineEntity* this_ptr,
        app::EntityId entity_id
    )
    IL2CPP_REGISTER_METHOD(0x002FB930, app::VirtualMoonTimeline*, get_GetTimeline, app::VirtualTimelineConstrainedTimelineEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::ITimelineEntityParent*, get_GetITimelineEntityParent, app::VirtualTimelineConstrainedTimelineEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0058DA40,
        void,
        ctor,
        app::VirtualTimelineConstrainedTimelineEntity* this_ptr,
        app::TimelineEntityRecord* timeline_entity_record,
        app::VirtualMoonTimeline* moon_timeline
    )
} // namespace app::classes::Moon::Timeline::VirtualTimelineConstrainedTimelineEntity
