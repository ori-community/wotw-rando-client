#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EntityId.h>
#include <Modloader/app/structs/Constraint__Enum.h>
#include <Modloader/app/structs/IConstrainedEntity.h>
#include <Modloader/app/structs/IConstraint.h>
#include <Modloader/app/structs/TimelineEntityRecord.h>

namespace app::classes::Moon::Timeline::Constraints::EntityIdExtensions {
    IL2CPP_REGISTER_METHOD(0x01BB62A0, bool, IsParentOrNothing, (app::EntityId id))
    IL2CPP_REGISTER_METHOD(0x01BB62B0, app::IConstraint*, GetConstraint, (app::IConstrainedEntity * c_entity, app::Constraint__Enum constraint))
    IL2CPP_REGISTER_METHOD(0x01BB63D0, bool, PointsToCustomEvent, (app::IConstraint * constraint))
    IL2CPP_REGISTER_METHOD(0x01BB6470, app::Constraint__Enum, GetTargetAction, (app::IConstraint * constraint))
    IL2CPP_REGISTER_METHOD(0x01BB6550, bool, EffectsParentLength, (app::IConstraint * constraint))
    IL2CPP_REGISTER_METHOD(0x01BB6640, bool, IsIndeterminedLength, (app::TimelineEntityRecord * record))
} // namespace app::classes::Moon::Timeline::Constraints::EntityIdExtensions
