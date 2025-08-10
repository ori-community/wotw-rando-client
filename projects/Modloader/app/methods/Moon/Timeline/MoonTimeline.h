#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Constraint__Enum.h>
#include <Modloader/app/structs/CustomPlaybackSettings.h>
#include <Modloader/app/structs/EntityId.h>
#include <Modloader/app/structs/IConstrainedEntity.h>
#include <Modloader/app/structs/IConstrainedEntityWithChildren.h>
#include <Modloader/app/structs/IConstraint.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/ITimelineEntity.h>
#include <Modloader/app/structs/ITimelineEntityParent.h>
#include <Modloader/app/structs/ITrimController.h>
#include <Modloader/app/structs/List_1_Moon_AnimationPlayer_.h>
#include <Modloader/app/structs/List_1_Moon_ScalableAnimationPlayer_.h>
#include <Modloader/app/structs/List_1_Moon_Timeline_ConstraintsMetaData_.h>
#include <Modloader/app/structs/List_1_Moon_Timeline_EventTriggerGameplayAnimator_.h>
#include <Modloader/app/structs/List_1_Moon_Timeline_ExternalTimelineRecord_.h>
#include <Modloader/app/structs/List_1_Moon_Timeline_IEventDescriptor_.h>
#include <Modloader/app/structs/List_1_Moon_Timeline_ReadyToFinishAnimator_.h>
#include <Modloader/app/structs/List_1_Moon_Timeline_TimelineEntityRecord_.h>
#include <Modloader/app/structs/List_1_Moon_Timeline_TimelineMarkerRecord_.h>
#include <Modloader/app/structs/List_1_System_Object_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/Nullable_1_Single_.h>
#include <Modloader/app/structs/Reaction.h>
#include <Modloader/app/structs/RecordableParsingGroup__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TimelineConstraint.h>
#include <Modloader/app/structs/TimelineEntity.h>
#include <Modloader/app/structs/TimelineEntityRecord.h>
#include <Modloader/app/structs/UpdateType__Enum.h>

