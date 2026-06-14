#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EqualityComparer_1_GenericCastManager_1_NativeArrays_.h>
#include <Modloader/app/structs/EqualityComparer_1_GenericCastManager_1_NativeArrays__1.h>
#include <Modloader/app/structs/EqualityComparer_1_GenericCastManager_1_NativeArrays__2.h>
#include <Modloader/app/structs/GenericCastManager_1_Command_NativeArrays_UnityEngine_CapsulecastCommand_.h>
#include <Modloader/app/structs/GenericCastManager_1_Command_NativeArrays_UnityEngine_CapsulecastCommand___Array.h>
#include <Modloader/app/structs/GenericCastManager_1_Command_NativeArrays_UnityEngine_RaycastCommand_.h>
#include <Modloader/app/structs/GenericCastManager_1_Command_NativeArrays_UnityEngine_RaycastCommand___Array.h>
#include <Modloader/app/structs/GenericCastManager_1_Command_NativeArrays_UnityEngine_SpherecastCommand_.h>
#include <Modloader/app/structs/GenericCastManager_1_Command_NativeArrays_UnityEngine_SpherecastCommand___Array.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::EqualityComparer_1_GenericCastManager_1_NativeArrays_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::EqualityComparer_1_GenericCastManager_1_NativeArrays_*, get_Default_1, )
    IL2CPP_REGISTER_METHOD(0x02CCEF80, app::EqualityComparer_1_GenericCastManager_1_NativeArrays_*, CreateComparer_1, )
    IL2CPP_REGISTER_METHOD(
        0x02B4CF00,
        int32_t,
        IndexOf_1,
        app::EqualityComparer_1_GenericCastManager_1_NativeArrays_* this_ptr,
        app::GenericCastManager_1_Command_NativeArrays_UnityEngine_CapsulecastCommand___Array* array,
        app::GenericCastManager_1_Command_NativeArrays_UnityEngine_CapsulecastCommand_ value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x02B4D010,
        int32_t,
        LastIndexOf_1,
        app::EqualityComparer_1_GenericCastManager_1_NativeArrays_* this_ptr,
        app::GenericCastManager_1_Command_NativeArrays_UnityEngine_CapsulecastCommand___Array* array,
        app::GenericCastManager_1_Command_NativeArrays_UnityEngine_CapsulecastCommand_ value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x02B4D120,
        int32_t,
        IEqualityComparer_GetHashCode_1,
        app::EqualityComparer_1_GenericCastManager_1_NativeArrays_* this_ptr,
        app::Object* obj
    )
    IL2CPP_REGISTER_METHOD(
        0x02B4D230,
        bool,
        IEqualityComparer_Equals_1,
        app::EqualityComparer_1_GenericCastManager_1_NativeArrays_* this_ptr,
        app::Object* x,
        app::Object* y
    )
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor_1, app::EqualityComparer_1_GenericCastManager_1_NativeArrays_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::EqualityComparer_1_GenericCastManager_1_NativeArrays__1*, get_Default_2, )
    IL2CPP_REGISTER_METHOD(0x02CCF8E0, app::EqualityComparer_1_GenericCastManager_1_NativeArrays__1*, CreateComparer_2, )
    IL2CPP_REGISTER_METHOD(
        0x02B4CF00,
        int32_t,
        IndexOf_2,
        app::EqualityComparer_1_GenericCastManager_1_NativeArrays__1* this_ptr,
        app::GenericCastManager_1_Command_NativeArrays_UnityEngine_RaycastCommand___Array* array,
        app::GenericCastManager_1_Command_NativeArrays_UnityEngine_RaycastCommand_ value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x02B4D010,
        int32_t,
        LastIndexOf_2,
        app::EqualityComparer_1_GenericCastManager_1_NativeArrays__1* this_ptr,
        app::GenericCastManager_1_Command_NativeArrays_UnityEngine_RaycastCommand___Array* array,
        app::GenericCastManager_1_Command_NativeArrays_UnityEngine_RaycastCommand_ value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x02B4D120,
        int32_t,
        IEqualityComparer_GetHashCode_2,
        app::EqualityComparer_1_GenericCastManager_1_NativeArrays__1* this_ptr,
        app::Object* obj
    )
    IL2CPP_REGISTER_METHOD(
        0x02B4D230,
        bool,
        IEqualityComparer_Equals_2,
        app::EqualityComparer_1_GenericCastManager_1_NativeArrays__1* this_ptr,
        app::Object* x,
        app::Object* y
    )
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor_2, app::EqualityComparer_1_GenericCastManager_1_NativeArrays__1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::EqualityComparer_1_GenericCastManager_1_NativeArrays__2*, get_Default_3, )
    IL2CPP_REGISTER_METHOD(0x02CD0240, app::EqualityComparer_1_GenericCastManager_1_NativeArrays__2*, CreateComparer_3, )
    IL2CPP_REGISTER_METHOD(
        0x02B4CF00,
        int32_t,
        IndexOf_3,
        app::EqualityComparer_1_GenericCastManager_1_NativeArrays__2* this_ptr,
        app::GenericCastManager_1_Command_NativeArrays_UnityEngine_SpherecastCommand___Array* array,
        app::GenericCastManager_1_Command_NativeArrays_UnityEngine_SpherecastCommand_ value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x02B4D010,
        int32_t,
        LastIndexOf_3,
        app::EqualityComparer_1_GenericCastManager_1_NativeArrays__2* this_ptr,
        app::GenericCastManager_1_Command_NativeArrays_UnityEngine_SpherecastCommand___Array* array,
        app::GenericCastManager_1_Command_NativeArrays_UnityEngine_SpherecastCommand_ value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x02B4D120,
        int32_t,
        IEqualityComparer_GetHashCode_3,
        app::EqualityComparer_1_GenericCastManager_1_NativeArrays__2* this_ptr,
        app::Object* obj
    )
    IL2CPP_REGISTER_METHOD(
        0x02B4D230,
        bool,
        IEqualityComparer_Equals_3,
        app::EqualityComparer_1_GenericCastManager_1_NativeArrays__2* this_ptr,
        app::Object* x,
        app::Object* y
    )
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor_3, app::EqualityComparer_1_GenericCastManager_1_NativeArrays__2* this_ptr)
} // namespace app::classes::System::Collections::Generic::EqualityComparer_1_GenericCastManager_1_NativeArrays_
