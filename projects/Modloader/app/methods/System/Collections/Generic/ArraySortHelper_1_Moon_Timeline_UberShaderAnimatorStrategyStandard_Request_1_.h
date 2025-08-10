#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Comparison_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1_.h>
#include <Modloader/app/structs/Comparison_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__1.h>
#include <Modloader/app/structs/Comparison_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__2.h>
#include <Modloader/app/structs/Comparison_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__3.h>
#include <Modloader/app/structs/IComparer_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1_.h>
#include <Modloader/app/structs/IComparer_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__1.h>
#include <Modloader/app/structs/IComparer_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__2.h>
#include <Modloader/app/structs/IComparer_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__3.h>
#include <Modloader/app/structs/UberShaderAnimatorStrategyStandard_Request_1_System_Object_.h>
#include <Modloader/app/structs/UberShaderAnimatorStrategyStandard_Request_1_System_Object___Array.h>
#include <Modloader/app/structs/UberShaderAnimatorStrategyStandard_Request_1_System_Single_.h>
#include <Modloader/app/structs/UberShaderAnimatorStrategyStandard_Request_1_System_Single___Array.h>
#include <Modloader/app/structs/UberShaderAnimatorStrategyStandard_Request_1_UnityEngine_Color_.h>
#include <Modloader/app/structs/UberShaderAnimatorStrategyStandard_Request_1_UnityEngine_Color___Array.h>
#include <Modloader/app/structs/UberShaderAnimatorStrategyStandard_Request_1_UnityEngine_Vector4_.h>
#include <Modloader/app/structs/UberShaderAnimatorStrategyStandard_Request_1_UnityEngine_Vector4___Array.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1_ {
    IL2CPP_REGISTER_METHOD(
        0x02F71FB0,
        void,
        Sort_1,
        app::UberShaderAnimatorStrategyStandard_Request_1_System_Object___Array* keys,
        int32_t index,
        int32_t length,
        app::IComparer_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02F722D0,
        int32_t,
        BinarySearch_1,
        app::UberShaderAnimatorStrategyStandard_Request_1_System_Object___Array* array,
        int32_t index,
        int32_t length,
        app::UberShaderAnimatorStrategyStandard_Request_1_System_Object_ value,
        app::IComparer_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02F72480,
        void,
        Sort_2,
        app::UberShaderAnimatorStrategyStandard_Request_1_System_Object___Array* keys,
        int32_t index,
        int32_t length,
        app::Comparison_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C898B0,
        int32_t,
        InternalBinarySearch_1,
        app::UberShaderAnimatorStrategyStandard_Request_1_System_Object___Array* array,
        int32_t index,
        int32_t length,
        app::UberShaderAnimatorStrategyStandard_Request_1_System_Object_ value,
        app::IComparer_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C89A40,
        void,
        SwapIfGreater_1,
        app::UberShaderAnimatorStrategyStandard_Request_1_System_Object___Array* keys,
        app::Comparison_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1_* comparer,
        int32_t a,
        int32_t b
    )
    IL2CPP_REGISTER_METHOD(0x02C89BD0, void, Swap_1, app::UberShaderAnimatorStrategyStandard_Request_1_System_Object___Array* a, int32_t i, int32_t j)
    IL2CPP_REGISTER_METHOD(
        0x02C86EC0,
        void,
        IntrospectiveSort_1,
        app::UberShaderAnimatorStrategyStandard_Request_1_System_Object___Array* keys,
        int32_t left,
        int32_t length,
        app::Comparison_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C86FB0,
        void,
        IntroSort_1,
        app::UberShaderAnimatorStrategyStandard_Request_1_System_Object___Array* keys,
        int32_t lo,
        int32_t hi,
        int32_t depth_limit,
        app::Comparison_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C89C60,
        int32_t,
        PickPivotAndPartition_1,
        app::UberShaderAnimatorStrategyStandard_Request_1_System_Object___Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C87750,
        void,
        Heapsort_1,
        app::UberShaderAnimatorStrategyStandard_Request_1_System_Object___Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C8A050,
        void,
        DownHeap_1,
        app::UberShaderAnimatorStrategyStandard_Request_1_System_Object___Array* keys,
        int32_t i,
        int32_t n,
        int32_t lo,
        app::Comparison_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C8A330,
        void,
        InsertionSort_1,
        app::UberShaderAnimatorStrategyStandard_Request_1_System_Object___Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02F725D0,
        void,
        Sort_3,
        app::UberShaderAnimatorStrategyStandard_Request_1_System_Single___Array* keys,
        int32_t index,
        int32_t length,
        app::IComparer_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__1* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02F728F0,
        int32_t,
        BinarySearch_2,
        app::UberShaderAnimatorStrategyStandard_Request_1_System_Single___Array* array,
        int32_t index,
        int32_t length,
        app::UberShaderAnimatorStrategyStandard_Request_1_System_Single_ value,
        app::IComparer_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__1* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02F72AA0,
        void,
        Sort_4,
        app::UberShaderAnimatorStrategyStandard_Request_1_System_Single___Array* keys,
        int32_t index,
        int32_t length,
        app::Comparison_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__1* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C86B20,
        int32_t,
        InternalBinarySearch_2,
        app::UberShaderAnimatorStrategyStandard_Request_1_System_Single___Array* array,
        int32_t index,
        int32_t length,
        app::UberShaderAnimatorStrategyStandard_Request_1_System_Single_ value,
        app::IComparer_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__1* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C86C60,
        void,
        SwapIfGreater_2,
        app::UberShaderAnimatorStrategyStandard_Request_1_System_Single___Array* keys,
        app::Comparison_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__1* comparer,
        int32_t a,
        int32_t b
    )
    IL2CPP_REGISTER_METHOD(0x02C86E20, void, Swap_2, app::UberShaderAnimatorStrategyStandard_Request_1_System_Single___Array* a, int32_t i, int32_t j)
    IL2CPP_REGISTER_METHOD(
        0x02C86EC0,
        void,
        IntrospectiveSort_2,
        app::UberShaderAnimatorStrategyStandard_Request_1_System_Single___Array* keys,
        int32_t left,
        int32_t length,
        app::Comparison_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__1* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C86FB0,
        void,
        IntroSort_2,
        app::UberShaderAnimatorStrategyStandard_Request_1_System_Single___Array* keys,
        int32_t lo,
        int32_t hi,
        int32_t depth_limit,
        app::Comparison_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__1* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C87320,
        int32_t,
        PickPivotAndPartition_2,
        app::UberShaderAnimatorStrategyStandard_Request_1_System_Single___Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__1* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C87750,
        void,
        Heapsort_2,
        app::UberShaderAnimatorStrategyStandard_Request_1_System_Single___Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__1* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C87900,
        void,
        DownHeap_2,
        app::UberShaderAnimatorStrategyStandard_Request_1_System_Single___Array* keys,
        int32_t i,
        int32_t n,
        int32_t lo,
        app::Comparison_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__1* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C87C30,
        void,
        InsertionSort_2,
        app::UberShaderAnimatorStrategyStandard_Request_1_System_Single___Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__1* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02F72BF0,
        void,
        Sort_5,
        app::UberShaderAnimatorStrategyStandard_Request_1_UnityEngine_Color___Array* keys,
        int32_t index,
        int32_t length,
        app::IComparer_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__2* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02F72F10,
        int32_t,
        BinarySearch_3,
        app::UberShaderAnimatorStrategyStandard_Request_1_UnityEngine_Color___Array* array,
        int32_t index,
        int32_t length,
        app::UberShaderAnimatorStrategyStandard_Request_1_UnityEngine_Color_ value,
        app::IComparer_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__2* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02F730C0,
        void,
        Sort_6,
        app::UberShaderAnimatorStrategyStandard_Request_1_UnityEngine_Color___Array* keys,
        int32_t index,
        int32_t length,
        app::Comparison_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__2* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C8D410,
        int32_t,
        InternalBinarySearch_3,
        app::UberShaderAnimatorStrategyStandard_Request_1_UnityEngine_Color___Array* array,
        int32_t index,
        int32_t length,
        app::UberShaderAnimatorStrategyStandard_Request_1_UnityEngine_Color_ value,
        app::IComparer_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__2* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C8D5C0,
        void,
        SwapIfGreater_3,
        app::UberShaderAnimatorStrategyStandard_Request_1_UnityEngine_Color___Array* keys,
        app::Comparison_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__2* comparer,
        int32_t a,
        int32_t b
    )
    IL2CPP_REGISTER_METHOD(0x02C8D780, void, Swap_3, app::UberShaderAnimatorStrategyStandard_Request_1_UnityEngine_Color___Array* a, int32_t i, int32_t j)
    IL2CPP_REGISTER_METHOD(
        0x02C86EC0,
        void,
        IntrospectiveSort_3,
        app::UberShaderAnimatorStrategyStandard_Request_1_UnityEngine_Color___Array* keys,
        int32_t left,
        int32_t length,
        app::Comparison_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__2* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C86FB0,
        void,
        IntroSort_3,
        app::UberShaderAnimatorStrategyStandard_Request_1_UnityEngine_Color___Array* keys,
        int32_t lo,
        int32_t hi,
        int32_t depth_limit,
        app::Comparison_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__2* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C8D820,
        int32_t,
        PickPivotAndPartition_3,
        app::UberShaderAnimatorStrategyStandard_Request_1_UnityEngine_Color___Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__2* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C87750,
        void,
        Heapsort_3,
        app::UberShaderAnimatorStrategyStandard_Request_1_UnityEngine_Color___Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__2* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C8DC50,
        void,
        DownHeap_3,
        app::UberShaderAnimatorStrategyStandard_Request_1_UnityEngine_Color___Array* keys,
        int32_t i,
        int32_t n,
        int32_t lo,
        app::Comparison_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__2* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C8DFB0,
        void,
        InsertionSort_3,
        app::UberShaderAnimatorStrategyStandard_Request_1_UnityEngine_Color___Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__2* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02F73210,
        void,
        Sort_7,
        app::UberShaderAnimatorStrategyStandard_Request_1_UnityEngine_Vector4___Array* keys,
        int32_t index,
        int32_t length,
        app::IComparer_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__3* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02F73530,
        int32_t,
        BinarySearch_4,
        app::UberShaderAnimatorStrategyStandard_Request_1_UnityEngine_Vector4___Array* array,
        int32_t index,
        int32_t length,
        app::UberShaderAnimatorStrategyStandard_Request_1_UnityEngine_Vector4_ value,
        app::IComparer_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__3* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02F736E0,
        void,
        Sort_8,
        app::UberShaderAnimatorStrategyStandard_Request_1_UnityEngine_Vector4___Array* keys,
        int32_t index,
        int32_t length,
        app::Comparison_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__3* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C8D410,
        int32_t,
        InternalBinarySearch_4,
        app::UberShaderAnimatorStrategyStandard_Request_1_UnityEngine_Vector4___Array* array,
        int32_t index,
        int32_t length,
        app::UberShaderAnimatorStrategyStandard_Request_1_UnityEngine_Vector4_ value,
        app::IComparer_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__3* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C8D5C0,
        void,
        SwapIfGreater_4,
        app::UberShaderAnimatorStrategyStandard_Request_1_UnityEngine_Vector4___Array* keys,
        app::Comparison_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__3* comparer,
        int32_t a,
        int32_t b
    )
    IL2CPP_REGISTER_METHOD(0x02C8D780, void, Swap_4, app::UberShaderAnimatorStrategyStandard_Request_1_UnityEngine_Vector4___Array* a, int32_t i, int32_t j)
    IL2CPP_REGISTER_METHOD(
        0x02C86EC0,
        void,
        IntrospectiveSort_4,
        app::UberShaderAnimatorStrategyStandard_Request_1_UnityEngine_Vector4___Array* keys,
        int32_t left,
        int32_t length,
        app::Comparison_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__3* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C86FB0,
        void,
        IntroSort_4,
        app::UberShaderAnimatorStrategyStandard_Request_1_UnityEngine_Vector4___Array* keys,
        int32_t lo,
        int32_t hi,
        int32_t depth_limit,
        app::Comparison_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__3* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C8D820,
        int32_t,
        PickPivotAndPartition_4,
        app::UberShaderAnimatorStrategyStandard_Request_1_UnityEngine_Vector4___Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__3* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C87750,
        void,
        Heapsort_4,
        app::UberShaderAnimatorStrategyStandard_Request_1_UnityEngine_Vector4___Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__3* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C8DC50,
        void,
        DownHeap_4,
        app::UberShaderAnimatorStrategyStandard_Request_1_UnityEngine_Vector4___Array* keys,
        int32_t i,
        int32_t n,
        int32_t lo,
        app::Comparison_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__3* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C8DFB0,
        void,
        InsertionSort_4,
        app::UberShaderAnimatorStrategyStandard_Request_1_UnityEngine_Vector4___Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1__3* comparer
    )
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1_
