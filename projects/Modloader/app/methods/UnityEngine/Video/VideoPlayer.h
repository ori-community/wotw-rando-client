#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/VideoPlayer.h>
#include <Modloader/app/structs/VideoSource__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/AudioSource.h>
#include <Modloader/app/structs/VideoPlayer_EventHandler.h>

namespace app::classes::UnityEngine::Video::VideoPlayer {
    IL2CPP_REGISTER_METHOD(0x031B7200, void, set_source, (app::VideoPlayer * this_ptr, app::VideoSource__Enum value))
    IL2CPP_REGISTER_METHOD(0x031B7260, app::String*, get_url, (app::VideoPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031B72B0, void, set_url, (app::VideoPlayer * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x031B7310, void, Prepare, (app::VideoPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031B7360, void, Play, (app::VideoPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031B73B0, void, Pause, (app::VideoPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031B7400, void, Stop, (app::VideoPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031B7450, double, get_time, (app::VideoPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031B74A0, void, set_time, (app::VideoPlayer * this_ptr, double value))
    IL2CPP_REGISTER_METHOD(0x031B7500, int64_t, get_frame, (app::VideoPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031B7550, void, set_frame, (app::VideoPlayer * this_ptr, int64_t value))
    IL2CPP_REGISTER_METHOD(0x031B75B0, void, StepForward, (app::VideoPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031B7600, float, get_playbackSpeed, (app::VideoPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031B7650, void, set_playbackSpeed, (app::VideoPlayer * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x031B76B0, uint64_t, get_frameCount, (app::VideoPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031B7700, double, get_length, (app::VideoPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031B7750, void, EnableAudioTrack, (app::VideoPlayer * this_ptr, uint16_t track_index, bool enabled))
    IL2CPP_REGISTER_METHOD(0x031B77D0, void, SetTargetAudioSource, (app::VideoPlayer * this_ptr, uint16_t track_index, app::AudioSource* source))
    IL2CPP_REGISTER_METHOD(0x031B7840, void, add_prepareCompleted, (app::VideoPlayer * this_ptr, app::VideoPlayer_EventHandler* value))
    IL2CPP_REGISTER_METHOD(0x031B7930, void, remove_prepareCompleted, (app::VideoPlayer * this_ptr, app::VideoPlayer_EventHandler* value))
    IL2CPP_REGISTER_METHOD(0x031B7A20, void, add_loopPointReached, (app::VideoPlayer * this_ptr, app::VideoPlayer_EventHandler* value))
    IL2CPP_REGISTER_METHOD(0x031B7B10, void, remove_loopPointReached, (app::VideoPlayer * this_ptr, app::VideoPlayer_EventHandler* value))
    IL2CPP_REGISTER_METHOD(0x031B7C00, void, add_seekCompleted, (app::VideoPlayer * this_ptr, app::VideoPlayer_EventHandler* value))
    IL2CPP_REGISTER_METHOD(0x031B7CF0, void, remove_seekCompleted, (app::VideoPlayer * this_ptr, app::VideoPlayer_EventHandler* value))
    IL2CPP_REGISTER_METHOD(0x031B7DE0, void, InvokePrepareCompletedCallback_Internal, (app::VideoPlayer * source))
    IL2CPP_REGISTER_METHOD(0x031B7E10, void, InvokeFrameReadyCallback_Internal, (app::VideoPlayer * source, int64_t frame_idx))
    IL2CPP_REGISTER_METHOD(0x031B7E50, void, InvokeLoopPointReachedCallback_Internal, (app::VideoPlayer * source))
    IL2CPP_REGISTER_METHOD(0x031B7E80, void, InvokeStartedCallback_Internal, (app::VideoPlayer * source))
    IL2CPP_REGISTER_METHOD(0x031B7EB0, void, InvokeFrameDroppedCallback_Internal, (app::VideoPlayer * source))
    IL2CPP_REGISTER_METHOD(0x031B7EE0, void, InvokeErrorReceivedCallback_Internal, (app::VideoPlayer * source, app::String* error_str))
    IL2CPP_REGISTER_METHOD(0x031B7F20, void, InvokeSeekCompletedCallback_Internal, (app::VideoPlayer * source))
    IL2CPP_REGISTER_METHOD(0x031B7F50, void, InvokeClockResyncOccurredCallback_Internal, (app::VideoPlayer * source, double seconds))
} // namespace app::classes::UnityEngine::Video::VideoPlayer
