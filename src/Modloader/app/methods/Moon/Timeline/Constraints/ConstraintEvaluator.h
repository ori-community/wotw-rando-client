#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Constraint__Enum.h>
#include <Modloader/app/structs/EntityId.h>
#include <Modloader/app/structs/HashSet_1_Moon_Timeline_Constraints_IConstraint_.h>
#include <Modloader/app/structs/IConstrainedEntity.h>
#include <Modloader/app/structs/IConstrainedEntityWithChildren.h>
#include <Modloader/app/structs/IConstraint.h>
#include <Modloader/app/structs/IConstraintEntityCache.h>
#include <Modloader/app/structs/ICustomConstrainable.h>
#include <Modloader/app/structs/IDisposable.h>
#include <Modloader/app/structs/ITimelineEntityParent.h>
#include <Modloader/app/structs/ITimelineEventProvider.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/TimelineMarkerRecord.h>

namespace app::classes::Moon::Timeline::Constraints::ConstraintEvaluator {
    IL2CPP_REGISTER_METHOD(0x01BB1790, app::IDisposable*, OpenCache, app::IConstraintEntityCache* cache)
    IL2CPP_REGISTER_METHOD(0x01BB1AB0, float, GetDuration_1, app::ITimelineEntityParent* parent, app::EntityId entity_id)
    IL2CPP_REGISTER_METHOD(0x01BB1BA0, float, GetDuration_2, app::ITimelineEntityParent* parent, app::IConstrainedEntity* entity)
    IL2CPP_REGISTER_METHOD(
        0x01BB1CA0,
        float,
        Evaluate,
        app::IConstrainedEntity* constrained_entity,
        app::Constraint__Enum constraint,
        app::IConstrainedEntityWithChildren* parent_entity
    )
    IL2CPP_REGISTER_METHOD(
        0x01BB1DA0,
        float,
        EvaluateConstraint_1,
        app::IConstrainedEntity* constrained_entity,
        app::MoonTimeline* parent_entity,
        int32_t constraint_type
    )
    IL2CPP_REGISTER_METHOD(
        0x01BB1E80,
        float,
        EvaluateConstraintWithChildren,
        app::IConstrainedEntityWithChildren* constrained_entity_with_children,
        app::IConstrainedEntityWithChildren* parent_entity,
        app::Constraint__Enum constraint
    )
    IL2CPP_REGISTER_METHOD(0x01BB2A70, app::IConstrainedEntity*, GetConstrainedEntity, app::IConstrainedEntityWithChildren* parent, app::EntityId id)
    IL2CPP_REGISTER_METHOD(
        0x01BB2C70,
        float,
        CalculateEndContraintForEntityWithChildren,
        app::IConstrainedEntityWithChildren* constrained_entity_with_children,
        app::IConstrainedEntityWithChildren* parent_entity,
        app::Constraint__Enum constraint
    )
    IL2CPP_REGISTER_METHOD(
        0x01BB3160,
        float,
        EvaluateConstraint_2,
        app::IConstrainedEntity* constrained_entity,
        app::IConstrainedEntityWithChildren* parent_entity,
        app::Constraint__Enum constraint
    )
    IL2CPP_REGISTER_METHOD(
        0x01BB3CD0,
        float,
        EvaluateCustomConstraint,
        app::IConstrainedEntity* constrained_entity,
        app::ICustomConstrainable* custom_constrainable,
        app::Constraint__Enum constraint
    )
    IL2CPP_REGISTER_METHOD(
        0x01BB3FC0,
        float,
        GetCustomEventTime_1,
        app::IConstrainedEntity* event_provider_entity,
        int32_t event_id,
        app::IConstrainedEntityWithChildren* parent_entity
    )
    IL2CPP_REGISTER_METHOD(0x01BB4100, bool, GetCustomEventTime_2, app::ITimelineEventProvider* provider, int32_t event_id, float min, float max, float* time)
    IL2CPP_REGISTER_METHOD(
        0x01BB4510,
        float,
        GetExternalTime,
        app::ITimelineEntityParent* timeline_entity_parent,
        app::IConstraint* constraint_object,
        app::IConstrainedEntityWithChildren* parent_entity
    )
    IL2CPP_REGISTER_METHOD(
        0x01BB49D0,
        float,
        EvaluateMarkerRecord,
        app::IConstrainedEntityWithChildren* marker_entity_parent,
        app::ITimelineEntityParent* marker_record_entity,
        app::TimelineMarkerRecord* marker_record,
        app::IConstraint* constraint_object,
        int32_t event_id
    )
    IL2CPP_REGISTER_METHOD(0x01BB5040, float, GetMarkerTime, app::ITimelineEntityParent* timeline_entity_parent, app::IConstraint* constraint_object)
    IL2CPP_REGISTER_METHOD(
        0x01BB53E0,
        void,
        DirtyEverythingConstrainedTo,
        app::IConstrainedEntityWithChildren* parent_entity,
        app::IConstrainedEntity* constrained_to
    )
    IL2CPP_REGISTER_METHOD(
        0x01BB56E0,
        void,
        RecursivelyDirtyConstraints,
        app::IConstrainedEntityWithChildren* parent_entity,
        app::IConstrainedEntity* constrained_to,
        app::HashSet_1_Moon_Timeline_Constraints_IConstraint_** processed
    )
    IL2CPP_REGISTER_METHOD(0x01BB5AB0, bool, DirtyConstraintIfItReliesOn, app::IConstrainedEntity* entity, app::IConstraint* constraint)
    IL2CPP_REGISTER_METHOD(
        0x01BB5BB0,
        float,
        EvaluateLastChildStop,
        app::IConstraint* constraint_object,
        app::Constraint__Enum constraint,
        app::IConstrainedEntityWithChildren* parent_entity
    )
    IL2CPP_REGISTER_METHOD(0x01BB5F80, app::IConstraint*, GetConstraintFor, app::IConstrainedEntity* constrained_entity, app::Constraint__Enum constraint)
    IL2CPP_REGISTER_METHOD(0x01BB60A0, void, cctor, )
} // namespace app::classes::Moon::Timeline::Constraints::ConstraintEvaluator
