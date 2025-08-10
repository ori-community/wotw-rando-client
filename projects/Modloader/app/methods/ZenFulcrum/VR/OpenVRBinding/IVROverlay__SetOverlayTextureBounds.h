#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/EVROverlayError__Enum.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/IVROverlay_SetOverlayTextureBounds.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/VRTextureBounds_t.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVROverlay__SetOverlayTextureBounds {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::IVROverlay_SetOverlayTextureBounds* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(
        0x02188B40,
        app::EVROverlayError__Enum,
        Invoke,
        app::IVROverlay_SetOverlayTextureBounds* this_ptr,
        uint64_t ul_overlay_handle,
        app::VRTextureBounds_t* p_overlay_texture_bounds
    )
    IL2CPP_REGISTER_METHOD(
        0x02D80EF0,
        app::IAsyncResult*,
        BeginInvoke,
        app::IVROverlay_SetOverlayTextureBounds* this_ptr,
        uint64_t ul_overlay_handle,
        app::VRTextureBounds_t* p_overlay_texture_bounds,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(
        0x00F51FA0,
        app::EVROverlayError__Enum,
        EndInvoke,
        app::IVROverlay_SetOverlayTextureBounds* this_ptr,
        app::VRTextureBounds_t* p_overlay_texture_bounds,
        app::IAsyncResult* result
    )
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVROverlay__SetOverlayTextureBounds
