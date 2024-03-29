#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ReflectionMethodsCache_GetRayIntersectionAllCallback.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Ray.h>
#include <Modloader/app/structs/RaycastHit2D__Array.h>

namespace app::classes::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllCallback {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::ReflectionMethodsCache_GetRayIntersectionAllCallback * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02666910, app::RaycastHit2D__Array*, Invoke, (app::ReflectionMethodsCache_GetRayIntersectionAllCallback * this_ptr, app::Ray r, float f, int32_t i))
    IL2CPP_REGISTER_METHOD(0x02666E70, app::IAsyncResult*, BeginInvoke, (app::ReflectionMethodsCache_GetRayIntersectionAllCallback * this_ptr, app::Ray r, float f, int32_t i, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, app::RaycastHit2D__Array*, EndInvoke, (app::ReflectionMethodsCache_GetRayIntersectionAllCallback * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllCallback
