#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/EVROverlayError__Enum.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/IVROverlay_GetOverlayTransformType.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/VROverlayTransformType__Enum.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetOverlayTransformType {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::IVROverlay_GetOverlayTransformType* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(
        0x02188B40,
        app::EVROverlayError__Enum,
        Invoke,
        app::IVROverlay_GetOverlayTransformType* this_ptr,
        uint64_t ul_overlay_handle,
        app::VROverlayTransformType__Enum* pe_transform_type
    )
    IL2CPP_REGISTER_METHOD(
        0x02D7D2D0,
        app::IAsyncResult*,
        BeginInvoke,
        app::IVROverlay_GetOverlayTransformType* this_ptr,
        uint64_t ul_overlay_handle,
        app::VROverlayTransformType__Enum* pe_transform_type,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(
        0x00F51FA0,
        app::EVROverlayError__Enum,
        EndInvoke,
        app::IVROverlay_GetOverlayTransformType* this_ptr,
        app::VROverlayTransformType__Enum* pe_transform_type,
        app::IAsyncResult* result
    )
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetOverlayTransformType
