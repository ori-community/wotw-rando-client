#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/EColorSpace__Enum.h>
#include <Modloader/app/structs/ETextureType__Enum.h>
#include <Modloader/app/structs/EVROverlayError__Enum.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/IVROverlay_GetOverlayTexture.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/VRTextureBounds_t.h>
#include <Modloader/app/structs/void.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetOverlayTexture {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::IVROverlay_GetOverlayTexture* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(
        0x02D7BE30,
        app::EVROverlayError__Enum,
        Invoke,
        app::IVROverlay_GetOverlayTexture* this_ptr,
        uint64_t ul_overlay_handle,
        void** p_native_texture_handle,
        void* p_native_texture_ref,
        uint32_t* p_width,
        uint32_t* p_height,
        uint32_t* p_native_format,
        app::ETextureType__Enum* p_a_p_i_type,
        app::EColorSpace__Enum* p_color_space,
        app::VRTextureBounds_t* p_texture_bounds
    )
    IL2CPP_REGISTER_METHOD(
        0x02D7C520,
        app::IAsyncResult*,
        BeginInvoke,
        app::IVROverlay_GetOverlayTexture* this_ptr,
        uint64_t ul_overlay_handle,
        void** p_native_texture_handle,
        void* p_native_texture_ref,
        uint32_t* p_width,
        uint32_t* p_height,
        uint32_t* p_native_format,
        app::ETextureType__Enum* p_a_p_i_type,
        app::EColorSpace__Enum* p_color_space,
        app::VRTextureBounds_t* p_texture_bounds,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(
        0x02D7C6C0,
        app::EVROverlayError__Enum,
        EndInvoke,
        app::IVROverlay_GetOverlayTexture* this_ptr,
        void** p_native_texture_handle,
        uint32_t* p_width,
        uint32_t* p_height,
        uint32_t* p_native_format,
        app::ETextureType__Enum* p_a_p_i_type,
        app::EColorSpace__Enum* p_color_space,
        app::VRTextureBounds_t* p_texture_bounds,
        app::IAsyncResult* result
    )
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetOverlayTexture
