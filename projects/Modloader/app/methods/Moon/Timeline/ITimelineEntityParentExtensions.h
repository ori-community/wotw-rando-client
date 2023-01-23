#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ITimelineEntityParent.h>
#include <Modloader/app/structs/EntityId.h>
#include <Modloader/app/structs/ITimelineEntity.h>
#include <Modloader/app/structs/TimelineConstraint.h>
#include <Modloader/app/structs/Constraint__Enum.h>
#include <Modloader/app/structs/IConstraint.h>
#include <Modloader/app/structs/TimelineEntityRecord.h>

namespace app::classes::Moon::Timeline::ITimelineEntityParentExtensions {
    IL2CPP_REGISTER_METHOD(0x01BC0C90, bool, IsExternalRecord, (app::ITimelineEntityParent * registry, app::EntityId entity_id))
    IL2CPP_REGISTER_METHOD(0x01BC0E30, bool, HasRecordForId, (app::ITimelineEntityParent * parent, app::EntityId entity_id))
    IL2CPP_REGISTER_METHOD(0x01BC0FD0, bool, HasRecordFor, (app::ITimelineEntityParent * parent, app::ITimelineEntity* entity))
    IL2CPP_REGISTER_METHOD(0x01BC11C0, app::TimelineConstraint*, GetConstraintForEntity, (app::ITimelineEntityParent * parent, app::EntityId entity, app::Constraint__Enum constraint))
    IL2CPP_REGISTER_METHOD(0x01BC12B0, bool, IsEndConstraintDependentOnAnything_1, (app::ITimelineEntityParent * parent, app::EntityId owning_entity_id))
    IL2CPP_REGISTER_METHOD(0x01BC12E0, bool, IsEndConstraintDependentOnAnything_2, (app::IConstraint * constraint, app::EntityId owning_entity_id))
    IL2CPP_REGISTER_METHOD(0x01BC1410, bool, IsContentEnd, (app::TimelineEntityRecord * record))
    IL2CPP_REGISTER_METHOD(0x01BC1460, app::TimelineEntityRecord*, GetRecordFor, (app::ITimelineEntityParent * timeline, app::ITimelineEntity* timeline_entity))
} // namespace app::classes::Moon::Timeline::ITimelineEntityParentExtensions
