#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Comparison_1_SimpleGenericPool_1_PoolItem_.h>
#include <Modloader/app/structs/Comparison_1_SimpleGenericPool_1_PoolItem__1.h>
#include <Modloader/app/structs/IComparer_1_SimpleGenericPool_1_PoolItem_.h>
#include <Modloader/app/structs/IComparer_1_SimpleGenericPool_1_PoolItem__1.h>
#include <Modloader/app/structs/SimpleGenericPool_1_T_PoolItem_InstantiateUtility_InstantiateInfo_.h>
#include <Modloader/app/structs/SimpleGenericPool_1_T_PoolItem_InstantiateUtility_InstantiateInfo___Array.h>
#include <Modloader/app/structs/SimpleGenericPool_1_T_PoolItem_System_Object_.h>
#include <Modloader/app/structs/SimpleGenericPool_1_T_PoolItem_System_Object___Array.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_SimpleGenericPool_1_PoolItem_ {
    IL2CPP_REGISTER_METHOD(
        0x02FF0F10,
        void,
        Sort_1,
        app::SimpleGenericPool_1_T_PoolItem_InstantiateUtility_InstantiateInfo___Array* keys,
        int32_t index,
        int32_t length,
        app::IComparer_1_SimpleGenericPool_1_PoolItem_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02FF1230,
        int32_t,
        BinarySearch_1,
        app::SimpleGenericPool_1_T_PoolItem_InstantiateUtility_InstantiateInfo___Array* array,
        int32_t index,
        int32_t length,
        app::SimpleGenericPool_1_T_PoolItem_InstantiateUtility_InstantiateInfo_ value,
        app::IComparer_1_SimpleGenericPool_1_PoolItem_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02FF1400,
        void,
        Sort_2,
        app::SimpleGenericPool_1_T_PoolItem_InstantiateUtility_InstantiateInfo___Array* keys,
        int32_t index,
        int32_t length,
        app::Comparison_1_SimpleGenericPool_1_PoolItem_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02F37310,
        int32_t,
        InternalBinarySearch_1,
        app::SimpleGenericPool_1_T_PoolItem_InstantiateUtility_InstantiateInfo___Array* array,
        int32_t index,
        int32_t length,
        app::SimpleGenericPool_1_T_PoolItem_InstantiateUtility_InstantiateInfo_ value,
        app::IComparer_1_SimpleGenericPool_1_PoolItem_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02F37490,
        void,
        SwapIfGreater_1,
        app::SimpleGenericPool_1_T_PoolItem_InstantiateUtility_InstantiateInfo___Array* keys,
        app::Comparison_1_SimpleGenericPool_1_PoolItem_* comparer,
        int32_t a,
        int32_t b
    )
    IL2CPP_REGISTER_METHOD(0x02F376A0, void, Swap_1, app::SimpleGenericPool_1_T_PoolItem_InstantiateUtility_InstantiateInfo___Array* a, int32_t i, int32_t j)
    IL2CPP_REGISTER_METHOD(
        0x02C86EC0,
        void,
        IntrospectiveSort_1,
        app::SimpleGenericPool_1_T_PoolItem_InstantiateUtility_InstantiateInfo___Array* keys,
        int32_t left,
        int32_t length,
        app::Comparison_1_SimpleGenericPool_1_PoolItem_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C86FB0,
        void,
        IntroSort_1,
        app::SimpleGenericPool_1_T_PoolItem_InstantiateUtility_InstantiateInfo___Array* keys,
        int32_t lo,
        int32_t hi,
        int32_t depth_limit,
        app::Comparison_1_SimpleGenericPool_1_PoolItem_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02F37770,
        int32_t,
        PickPivotAndPartition_1,
        app::SimpleGenericPool_1_T_PoolItem_InstantiateUtility_InstantiateInfo___Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_SimpleGenericPool_1_PoolItem_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C87750,
        void,
        Heapsort_1,
        app::SimpleGenericPool_1_T_PoolItem_InstantiateUtility_InstantiateInfo___Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_SimpleGenericPool_1_PoolItem_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02F37C40,
        void,
        DownHeap_1,
        app::SimpleGenericPool_1_T_PoolItem_InstantiateUtility_InstantiateInfo___Array* keys,
        int32_t i,
        int32_t n,
        int32_t lo,
        app::Comparison_1_SimpleGenericPool_1_PoolItem_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02F38060,
        void,
        InsertionSort_1,
        app::SimpleGenericPool_1_T_PoolItem_InstantiateUtility_InstantiateInfo___Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_SimpleGenericPool_1_PoolItem_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02FF1550,
        void,
        Sort_3,
        app::SimpleGenericPool_1_T_PoolItem_System_Object___Array* keys,
        int32_t index,
        int32_t length,
        app::IComparer_1_SimpleGenericPool_1_PoolItem__1* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02FF1870,
        int32_t,
        BinarySearch_2,
        app::SimpleGenericPool_1_T_PoolItem_System_Object___Array* array,
        int32_t index,
        int32_t length,
        app::SimpleGenericPool_1_T_PoolItem_System_Object_ value,
        app::IComparer_1_SimpleGenericPool_1_PoolItem__1* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02FF1A20,
        void,
        Sort_4,
        app::SimpleGenericPool_1_T_PoolItem_System_Object___Array* keys,
        int32_t index,
        int32_t length,
        app::Comparison_1_SimpleGenericPool_1_PoolItem__1* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C8AB70,
        int32_t,
        InternalBinarySearch_2,
        app::SimpleGenericPool_1_T_PoolItem_System_Object___Array* array,
        int32_t index,
        int32_t length,
        app::SimpleGenericPool_1_T_PoolItem_System_Object_ value,
        app::IComparer_1_SimpleGenericPool_1_PoolItem__1* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C8AD30,
        void,
        SwapIfGreater_2,
        app::SimpleGenericPool_1_T_PoolItem_System_Object___Array* keys,
        app::Comparison_1_SimpleGenericPool_1_PoolItem__1* comparer,
        int32_t a,
        int32_t b
    )
    IL2CPP_REGISTER_METHOD(0x02C8AEE0, void, Swap_2, app::SimpleGenericPool_1_T_PoolItem_System_Object___Array* a, int32_t i, int32_t j)
    IL2CPP_REGISTER_METHOD(
        0x02C86EC0,
        void,
        IntrospectiveSort_2,
        app::SimpleGenericPool_1_T_PoolItem_System_Object___Array* keys,
        int32_t left,
        int32_t length,
        app::Comparison_1_SimpleGenericPool_1_PoolItem__1* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C86FB0,
        void,
        IntroSort_2,
        app::SimpleGenericPool_1_T_PoolItem_System_Object___Array* keys,
        int32_t lo,
        int32_t hi,
        int32_t depth_limit,
        app::Comparison_1_SimpleGenericPool_1_PoolItem__1* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C8AF80,
        int32_t,
        PickPivotAndPartition_2,
        app::SimpleGenericPool_1_T_PoolItem_System_Object___Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_SimpleGenericPool_1_PoolItem__1* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C87750,
        void,
        Heapsort_2,
        app::SimpleGenericPool_1_T_PoolItem_System_Object___Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_SimpleGenericPool_1_PoolItem__1* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C8B3D0,
        void,
        DownHeap_2,
        app::SimpleGenericPool_1_T_PoolItem_System_Object___Array* keys,
        int32_t i,
        int32_t n,
        int32_t lo,
        app::Comparison_1_SimpleGenericPool_1_PoolItem__1* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C8B740,
        void,
        InsertionSort_2,
        app::SimpleGenericPool_1_T_PoolItem_System_Object___Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_SimpleGenericPool_1_PoolItem__1* comparer
    )
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_SimpleGenericPool_1_PoolItem_
