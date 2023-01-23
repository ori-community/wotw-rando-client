#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ScalableAnimationPlayer.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/TimelineEntityRecord.h>
#include <Modloader/app/structs/RecordableParsingGroup__Enum.h>
#include <Modloader/app/structs/List_1_Moon_Timeline_IEventDescriptor_.h>
#include <Modloader/app/structs/Single__Array.h>
#include <Modloader/app/structs/EntityId.h>

namespace app::classes::Moon::ScalableAnimationPlayer {
    IL2CPP_REGISTER_METHOD(0x003FC510, float, get_EffectiveSpeed, (app::ScalableAnimationPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BAC3E0, float, get_PreviewDuration, (app::ScalableAnimationPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0068B8C0, bool, get_ShouldUpdatePreviewDuration, (app::ScalableAnimationPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00757000, void, set_ShouldUpdatePreviewDuration, (app::ScalableAnimationPlayer * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x01BAC410, bool, get_UseSimulationDataForPreview, (app::ScalableAnimationPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00756FF0, void, set_UseSimulationDataForPreview, (app::ScalableAnimationPlayer * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x01BAC4B0, float, get_AnimationOriginalDuration, (app::ScalableAnimationPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D6DA00, void, OnValidate, (app::ScalableAnimationPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BAC590, void, OnActiveAnimationStopEvent, (app::ScalableAnimationPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BAC5D0, bool, HasFinished, (app::ScalableAnimationPlayer * this_ptr, int32_t event_id))
    IL2CPP_REGISTER_METHOD(0x00B83350, void, SetSpeed, (app::ScalableAnimationPlayer * this_ptr, float speed))
    IL2CPP_REGISTER_METHOD(0x01BAC740, void, OnStartPlayback, (app::ScalableAnimationPlayer * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x01BAC8A0, void, OnUpdateEntity, (app::ScalableAnimationPlayer * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x01BACA40, void, UpdateMarkers, (app::ScalableAnimationPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BACBC0, void, SynchronizeData, (app::ScalableAnimationPlayer * this_ptr, app::MoonTimeline* timeline, app::TimelineEntityRecord* record))
    IL2CPP_REGISTER_METHOD(0x01BACE30, bool, get_HasCustomEvents, (app::ScalableAnimationPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BACEC0, float, get_FrameStep, (app::ScalableAnimationPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::RecordableParsingGroup__Enum, get_ParsingGroup, (app::ScalableAnimationPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BAD000, void, CollectEvents, (app::ScalableAnimationPlayer * this_ptr, app::List_1_Moon_Timeline_IEventDescriptor_* events))
    IL2CPP_REGISTER_METHOD(0x01BAD160, app::Single__Array*, GetEventPreviewTimes, (app::ScalableAnimationPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BAD270, bool, ApproximateEvent, (app::ScalableAnimationPlayer * this_ptr, int32_t evt, float* time))
    IL2CPP_REGISTER_METHOD(0x01BAD4D0, void, UpdateIntervals, (app::ScalableAnimationPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BAD910, float, SnapNormalizedTime, (app::ScalableAnimationPlayer * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x01BADAE0, void, UpdatePreviewDuration, (app::ScalableAnimationPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BADCD0, void, GetNextIntervalFrom, (app::ScalableAnimationPlayer * this_ptr, float time, float* start, float* end, bool* scalable))
    IL2CPP_REGISTER_METHOD(0x01BADF20, float, GetSpeedForNormalizedTime, (app::ScalableAnimationPlayer * this_ptr, float time))
    IL2CPP_REGISTER_METHOD(0x01BADF90, app::EntityId, AddNewEvent, (app::ScalableAnimationPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BAE310, void, RemoveEventById, (app::ScalableAnimationPlayer * this_ptr, app::EntityId id))
    IL2CPP_REGISTER_METHOD(0x01BAE400, void, RegisterCustomPreview, (app::ScalableAnimationPlayer * this_ptr, float time, float normalized_time))
    IL2CPP_REGISTER_METHOD(0x01BAE830, float, GetNormalizedPreviewTimeForTime, (app::ScalableAnimationPlayer * this_ptr, float time))
    IL2CPP_REGISTER_METHOD(0x01BAEB10, void, GetBestInterval, (app::ScalableAnimationPlayer * this_ptr, float time, int32_t* left_index, int32_t* right_index))
    IL2CPP_REGISTER_METHOD(0x01BAEC70, void, ctor, (app::ScalableAnimationPlayer * this_ptr))
} // namespace app::classes::Moon::ScalableAnimationPlayer
