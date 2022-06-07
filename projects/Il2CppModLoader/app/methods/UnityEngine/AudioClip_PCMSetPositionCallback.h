#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::AudioClip_PCMSetPositionCallback {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::AudioClip_PCMSetPositionCallback * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x01C77D40, void, Invoke, (app::AudioClip_PCMSetPositionCallback * this_ptr, int32_t position))
    IL2CPP_REGISTER_METHOD(0x0313EA60, app::IAsyncResult *, BeginInvoke, (app::AudioClip_PCMSetPositionCallback * this_ptr, int32_t position, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::AudioClip_PCMSetPositionCallback * this_ptr, app::IAsyncResult * result))
}
