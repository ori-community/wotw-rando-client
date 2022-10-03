#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UnityEngine::UI::ReflectionMethodsCache_Raycast2DCallback {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::ReflectionMethodsCache_Raycast2DCallback * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02667730, app::RaycastHit2D, Invoke, (app::ReflectionMethodsCache_Raycast2DCallback * this_ptr, app::Vector2 p1, app::Vector2 p2, float f, int32_t i))
    IL2CPP_REGISTER_METHOD(0x02667C40, app::IAsyncResult*, BeginInvoke, (app::ReflectionMethodsCache_Raycast2DCallback * this_ptr, app::Vector2 p1, app::Vector2 p2, float f, int32_t i, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x02667D50, app::RaycastHit2D, EndInvoke, (app::ReflectionMethodsCache_Raycast2DCallback * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::UnityEngine::UI::ReflectionMethodsCache_Raycast2DCallback
