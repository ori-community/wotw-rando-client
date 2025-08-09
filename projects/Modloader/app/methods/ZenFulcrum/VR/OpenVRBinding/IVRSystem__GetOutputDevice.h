#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/ETextureType__Enum.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/IVRSystem_GetOutputDevice.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetOutputDevice {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::IVRSystem_GetOutputDevice* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(
        0x02CED080,
        void,
        Invoke,
        app::IVRSystem_GetOutputDevice* this_ptr,
        uint64_t* pn_device,
        app::ETextureType__Enum texture_type,
        void* p_instance
    )
    IL2CPP_REGISTER_METHOD(
        0x02CED400,
        app::IAsyncResult*,
        BeginInvoke,
        app::IVRSystem_GetOutputDevice* this_ptr,
        uint64_t* pn_device,
        app::ETextureType__Enum texture_type,
        void* p_instance,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x006FD370, void, EndInvoke, app::IVRSystem_GetOutputDevice* this_ptr, uint64_t* pn_device, app::IAsyncResult* result)
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetOutputDevice
