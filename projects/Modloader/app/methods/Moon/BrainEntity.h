#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BrainEntity.h>
#include <Modloader/app/structs/EntityId.h>
#include <Modloader/app/structs/IBrainController.h>
#include <Modloader/app/structs/IConstrainedEntity.h>
#include <Modloader/app/structs/IConstrainedEntityWithChildren.h>
#include <Modloader/app/structs/IConstraint.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/ITimelineEntity.h>
#include <Modloader/app/structs/ITimelineEntityParent.h>
#include <Modloader/app/structs/ITrimController.h>
#include <Modloader/app/structs/List_1_Moon_MoonReference_1__2.h>
#include <Modloader/app/structs/List_1_Moon_Timeline_ConstraintsMetaData_.h>
#include <Modloader/app/structs/List_1_Moon_Timeline_ExternalTimelineRecord_.h>
#include <Modloader/app/structs/List_1_Moon_Timeline_TimelineEntityRecord_.h>
#include <Modloader/app/structs/List_1_Moon_Timeline_TimelineMarkerRecord_.h>
#include <Modloader/app/structs/MoonReference_1_Moon_Timeline_ITimelineEntity_.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Moon::BrainEntity {
    IL2CPP_REGISTER_METHOD(0x01BA63B0, app::String*, get_FullAddress, app::BrainEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BA64A0, int32_t, get_PreviewBranchIndex, app::BrainEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A26C10, void, set_PreviewBranchIndex, app::BrainEntity* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x01BA6580, app::MoonReference_1_Moon_Timeline_ITimelineEntity_*, get_EditorActiveTimeline, app::BrainEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC00, app::List_1_Moon_MoonReference_1__2*, get_Timelines, app::BrainEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BA66F0, app::MoonReference_1_Moon_Timeline_ITimelineEntity_*, get_ActiveTimeline, app::BrainEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FDD20, float, get_CurrentTime, app::BrainEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FDD30, void, set_CurrentTime, app::BrainEntity* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x0063D070, bool, get_ShouldUpdateRecords, app::BrainEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0063D080, void, set_ShouldUpdateRecords, app::BrainEntity* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x01BA6700, bool, ApproximateEvent, app::BrainEntity* this_ptr, int32_t evt, float* time)
    IL2CPP_REGISTER_METHOD(0x01BA6830, app::IBrainController*, get_ResolvedBrainController, app::BrainEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BA6900, void, RefreshEntries, app::BrainEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BA6D10, void, OnStartPlayback, app::BrainEntity* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x01BA6F60, void, OnUpdateEntity, app::BrainEntity* this_ptr, float delta_time)
    IL2CPP_REGISTER_METHOD(0x01BA7020, void, OnStopPlayback, app::BrainEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BA7100, void, OnPausePlayback, app::BrainEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BA71F0, void, OnResumePlayback, app::BrainEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BA72E0, app::List_1_Moon_Timeline_TimelineEntityRecord_*, get_EntityRecords, app::BrainEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BA75E0, app::List_1_Moon_Timeline_ConstraintsMetaData_*, get_ConstraintMetaDatas, app::BrainEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BA7630, app::List_1_Moon_Timeline_TimelineMarkerRecord_*, get_MarkerRecords, app::BrainEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BA7780, app::List_1_Moon_Timeline_ExternalTimelineRecord_*, get_ExternalRecords, app::BrainEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BA77D0, void, RecursivelySetupExecutionOrder, app::BrainEntity* this_ptr, int32_t order)
    IL2CPP_REGISTER_METHOD(0x01BA7A40, bool, HasFinished, app::BrainEntity* this_ptr, int32_t event_id)
    IL2CPP_REGISTER_METHOD(0x01BA7BD0, app::IConstraint*, get_StartConstraint, app::BrainEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BA7C20, app::IConstraint*, get_EndConstraint, app::BrainEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::EntityId, get_EntityId, app::BrainEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::ITimelineEntity*, get_Entity, app::BrainEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BA7C70, int32_t, get_ConstrainedEntitiesCount, app::BrainEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FDD20, float, get_Progress, app::BrainEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BA7D00, app::IConstrainedEntity*, GetConstrainedEntityFrom, app::BrainEntity* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x01BA7DC0, app::IConstrainedEntity*, GetConstrainedEntity, app::BrainEntity* this_ptr, app::EntityId entity_id)
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::ITimelineEntityParent*, get_GetITimelineEntityParent, app::BrainEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBCE0, app::ITrimController*, get_TrimController, app::BrainEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBCF0, void, set_TrimController, app::BrainEntity* this_ptr, app::ITrimController* value)
    IL2CPP_REGISTER_METHOD(0x01BA7E90, bool, IsTheSame, app::BrainEntity* this_ptr, app::IConstrainedEntityWithChildren* context)
    IL2CPP_REGISTER_METHOD(0x01BA7F50, void, SetPreviewBranch, app::BrainEntity* this_ptr, int32_t branch)
    IL2CPP_REGISTER_METHOD(0x01BA7FF0, void, ctor, app::BrainEntity* this_ptr)
} // namespace app::classes::Moon::BrainEntity
