#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UnityEngine::Events::UnityAction_1_UnityEngine_Vector2_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::UnityAction_1_UnityEngine_Vector2_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01D25940, void, Invoke, (app::UnityAction_1_UnityEngine_Vector2_ * this_ptr, app::Vector2 arg0))
    IL2CPP_REGISTER_METHOD(0x02AC7BA0, app::IAsyncResult*, BeginInvoke, (app::UnityAction_1_UnityEngine_Vector2_ * this_ptr, app::Vector2 arg0, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::UnityAction_1_UnityEngine_Vector2_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::UnityEngine::Events::UnityAction_1_UnityEngine_Vector2_
