#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/AudioSampleProvider_ConsumeSampleFramesNativeFunction.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::UnityEngine::Experimental::Audio::AudioSampleProvider_ConsumeSampleFramesNativeFunction {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::AudioSampleProvider_ConsumeSampleFramesNativeFunction * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02CE3D50, uint32_t, Invoke, (app::AudioSampleProvider_ConsumeSampleFramesNativeFunction * this_ptr, uint32_t provider_id, void* interleaved_sample_frames, uint32_t sample_frame_count))
    IL2CPP_REGISTER_METHOD(0x03144B00, app::IAsyncResult*, BeginInvoke, (app::AudioSampleProvider_ConsumeSampleFramesNativeFunction * this_ptr, uint32_t provider_id, void* interleaved_sample_frames, uint32_t sample_frame_count, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, uint32_t, EndInvoke, (app::AudioSampleProvider_ConsumeSampleFramesNativeFunction * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::UnityEngine::Experimental::Audio::AudioSampleProvider_ConsumeSampleFramesNativeFunction
