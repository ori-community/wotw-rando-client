#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/IVROverlay_GetOverlayRenderingPid.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetOverlayRenderingPid {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::IVROverlay_GetOverlayRenderingPid* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(0x00F55110, uint32_t, Invoke, app::IVROverlay_GetOverlayRenderingPid* this_ptr, uint64_t ul_overlay_handle)
    IL2CPP_REGISTER_METHOD(
        0x02D7BBB0,
        app::IAsyncResult*,
        BeginInvoke,
        app::IVROverlay_GetOverlayRenderingPid* this_ptr,
        uint64_t ul_overlay_handle,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x00F550D0, uint32_t, EndInvoke, app::IVROverlay_GetOverlayRenderingPid* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetOverlayRenderingPid
