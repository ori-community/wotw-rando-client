#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Ray.h>
#include <Modloader/app/structs/RaycastHit.h>
#include <Modloader/app/structs/ReflectionMethodsCache_Raycast3DCallback.h>

namespace app::classes::UnityEngine::UI::ReflectionMethodsCache_Raycast3DCallback {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::ReflectionMethodsCache_Raycast3DCallback* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(
        0x02667DB0,
        bool,
        Invoke,
        app::ReflectionMethodsCache_Raycast3DCallback* this_ptr,
        app::Ray r,
        app::RaycastHit* hit,
        float f,
        int32_t i
    )
    IL2CPP_REGISTER_METHOD(
        0x02668380,
        app::IAsyncResult*,
        BeginInvoke,
        app::ReflectionMethodsCache_Raycast3DCallback* this_ptr,
        app::Ray r,
        app::RaycastHit* hit,
        float f,
        int32_t i,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(
        0x0167A2D0,
        bool,
        EndInvoke,
        app::ReflectionMethodsCache_Raycast3DCallback* this_ptr,
        app::RaycastHit* hit,
        app::IAsyncResult* result
    )
} // namespace app::classes::UnityEngine::UI::ReflectionMethodsCache_Raycast3DCallback
