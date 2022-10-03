#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UnityEngine::UI::ReflectionMethodsCache_RaycastAllCallback {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::ReflectionMethodsCache_RaycastAllCallback * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02666910, app::RaycastHit__Array*, Invoke, (app::ReflectionMethodsCache_RaycastAllCallback * this_ptr, app::Ray r, float f, int32_t i))
    IL2CPP_REGISTER_METHOD(0x02668490, app::IAsyncResult*, BeginInvoke, (app::ReflectionMethodsCache_RaycastAllCallback * this_ptr, app::Ray r, float f, int32_t i, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, app::RaycastHit__Array*, EndInvoke, (app::ReflectionMethodsCache_RaycastAllCallback * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::UnityEngine::UI::ReflectionMethodsCache_RaycastAllCallback
