#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/EVROverlayError__Enum.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/IVROverlay_GetOverlayFlag.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/VROverlayFlags__Enum.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetOverlayFlag {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::IVROverlay_GetOverlayFlag* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(
        0x02009B10,
        app::EVROverlayError__Enum,
        Invoke,
        app::IVROverlay_GetOverlayFlag* this_ptr,
        uint64_t ul_overlay_handle,
        app::VROverlayFlags__Enum e_overlay_flag,
        bool* pb_enabled
    )
    IL2CPP_REGISTER_METHOD(
        0x02D7AB20,
        app::IAsyncResult*,
        BeginInvoke,
        app::IVROverlay_GetOverlayFlag* this_ptr,
        uint64_t ul_overlay_handle,
        app::VROverlayFlags__Enum e_overlay_flag,
        bool* pb_enabled,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(
        0x00F51FA0,
        app::EVROverlayError__Enum,
        EndInvoke,
        app::IVROverlay_GetOverlayFlag* this_ptr,
        bool* pb_enabled,
        app::IAsyncResult* result
    )
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetOverlayFlag
