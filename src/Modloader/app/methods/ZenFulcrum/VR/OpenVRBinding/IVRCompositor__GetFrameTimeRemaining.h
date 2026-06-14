#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/IVRCompositor_GetFrameTimeRemaining.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__GetFrameTimeRemaining {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::IVRCompositor_GetFrameTimeRemaining* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(0x028815A0, float, Invoke, app::IVRCompositor_GetFrameTimeRemaining* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00611B10,
        app::IAsyncResult*,
        BeginInvoke,
        app::IVRCompositor_GetFrameTimeRemaining* this_ptr,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x028818E0, float, EndInvoke, app::IVRCompositor_GetFrameTimeRemaining* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__GetFrameTimeRemaining
