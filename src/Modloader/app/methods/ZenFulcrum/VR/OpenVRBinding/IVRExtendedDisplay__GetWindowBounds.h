#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/IVRExtendedDisplay_GetWindowBounds.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRExtendedDisplay__GetWindowBounds {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::IVRExtendedDisplay_GetWindowBounds* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(
        0x012DDED0,
        void,
        Invoke,
        app::IVRExtendedDisplay_GetWindowBounds* this_ptr,
        int32_t* pn_x,
        int32_t* pn_y,
        uint32_t* pn_width,
        uint32_t* pn_height
    )
    IL2CPP_REGISTER_METHOD(
        0x02D78470,
        app::IAsyncResult*,
        BeginInvoke,
        app::IVRExtendedDisplay_GetWindowBounds* this_ptr,
        int32_t* pn_x,
        int32_t* pn_y,
        uint32_t* pn_width,
        uint32_t* pn_height,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(
        0x012DE400,
        void,
        EndInvoke,
        app::IVRExtendedDisplay_GetWindowBounds* this_ptr,
        int32_t* pn_x,
        int32_t* pn_y,
        uint32_t* pn_width,
        uint32_t* pn_height,
        app::IAsyncResult* result
    )
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRExtendedDisplay__GetWindowBounds
