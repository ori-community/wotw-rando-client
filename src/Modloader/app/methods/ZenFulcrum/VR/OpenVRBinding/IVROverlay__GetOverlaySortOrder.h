#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/EVROverlayError__Enum.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/IVROverlay_GetOverlaySortOrder.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetOverlaySortOrder {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::IVROverlay_GetOverlaySortOrder* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(
        0x02188B40,
        app::EVROverlayError__Enum,
        Invoke,
        app::IVROverlay_GetOverlaySortOrder* this_ptr,
        uint64_t ul_overlay_handle,
        uint32_t* pun_sort_order
    )
    IL2CPP_REGISTER_METHOD(
        0x02D7BC70,
        app::IAsyncResult*,
        BeginInvoke,
        app::IVROverlay_GetOverlaySortOrder* this_ptr,
        uint64_t ul_overlay_handle,
        uint32_t* pun_sort_order,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(
        0x00F51FA0,
        app::EVROverlayError__Enum,
        EndInvoke,
        app::IVROverlay_GetOverlaySortOrder* this_ptr,
        uint32_t* pun_sort_order,
        app::IAsyncResult* result
    )
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetOverlaySortOrder
