#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/ETrackedDeviceClass__Enum.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/IVRSystem_GetSortedTrackedDeviceIndicesOfClass.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/UInt32__Array.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetSortedTrackedDeviceIndicesOfClass {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::IVRSystem_GetSortedTrackedDeviceIndicesOfClass* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(
        0x02CEE5C0,
        uint32_t,
        Invoke,
        app::IVRSystem_GetSortedTrackedDeviceIndicesOfClass* this_ptr,
        app::ETrackedDeviceClass__Enum e_tracked_device_class,
        app::UInt32__Array* pun_tracked_device_index_array,
        uint32_t un_tracked_device_index_array_count,
        uint32_t un_relative_to_tracked_device_index
    )
    IL2CPP_REGISTER_METHOD(
        0x02CEE9D0,
        app::IAsyncResult*,
        BeginInvoke,
        app::IVRSystem_GetSortedTrackedDeviceIndicesOfClass* this_ptr,
        app::ETrackedDeviceClass__Enum e_tracked_device_class,
        app::UInt32__Array* pun_tracked_device_index_array,
        uint32_t un_tracked_device_index_array_count,
        uint32_t un_relative_to_tracked_device_index,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x00F550D0, uint32_t, EndInvoke, app::IVRSystem_GetSortedTrackedDeviceIndicesOfClass* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetSortedTrackedDeviceIndicesOfClass
