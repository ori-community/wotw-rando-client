#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::AkAudioInputManager_AudioSamplesInteropDelegate {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::AkAudioInputManager_AudioSamplesInteropDelegate * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x026C88D0, bool, Invoke, (app::AkAudioInputManager_AudioSamplesInteropDelegate * this_ptr, uint32_t playing_i_d, app::Single__Array* samples, uint32_t channel_index, uint32_t frames))
    IL2CPP_REGISTER_METHOD(0x026C8CE0, app::IAsyncResult*, BeginInvoke, (app::AkAudioInputManager_AudioSamplesInteropDelegate * this_ptr, uint32_t playing_i_d, app::Single__Array* samples, uint32_t channel_index, uint32_t frames, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (app::AkAudioInputManager_AudioSamplesInteropDelegate * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::AkAudioInputManager_AudioSamplesInteropDelegate
