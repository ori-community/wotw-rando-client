#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UnityEngine::Experimental::Audio::AudioSampleProvider {
    IL2CPP_REGISTER_METHOD(0x03144810, void, Finalize, (app::AudioSampleProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03144960, void, Dispose, (app::AudioSampleProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024AD170, uint32_t, get_id, (app::AudioSampleProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A000, void, set_id, (app::AudioSampleProvider * this_ptr, uint32_t value))
    IL2CPP_REGISTER_METHOD(0x03144A60, void, InvokeSampleFramesAvailable, (app::AudioSampleProvider * this_ptr, int32_t sample_frame_count))
    IL2CPP_REGISTER_METHOD(0x03144A80, void, InvokeSampleFramesOverflow, (app::AudioSampleProvider * this_ptr, int32_t dropped_sample_frame_count))
    IL2CPP_REGISTER_METHOD(0x03144AA0, void, InternalSetScriptingPtr, (uint32_t provider_id, app::AudioSampleProvider* provider))
} // namespace app::classes::UnityEngine::Experimental::Audio::AudioSampleProvider
