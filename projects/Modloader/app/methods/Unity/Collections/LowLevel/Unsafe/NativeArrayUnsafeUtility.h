#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Allocator__Enum.h>
#include <Modloader/app/structs/NativeArray_1_System_Byte_.h>
#include <Modloader/app/structs/NativeArray_1_UnityEngine_Bounds_.h>
#include <Modloader/app/structs/NativeArray_1_UnityEngine_CapsulecastCommand_.h>
#include <Modloader/app/structs/NativeArray_1_UnityEngine_RaycastCommand_.h>
#include <Modloader/app/structs/NativeArray_1_UnityEngine_RaycastHit_.h>
#include <Modloader/app/structs/NativeArray_1_UnityEngine_SpherecastCommand_.h>
#include <Modloader/app/structs/Void.h>

namespace app::classes::Unity::Collections::LowLevel::Unsafe::NativeArrayUnsafeUtility {
    IL2CPP_REGISTER_METHOD(0x015E7A50, app::Void*, GetUnsafeBufferPointerWithoutChecks_1, app::NativeArray_1_UnityEngine_Bounds_ native_array)
    IL2CPP_REGISTER_METHOD(0x015E7A50, app::Void*, GetUnsafeBufferPointerWithoutChecks_2, app::NativeArray_1_System_Byte_ native_array)
    IL2CPP_REGISTER_METHOD(0x015E7A50, app::Void*, GetUnsafeBufferPointerWithoutChecks_3, app::NativeArray_1_UnityEngine_CapsulecastCommand_ native_array)
    IL2CPP_REGISTER_METHOD(0x015E7A50, app::Void*, GetUnsafeBufferPointerWithoutChecks_4, app::NativeArray_1_UnityEngine_RaycastHit_ native_array)
    IL2CPP_REGISTER_METHOD(0x015E7A50, app::Void*, GetUnsafeBufferPointerWithoutChecks_5, app::NativeArray_1_UnityEngine_RaycastCommand_ native_array)
    IL2CPP_REGISTER_METHOD(0x015E7A50, app::Void*, GetUnsafeBufferPointerWithoutChecks_6, app::NativeArray_1_UnityEngine_SpherecastCommand_ native_array)
    IL2CPP_REGISTER_METHOD(
        0x02FF6F40,
        app::NativeArray_1_System_Byte_,
        ConvertExistingDataToNativeArray,
        app::Void* data_pointer,
        int32_t length,
        app::Allocator__Enum allocator
    )
} // namespace app::classes::Unity::Collections::LowLevel::Unsafe::NativeArrayUnsafeUtility
