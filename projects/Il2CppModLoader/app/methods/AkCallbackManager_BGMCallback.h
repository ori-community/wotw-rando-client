#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::AkCallbackManager_BGMCallback {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::AkCallbackManager_BGMCallback * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x026D3740, app::AKRESULT__Enum, Invoke, (app::AkCallbackManager_BGMCallback * this_ptr, bool in_b_other_audio_playing, app::Object * in__cookie))
    IL2CPP_REGISTER_METHOD(0x026D3AC0, app::IAsyncResult *, BeginInvoke, (app::AkCallbackManager_BGMCallback * this_ptr, bool in_b_other_audio_playing, app::Object * in__cookie, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, app::AKRESULT__Enum, EndInvoke, (app::AkCallbackManager_BGMCallback * this_ptr, app::IAsyncResult * result))
}
