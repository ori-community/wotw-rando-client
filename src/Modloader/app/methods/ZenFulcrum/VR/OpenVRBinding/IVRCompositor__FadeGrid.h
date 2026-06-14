#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/IVRCompositor_FadeGrid.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__FadeGrid {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::IVRCompositor_FadeGrid* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(0x02F40F20, void, Invoke, app::IVRCompositor_FadeGrid* this_ptr, float f_seconds, bool b_fade_in)
    IL2CPP_REGISTER_METHOD(
        0x02F41290,
        app::IAsyncResult*,
        BeginInvoke,
        app::IVRCompositor_FadeGrid* this_ptr,
        float f_seconds,
        bool b_fade_in,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, app::IVRCompositor_FadeGrid* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__FadeGrid
