#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::AkAudioInputManager_AudioFormatDelegate {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::AkAudioInputManager_AudioFormatDelegate * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x015C22A0, void, Invoke, (app::AkAudioInputManager_AudioFormatDelegate * this_ptr, uint32_t playing_i_d, app::AkAudioFormat* format))
    IL2CPP_REGISTER_METHOD(0x026C82B0, app::IAsyncResult*, BeginInvoke, (app::AkAudioInputManager_AudioFormatDelegate * this_ptr, uint32_t playing_i_d, app::AkAudioFormat* format, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::AkAudioInputManager_AudioFormatDelegate * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::AkAudioInputManager_AudioFormatDelegate
