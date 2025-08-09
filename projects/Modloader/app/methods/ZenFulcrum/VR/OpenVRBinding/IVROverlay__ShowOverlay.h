#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/EVROverlayError__Enum.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/IVROverlay_ShowOverlay.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVROverlay__ShowOverlay {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::IVROverlay_ShowOverlay* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(0x00F55110, app::EVROverlayError__Enum, Invoke, app::IVROverlay_ShowOverlay* this_ptr, uint64_t ul_overlay_handle)
    IL2CPP_REGISTER_METHOD(
        0x02CE2A70,
        app::IAsyncResult*,
        BeginInvoke,
        app::IVROverlay_ShowOverlay* this_ptr,
        uint64_t ul_overlay_handle,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x00F550D0, app::EVROverlayError__Enum, EndInvoke, app::IVROverlay_ShowOverlay* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVROverlay__ShowOverlay
