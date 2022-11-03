#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::GhostTimelineEventsPlugin {
    IL2CPP_REGISTER_METHOD(0x002FBB80, app::GlobalRecordingTable*, get_GlobalRecordingTable, (app::GhostTimelineEventsPlugin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB90, void, set_GlobalRecordingTable, (app::GhostTimelineEventsPlugin * this_ptr, app::GlobalRecordingTable* value))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::GhostRecorder_GhostPluginRecordingType__Enum, GetRecordingType, (app::GhostTimelineEventsPlugin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007EA290, void, PlayCycle, (app::GhostTimelineEventsPlugin * this_ptr, float time))
    IL2CPP_REGISTER_METHOD(0x007EA330, void, RecordCycle, (app::GhostTimelineEventsPlugin * this_ptr, int32_t frame))
    IL2CPP_REGISTER_METHOD(0x007EA500, void, OnStartRecording, (app::GhostTimelineEventsPlugin * this_ptr, app::PreRecordingData* pre_recording_data))
    IL2CPP_REGISTER_METHOD(0x007EA840, void, OnStopRecording, (app::GhostTimelineEventsPlugin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007EAAE0, bool, ShouldRecord, (app::GhostTimelineEventsPlugin * this_ptr, app::ITimelineEntity* timeline, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x007EAD20, void, OnTimelineEvent, (app::GhostTimelineEventsPlugin * this_ptr, app::ITimelineEntity* entity, app::IContext* context, app::MoonTimelineNotifier_Action__Enum action))
    IL2CPP_REGISTER_METHODINFO(0x0478E308, GhostTimelineEventsPlugin_OnTimelineEvent__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x007EAEC0, void, RecordTimelineEvent, (app::GhostTimelineEventsPlugin * this_ptr, app::ITimelineEntity* entity, app::IContext* context, app::MoonTimelineNotifier_Action__Enum action))
    IL2CPP_REGISTER_METHOD(0x007EB080, void, RecordTimelinePlay, (app::GhostTimelineEventsPlugin * this_ptr, app::MoonTimeline* timeline, app::IContext* context, app::MoonTimelineNotifier_Action__Enum action))
    IL2CPP_REGISTER_METHOD(0x007EB540, void, RecordIndeterminateLength, (app::GhostTimelineEventsPlugin * this_ptr, app::ITimelineEntity* entity, app::IContext* context, app::MoonTimelineNotifier_Action__Enum action))
    IL2CPP_REGISTER_METHOD(0x007EB790, void, WriteIndeterminateLengthDuration, (app::GhostTimelineEventsPlugin * this_ptr, int64_t id))
    IL2CPP_REGISTER_METHOD(0x007EBB30, void, RecordScalableAnimation, (app::GhostTimelineEventsPlugin * this_ptr, app::ScalableAnimationPlayer* scalable_animation_player, app::AnimationContext context))
    IL2CPP_REGISTER_METHOD(0x007EBDD0, void, ctor, (app::GhostTimelineEventsPlugin * this_ptr))
} // namespace app::classes::GhostTimelineEventsPlugin
