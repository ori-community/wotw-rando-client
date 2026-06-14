#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Allocator__Enum.h>
#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/Bounds__Array.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_UnityEngine_Bounds_.h>
#include <Modloader/app/structs/NativeArrayOptions__Enum.h>
#include <Modloader/app/structs/NativeArray_1_T_Enumerator_UnityEngine_Bounds_.h>
#include <Modloader/app/structs/NativeArray_1_UnityEngine_Bounds_.h>
#include <Modloader/app/structs/NativeArray_1_UnityEngine_Bounds___Boxed.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::Unity::Collections::NativeArray_1_UnityEngine_Bounds_ {
    IL2CPP_REGISTER_METHOD(
        0x001DF770,
        void,
        ctor,
        app::NativeArray_1_UnityEngine_Bounds___Boxed* this_ptr,
        int32_t length,
        app::Allocator__Enum allocator,
        app::NativeArrayOptions__Enum options
    )
    IL2CPP_REGISTER_METHOD(0x001D9B60, bool, get_IsCreated, app::NativeArray_1_UnityEngine_Bounds___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001DF8B0, void, Dispose, app::NativeArray_1_UnityEngine_Bounds___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x022647E0, void, Allocate, int32_t length, app::Allocator__Enum allocator, app::NativeArray_1_UnityEngine_Bounds_* array)
    IL2CPP_REGISTER_METHOD(0x001DF780, int32_t, get_Length, app::NativeArray_1_UnityEngine_Bounds___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001DFEF0, app::Bounds, get_Item, app::NativeArray_1_UnityEngine_Bounds___Boxed* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x001DFFA0, void, set_Item, app::NativeArray_1_UnityEngine_Bounds___Boxed* this_ptr, int32_t index, app::Bounds value)
    IL2CPP_REGISTER_METHOD(0x001DF930, void, CopyFrom, app::NativeArray_1_UnityEngine_Bounds___Boxed* this_ptr, app::Bounds__Array* array)
    IL2CPP_REGISTER_METHOD(0x001DF9C0, void, CopyTo, app::NativeArray_1_UnityEngine_Bounds___Boxed* this_ptr, app::Bounds__Array* array)
    IL2CPP_REGISTER_METHOD(0x001DFA50, app::Bounds__Array*, ToArray, app::NativeArray_1_UnityEngine_Bounds___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x001DFB30,
        app::NativeArray_1_T_Enumerator_UnityEngine_Bounds_,
        GetEnumerator,
        app::NativeArray_1_UnityEngine_Bounds___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x001DFB90,
        app::IEnumerator_1_UnityEngine_Bounds_*,
        System_Collections_Generic_IEnumerable_T__GetEnumerator,
        app::NativeArray_1_UnityEngine_Bounds___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x001DFC30, app::IEnumerator*, IEnumerable_GetEnumerator, app::NativeArray_1_UnityEngine_Bounds___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001DFCF0, bool, Equals_1, app::NativeArray_1_UnityEngine_Bounds___Boxed* this_ptr, app::NativeArray_1_UnityEngine_Bounds_ other)
    IL2CPP_REGISTER_METHOD(0x001DFD30, bool, Equals_2, app::NativeArray_1_UnityEngine_Bounds___Boxed* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x001DFE40, int32_t, GetHashCode, app::NativeArray_1_UnityEngine_Bounds___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02264910, void, Copy_1, app::Bounds__Array* src, app::NativeArray_1_UnityEngine_Bounds_ dst)
    IL2CPP_REGISTER_METHOD(0x022649C0, void, Copy_2, app::NativeArray_1_UnityEngine_Bounds_ src, app::Bounds__Array* dst)
    IL2CPP_REGISTER_METHOD(0x02264A70, void, Copy_3, app::Bounds__Array* src, app::NativeArray_1_UnityEngine_Bounds_ dst, int32_t length)
    IL2CPP_REGISTER_METHOD(0x02264B20, void, Copy_4, app::NativeArray_1_UnityEngine_Bounds_ src, app::Bounds__Array* dst, int32_t length)
    IL2CPP_REGISTER_METHOD(
        0x02264BD0,
        void,
        Copy_5,
        app::Bounds__Array* src,
        int32_t src_index,
        app::NativeArray_1_UnityEngine_Bounds_ dst,
        int32_t dst_index,
        int32_t length
    )
    IL2CPP_REGISTER_METHOD(
        0x02264D40,
        void,
        Copy_6,
        app::NativeArray_1_UnityEngine_Bounds_ src,
        int32_t src_index,
        app::Bounds__Array* dst,
        int32_t dst_index,
        int32_t length
    )
} // namespace app::classes::Unity::Collections::NativeArray_1_UnityEngine_Bounds_
