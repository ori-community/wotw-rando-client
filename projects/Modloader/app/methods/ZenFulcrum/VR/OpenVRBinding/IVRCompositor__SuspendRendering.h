#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/IVRCompositor_SuspendRendering.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__SuspendRendering {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::IVRCompositor_SuspendRendering* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(0x01DCB6A0, void, Invoke, app::IVRCompositor_SuspendRendering* this_ptr, bool b_suspend)
    IL2CPP_REGISTER_METHOD(
        0x02F43490,
        app::IAsyncResult*,
        BeginInvoke,
        app::IVRCompositor_SuspendRendering* this_ptr,
        bool b_suspend,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, app::IVRCompositor_SuspendRendering* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__SuspendRendering
