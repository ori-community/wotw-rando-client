#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ITimelineEntityParent.h>
#include <Modloader/app/structs/ConstraintFlag__Enum.h>
#include <Modloader/app/structs/Constraint__Enum.h>
#include <Modloader/app/structs/ConstraintsMetaData.h>
#include <Modloader/app/structs/EntityId.h>
#include <Modloader/app/structs/IConstraint.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/TimelineConstraint.h>

namespace app::classes::Moon::Timeline::ConstraintOperation {
    IL2CPP_REGISTER_METHOD(0x01BB0A00, bool, IsEntityPadding, (app::ITimelineEntityParent * timeline, app::EntityId entity_id))
    IL2CPP_REGISTER_METHOD(0x01BB0A60, void, RemoveAssociatedMeta, (app::ITimelineEntityParent * timeline, app::EntityId entity_id))
    IL2CPP_REGISTER_METHOD(0x01BB0BA0, app::IConstraint*, ModifyConstraint, (app::MoonTimeline * owning_timeline, app::EntityId from_entity, app::Constraint__Enum from_constraint, app::EntityId to_entity, int32_t to_event, float time_offset))
    IL2CPP_REGISTER_METHOD(0x01BB0C30, void, ModifyMarkerConstraint, (app::MoonTimeline * owning_timeline, app::EntityId marker_id, app::EntityId to_entity, int32_t to_event))
    IL2CPP_REGISTER_METHOD(0x01BB0DC0, void, ReplaceConstraintUnsafe, (app::ITimelineEntityParent * owning_timeline, app::EntityId from_entity, app::Constraint__Enum from_constraint, app::TimelineConstraint* constraint))
    IL2CPP_REGISTER_METHOD(0x01BB0EE0, app::ConstraintsMetaData*, GetMeta, (app::ITimelineEntityParent * timeline, app::EntityId entity_id, app::Constraint__Enum constraint))
    IL2CPP_REGISTER_METHOD(0x01BB0FD0, void, SetMetaRaw, (app::ITimelineEntityParent * timeline, app::EntityId entity_id, app::Constraint__Enum type, app::ConstraintsMetaData* meta))
    IL2CPP_REGISTER_METHOD(0x01BB1250, void, SetConstraintFlag, (app::ITimelineEntityParent * timeline, app::EntityId entity_id, app::Constraint__Enum end, app::ConstraintFlag__Enum pad))
    IL2CPP_REGISTER_METHOD(0x01BB1280, bool, CheckConstraintFlags, (app::ITimelineEntityParent * timline, app::EntityId entity_id, app::Constraint__Enum type, app::ConstraintFlag__Enum flags))
    IL2CPP_REGISTER_METHOD(0x01BB1380, app::ConstraintsMetaData*, GetOrCreateMeta, (app::ITimelineEntityParent * timeline, app::EntityId entity_id, app::Constraint__Enum constraint))
    IL2CPP_REGISTER_METHOD(0x01BB1560, int32_t, GetMetaIndex, (app::ITimelineEntityParent * timeline, app::EntityId entity_id, app::Constraint__Enum constraint))
    IL2CPP_REGISTER_METHOD(0x01BB1670, void, RemoveMeta, (app::MoonTimeline * owning_timeline, app::EntityId entity_id, app::Constraint__Enum constraint))
} // namespace app::classes::Moon::Timeline::ConstraintOperation
