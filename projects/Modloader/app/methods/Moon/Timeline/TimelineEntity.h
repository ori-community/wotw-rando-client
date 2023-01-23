#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/TimelineEntity.h>
#include <Modloader/app/structs/PlaybackStatus.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/AnimatorPlayState__Enum.h>
#include <Modloader/app/structs/UpdateType__Enum.h>
#include <Modloader/app/structs/UpdateCategory__Enum.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/TimelineEntityRecord.h>
#include <Modloader/app/structs/Constraint__Enum.h>
#include <Modloader/app/structs/IEventReciever.h>
#include <Modloader/app/structs/ITimelineEntityParent.h>
#include <Modloader/app/structs/EntityId.h>
#include <Modloader/app/structs/GennadiysDice_DiceEvents__Enum.h>
#include <Modloader/app/structs/FixedDurationSceneEntity_Markers__Enum.h>
#include <Modloader/app/structs/Int32Enum__Enum.h>

namespace app::classes::Moon::Timeline::TimelineEntity {
    IL2CPP_REGISTER_METHOD(0x01E85270, bool, get_IsReadOnly, (app::TimelineEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E853D0, app::PlaybackStatus*, get_PlaybackStatus, (app::TimelineEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E85520, int32_t, get_Hash, (app::TimelineEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00863130, bool, get_ExpandedByDefault, (app::TimelineEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00863140, void, set_ExpandedByDefault, (app::TimelineEntity * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00F3ABF0, bool, get_ShowSampling, (app::TimelineEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E85550, void, set_ShowSampling, (app::TimelineEntity * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00BAB250, app::String*, get_Name, (app::TimelineEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006410F0, app::AnimatorPlayState__Enum, get_PlayState, (app::TimelineEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008F7CD0, void, set_PlayState, (app::TimelineEntity * this_ptr, app::AnimatorPlayState__Enum value))
    IL2CPP_REGISTER_METHOD(0x01E85560, app::UpdateType__Enum, get_UpdateType, (app::TimelineEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::UpdateCategory__Enum, get_UpdateCategory, (app::TimelineEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008A34D0, void, SetTimeScale, (app::TimelineEntity * this_ptr, float timescale))
    IL2CPP_REGISTER_METHOD(0x008A34C0, float, GetTimeScale, (app::TimelineEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BBD1A0, bool, IsPlaying, (app::TimelineEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E85580, bool, IsPaused, (app::TimelineEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E85590, bool, IsStopped, (app::TimelineEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E855A0, void, UpdateExecutionOrder, (app::TimelineEntity * this_ptr, int32_t level))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnValidate, (app::TimelineEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E855E0, void, StartPlayback_1, (app::TimelineEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E855F0, void, StartPlayback_2, (app::TimelineEntity * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x01E85700, void, StopPlayback, (app::TimelineEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E85840, void, PausePlayback, (app::TimelineEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E85880, void, ResumePlayback, (app::TimelineEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPausePlayback, (app::TimelineEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnResumePlayback, (app::TimelineEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStartPlayback, (app::TimelineEntity * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStopPlayback, (app::TimelineEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnUpdateEntity, (app::TimelineEntity * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x01E858C0, void, OnUpdate, (app::TimelineEntity * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x01E85910, bool, CanUpdate, (app::TimelineEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E85920, void, Awake, (app::TimelineEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E859C0, void, OnDestroy, (app::TimelineEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E85A80, void, Finalize, (app::TimelineEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E85AB0, void, MoonCleanup, (app::TimelineEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E85AC0, void, RegisterUpdateHandler, (app::TimelineEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E85B80, void, UnregisterUpdateHandler, (app::TimelineEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006142D0, bool, get_IsSuspended, (app::TimelineEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006142E0, void, set_IsSuspended, (app::TimelineEntity * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x004C6660, app::SuspendableMask__Enum, get_Mask, (app::TimelineEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E85C20, void, set_Mask, (app::TimelineEntity * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x003FD3F0, int32_t, get_ExecutionOrderOffset, (app::TimelineEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SynchronizeData, (app::TimelineEntity * this_ptr, app::MoonTimeline* timeline, app::TimelineEntityRecord* record))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SynchronizePad, (app::TimelineEntity * this_ptr, app::MoonTimeline* timeline, app::TimelineEntityRecord* record, app::TimelineEntity* entity, app::Constraint__Enum type))
    IL2CPP_REGISTER_METHOD(0x002FBBA0, app::IEventReciever*, get_EventReciever, (app::TimelineEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBB0, void, set_EventReciever, (app::TimelineEntity * this_ptr, app::IEventReciever* value))
    IL2CPP_REGISTER_METHOD(0x01E85CD0, void, PostEvent_1, (app::TimelineEntity * this_ptr, app::ITimelineEntityParent* scope, app::EntityId id, int32_t event_id))
    IL2CPP_REGISTER_METHOD(0x01E85D80, void, PostEvent_2, (app::TimelineEntity * this_ptr, int32_t event_id))
    IL2CPP_REGISTER_METHOD(0x01E85E20, void, PostRequest, (app::TimelineEntity * this_ptr, int32_t event_id, app::TimelineEntity* entity))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnRootScopeStopped, (app::TimelineEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E85EC0, void, ctor, (app::TimelineEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x01552AE0, void, PostEvent_3, (app::TimelineEntity * this_ptr, app::GennadiysDice_DiceEvents__Enum evt))
    IL2CPP_REGISTER_METHODINFO(0x047143C8, TimelineEntity_PostEvent_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01552AE0, void, PostEvent_4, (app::TimelineEntity * this_ptr, app::FixedDurationSceneEntity_Markers__Enum evt))
    IL2CPP_REGISTER_METHODINFO(0x04765A18, TimelineEntity_PostEvent_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01552AE0, void, PostEvent_5, (app::TimelineEntity * this_ptr, app::Int32Enum__Enum evt))
} // namespace app::classes::Moon::Timeline::TimelineEntity
