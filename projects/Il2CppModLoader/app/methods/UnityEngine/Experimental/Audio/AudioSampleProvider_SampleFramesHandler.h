#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::Experimental::Audio::AudioSampleProvider_SampleFramesHandler {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::AudioSampleProvider_SampleFramesHandler * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x02C11970, void, Invoke, (app::AudioSampleProvider_SampleFramesHandler * this_ptr, app::AudioSampleProvider * provider, uint32_t sample_frame_count))
    IL2CPP_REGISTER_METHOD(0x03144BF0, app::IAsyncResult *, BeginInvoke, (app::AudioSampleProvider_SampleFramesHandler * this_ptr, app::AudioSampleProvider * provider, uint32_t sample_frame_count, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::AudioSampleProvider_SampleFramesHandler * this_ptr, app::IAsyncResult * result))
}
