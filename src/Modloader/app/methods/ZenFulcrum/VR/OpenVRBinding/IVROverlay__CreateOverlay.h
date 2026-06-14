#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/EVROverlayError__Enum.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/IVROverlay_CreateOverlay.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVROverlay__CreateOverlay {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::IVROverlay_CreateOverlay* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(
        0x02CE72C0,
        app::EVROverlayError__Enum,
        Invoke,
        app::IVROverlay_CreateOverlay* this_ptr,
        app::String* pch_overlay_key,
        app::String* pch_overlay_name,
        uint64_t* p_overlay_handle
    )
    IL2CPP_REGISTER_METHOD(
        0x02D799F0,
        app::IAsyncResult*,
        BeginInvoke,
        app::IVROverlay_CreateOverlay* this_ptr,
        app::String* pch_overlay_key,
        app::String* pch_overlay_name,
        uint64_t* p_overlay_handle,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(
        0x00F51FA0,
        app::EVROverlayError__Enum,
        EndInvoke,
        app::IVROverlay_CreateOverlay* this_ptr,
        uint64_t* p_overlay_handle,
        app::IAsyncResult* result
    )
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVROverlay__CreateOverlay