namespace app::classes::Moon::Timeline::MoonTimeline {
    IL2CPP_REGISTER_METHOD(0x01BC1B00, void, PostEvent, app::MoonTimeline* this_ptr, app::ITimelineEntityParent* scope, app::EntityId id, int32_t event_id)
    IL2CPP_REGISTER_METHOD(0x01BC1BD0, void, PostRequest, app::MoonTimeline* this_ptr, int32_t event_id, app::TimelineEntity* entity)
    IL2CPP_REGISTER_METHOD(0x01BC1DE0, void, BuildReactions_1, app::MoonTimeline* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BC23C0, void, BuildReactions_2, app::MoonTimeline* this_ptr, app::CustomPlaybackSettings* settings)
    IL2CPP_REGISTER_METHOD(
        0x01BC2A30,
        void,
        PendReactionsFor,
        app::MoonTimeline* this_ptr,
        app::ITimelineEntityParent* host,
        app::EntityId entity_id,
        int32_t event_id,
        float anchor_time
    )
    IL2CPP_REGISTER_METHOD(0x01BC2F60, void, PutReactionToProcessQueue, app::MoonTimeline* this_ptr, app::Reaction reaction)
    IL2CPP_REGISTER_METHOD(0x01BC2FA0, uint32_t, HashAnchorPoint, int32_t scope, app::EntityId id, int32_t event_id)
    IL2CPP_REGISTER_METHOD(0x01BC3050, bool, IsStoppingThisFrame, app::MoonTimeline* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BC3460, void, OnStartPlaybackInternal, app::MoonTimeline* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x01BC37B0, void, UpdateReactions, app::MoonTimeline* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BC3A90, void, AddReaction, app::MoonTimeline* this_ptr, uint32_t hash, app::Reaction reaction)
    IL2CPP_REGISTER_METHOD(0x01BC3DA0, void, ResetStatics, )
    IL2CPP_REGISTER_METHOD(0x01BC3E90, void, OnDestroy, app::MoonTimeline* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BC3EF0, void, Finalize, app::MoonTimeline* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BC3F60, void, MoonCleanup, app::MoonTimeline* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BC3FB0, bool, IsTheSame, app::MoonTimeline* this_ptr, app::IConstrainedEntityWithChildren* context)
    IL2CPP_REGISTER_METHOD(0x0074B530, float, get_CurrentTime, app::MoonTimeline* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0074B540, void, set_CurrentTime, app::MoonTimeline* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x0074B530, float, get_Progress, app::MoonTimeline* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00660430, app::List_1_Moon_Timeline_ConstraintsMetaData_*, get_ConstraintMetaDatas, app::MoonTimeline* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005B0220, app::List_1_Moon_Timeline_TimelineEntityRecord_*, get_EntityRecords, app::MoonTimeline* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00418200, app::List_1_Moon_Timeline_TimelineMarkerRecord_*, get_MarkerRecords, app::MoonTimeline* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0049F2B0, app::List_1_Moon_Timeline_ExternalTimelineRecord_*, get_ExternalRecords, app::MoonTimeline* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BC4070, bool, HasEntity, app::MoonTimeline* this_ptr, app::EntityId entity_id)
    IL2CPP_REGISTER_METHOD(0x01BC4160, void, OnEnable, app::MoonTimeline* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BC42C0, void, OnDisable, app::MoonTimeline* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BC4470, void, OnGameReset, app::MoonTimeline* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BC4480, void, OnStartPlayback, app::MoonTimeline* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x01BC4700, void, RecursivelySetupExecutionOrder, app::MoonTimeline* this_ptr, int32_t order)
    IL2CPP_REGISTER_METHOD(0x01BC49A0, void, PrintAllRootTimelinesPlaying, )
    IL2CPP_REGISTER_METHOD(0x01BC4BC0, void, PrintAllTimelinesPlaying, )
    IL2CPP_REGISTER_METHOD(0x01BC4DD0, float, get_Duration, app::MoonTimeline* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BC5170, app::String*, get_ProfilingMarkerName, app::MoonTimeline* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BC5210, float, get_NormalizedTime, app::MoonTimeline* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BC52F0, void, OnStopPlayback, app::MoonTimeline* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BC5330, void, OnStopPlaybackInternal, app::MoonTimeline* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BC5760, void, OnPausePlayback, app::MoonTimeline* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BC58B0, void, OnResumePlayback, app::MoonTimeline* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00597B10, app::UpdateType__Enum, get_UpdateType, app::MoonTimeline* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BC5A00, void, OnUpdateEntity, app::MoonTimeline* this_ptr, float delta)
    IL2CPP_REGISTER_METHOD(0x01BC5D60, bool, HasPlaying, app::MoonTimeline* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BC5F20, void, ProcessReactions, app::MoonTimeline* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BC62D0, void, AddEntityRecordUnsafe, app::MoonTimeline* this_ptr, app::TimelineEntityRecord* record)
    IL2CPP_REGISTER_METHOD(0x01BC6370, void, AddEntityRecordUnsafeWithNewId, app::MoonTimeline* this_ptr, app::TimelineEntityRecord* record)
    IL2CPP_REGISTER_METHOD(0x01BC6450, void, RemoveEntityRecordUnsafe, app::MoonTimeline* this_ptr, app::TimelineEntityRecord* record)
    IL2CPP_REGISTER_METHOD(0x01BC64F0, app::EntityId, AddChild, app::MoonTimeline* this_ptr, app::ITimelineEntity* entity)
    IL2CPP_REGISTER_METHOD(0x01BC68E0, bool, IsEntityWaiting, app::MoonTimeline* this_ptr, app::EntityId entity, int32_t event_id)
    IL2CPP_REGISTER_METHOD(0x01BC6B20, void, DirtyAllConstraintsConstraintedTo, app::MoonTimeline* this_ptr, app::TimelineConstraint* constraint)
    IL2CPP_REGISTER_METHOD(
        0x01BC6CC0,
        void,
        DirtyConstraintIfItReliesOn,
        app::MoonTimeline* this_ptr,
        app::TimelineConstraint* relied_on,
        app::IConstraint* other
    )
    IL2CPP_REGISTER_METHOD(
        0x01BC6DC0,
        app::EntityId,
        GetEntityConstrainedTo,
        app::MoonTimeline* this_ptr,
        app::EntityId entity_id,
        app::Constraint__Enum constraint
    )
    IL2CPP_REGISTER_METHOD(0x01BC6DF0, int32_t, GetEventId, app::MoonTimeline* this_ptr, app::EntityId entity_id, app::Constraint__Enum constraint)
    IL2CPP_REGISTER_METHOD(0x01BC6E10, float, GetTimeOffset, app::MoonTimeline* this_ptr, app::EntityId entity_id, app::Constraint__Enum constraint)
    IL2CPP_REGISTER_METHOD(0x01BC6E40, app::IConstraint*, get_StartConstraint, app::MoonTimeline* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BC6E90, app::IConstraint*, get_EndConstraint, app::MoonTimeline* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::EntityId, get_EntityId, app::MoonTimeline* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::ITimelineEntity*, get_Entity, app::MoonTimeline* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BC6EE0, int32_t, get_ConstrainedEntitiesCount, app::MoonTimeline* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BC6F70, app::IConstrainedEntity*, GetConstrainedEntityFrom, app::MoonTimeline* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x01BC7030, app::IConstrainedEntity*, GetConstrainedEntity, app::MoonTimeline* this_ptr, app::EntityId entity_id)
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::ITimelineEntityParent*, get_GetITimelineEntityParent, app::MoonTimeline* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BC7100, app::Nullable_1_Single_, get_ForcedDuration, app::MoonTimeline* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BC7110, void, set_ForcedDuration, app::MoonTimeline* this_ptr, app::Nullable_1_Single_ value)
    IL2CPP_REGISTER_METHOD(0x005FDE00, app::ITrimController*, get_TrimController, app::MoonTimeline* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005FDE10, void, set_TrimController, app::MoonTimeline* this_ptr, app::ITrimController* value)
    IL2CPP_REGISTER_METHOD(0x01BC7120, app::String*, get_FullAddress, app::MoonTimeline* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BC7260, void, Remove, app::MoonTimeline* this_ptr, app::EntityId id)
    IL2CPP_REGISTER_METHOD(0x01BC74F0, app::EntityId, AddMarkerRecord_1, app::MoonTimeline* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BC75D0, app::EntityId, AddMarkerRecord_2, app::MoonTimeline* this_ptr, app::EntityId constrained_to)
    IL2CPP_REGISTER_METHOD(
        0x01BC7770,
        void,
        AddMarkerRecord_3,
        app::MoonTimeline* this_ptr,
        app::EntityId marker_id,
        app::EntityId constrained_to,
        int32_t event_id
    )
    IL2CPP_REGISTER_METHOD(0x01BC7900, void, RemoveMarkerRecord, app::MoonTimeline* this_ptr, app::EntityId marker_id)
    IL2CPP_REGISTER_METHOD(0x01BC7A10, void, AddExternalRecord, app::MoonTimeline* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BC7CD0, bool, HasFinished, app::MoonTimeline* this_ptr, int32_t event_id)
    IL2CPP_REGISTER_METHOD(0x01BC7EE0, void, SetTimeScale, app::MoonTimeline* this_ptr, float timescale)
    IL2CPP_REGISTER_METHOD(0x01BC80C0, void, SynchronizeData, app::MoonTimeline* this_ptr, app::MoonTimeline* timeline, app::TimelineEntityRecord* record)
    IL2CPP_REGISTER_METHOD(0x01BC81F0, void, SortEntityRecords, app::MoonTimeline* this_ptr, app::MoonTimeline* timeline_entity)
    IL2CPP_REGISTER_METHOD(0x01BC8570, void, ForceDuration, app::MoonTimeline* this_ptr, float duration)
    IL2CPP_REGISTER_METHOD(0x01BC8620, bool, ApproximateEvent, app::MoonTimeline* this_ptr, int32_t evt, float* time)
    IL2CPP_REGISTER_METHOD(0x01BC8840, void, CollectEvents, app::MoonTimeline* this_ptr, app::List_1_Moon_Timeline_IEventDescriptor_* events)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::RecordableParsingGroup__Enum, get_ParsingGroup, app::MoonTimeline* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A640A0, bool, get_SelfManaged, app::MoonTimeline* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BC89A0, void, set_SelfManaged, app::MoonTimeline* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x01BC89B0, void, ctor, app::MoonTimeline* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BC9480, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x01EB9450, app::List_1_System_Object_*, GetAnimators_1, app::MoonTimeline* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EB9450, app::List_1_Moon_Timeline_EventTriggerGameplayAnimator_*, GetAnimators_2, app::MoonTimeline* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EB9450, app::List_1_Moon_ScalableAnimationPlayer_*, GetAnimators_3, app::MoonTimeline* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EB9450, app::List_1_Moon_AnimationPlayer_*, GetAnimators_4, app::MoonTimeline* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EB9450, app::List_1_Moon_Timeline_ReadyToFinishAnimator_*, GetAnimators_5, app::MoonTimeline* this_ptr)
} // namespace app::classes::Moon::Timeline::MoonTimeline
