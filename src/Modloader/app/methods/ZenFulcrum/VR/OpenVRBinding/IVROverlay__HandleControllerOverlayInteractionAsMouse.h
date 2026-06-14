#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/IVROverlay_HandleControllerOverlayInteractionAsMouse.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVROverlay__HandleControllerOverlayInteractionAsMouse {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::IVROverlay_HandleControllerOverlayInteractionAsMouse* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(
        0x0167DDE0,
        bool,
        Invoke,
        app::IVROverlay_HandleControllerOverlayInteractionAsMouse* this_ptr,
        uint64_t ul_overlay_handle,
        uint32_t un_controller_device_index
    )
    IL2CPP_REGISTER_METHOD(
        0x02D7D9B0,
        app::IAsyncResult*,
        BeginInvoke,
        app::IVROverlay_HandleControllerOverlayInteractionAsMouse* this_ptr,
        uint64_t ul_overlay_handle,
        uint32_t un_controller_device_index,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, app::IVROverlay_HandleControllerOverlayInteractionAsMouse* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVROverlay__HandleControllerOverlayInteractionAsMouse
