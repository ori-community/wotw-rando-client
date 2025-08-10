#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Comparison_1_ValueTuple_2_Int32_Object_.h>
#include <Modloader/app/structs/Comparison_1_ValueTuple_2_Object_Object_.h>
#include <Modloader/app/structs/Comparison_1_ValueTuple_2_Object_Single_.h>
#include <Modloader/app/structs/IComparer_1_System_ValueTuple_2_.h>
#include <Modloader/app/structs/IComparer_1_System_ValueTuple_2__1.h>
#include <Modloader/app/structs/IComparer_1_System_ValueTuple_2__2.h>
#include <Modloader/app/structs/ValueTuple_2_Int32_Object_.h>
#include <Modloader/app/structs/ValueTuple_2_Int32_Object___Array.h>
#include <Modloader/app/structs/ValueTuple_2_Object_Object_.h>
#include <Modloader/app/structs/ValueTuple_2_Object_Object___Array.h>
#include <Modloader/app/structs/ValueTuple_2_Object_Single_.h>
#include <Modloader/app/structs/ValueTuple_2_Object_Single___Array.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_System_ValueTuple_2_ {
    IL2CPP_REGISTER_METHOD(
        0x02F820C0,
        void,
        Sort_1,
        app::ValueTuple_2_Int32_Object___Array* keys,
        int32_t index,
        int32_t length,
        app::IComparer_1_System_ValueTuple_2_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02F823E0,
        int32_t,
        BinarySearch_1,
        app::ValueTuple_2_Int32_Object___Array* array,
        int32_t index,
        int32_t length,
        app::ValueTuple_2_Int32_Object_ value,
        app::IComparer_1_System_ValueTuple_2_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02F82590,
        void,
        Sort_2,
        app::ValueTuple_2_Int32_Object___Array* keys,
        int32_t index,
        int32_t length,
        app::Comparison_1_ValueTuple_2_Int32_Object_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C898B0,
        int32_t,
        InternalBinarySearch_1,
        app::ValueTuple_2_Int32_Object___Array* array,
        int32_t index,
        int32_t length,
        app::ValueTuple_2_Int32_Object_ value,
        app::IComparer_1_System_ValueTuple_2_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C89A40,
        void,
        SwapIfGreater_1,
        app::ValueTuple_2_Int32_Object___Array* keys,
        app::Comparison_1_ValueTuple_2_Int32_Object_* comparer,
        int32_t a,
        int32_t b
    )
    IL2CPP_REGISTER_METHOD(0x02C89BD0, void, Swap_1, app::ValueTuple_2_Int32_Object___Array* a, int32_t i, int32_t j)
    IL2CPP_REGISTER_METHOD(
        0x02C86EC0,
        void,
        IntrospectiveSort_1,
        app::ValueTuple_2_Int32_Object___Array* keys,
        int32_t left,
        int32_t length,
        app::Comparison_1_ValueTuple_2_Int32_Object_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C86FB0,
        void,
        IntroSort_1,
        app::ValueTuple_2_Int32_Object___Array* keys,
        int32_t lo,
        int32_t hi,
        int32_t depth_limit,
        app::Comparison_1_ValueTuple_2_Int32_Object_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C89C60,
        int32_t,
        PickPivotAndPartition_1,
        app::ValueTuple_2_Int32_Object___Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_ValueTuple_2_Int32_Object_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C87750,
        void,
        Heapsort_1,
        app::ValueTuple_2_Int32_Object___Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_ValueTuple_2_Int32_Object_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C8A050,
        void,
        DownHeap_1,
        app::ValueTuple_2_Int32_Object___Array* keys,
        int32_t i,
        int32_t n,
        int32_t lo,
        app::Comparison_1_ValueTuple_2_Int32_Object_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C8A330,
        void,
        InsertionSort_1,
        app::ValueTuple_2_Int32_Object___Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_ValueTuple_2_Int32_Object_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02F826E0,
        void,
        Sort_3,
        app::ValueTuple_2_Object_Object___Array* keys,
        int32_t index,
        int32_t length,
        app::IComparer_1_System_ValueTuple_2__1* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02F82A00,
        int32_t,
        BinarySearch_2,
        app::ValueTuple_2_Object_Object___Array* array,
        int32_t index,
        int32_t length,
        app::ValueTuple_2_Object_Object_ value,
        app::IComparer_1_System_ValueTuple_2__1* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02F82BB0,
        void,
        Sort_4,
        app::ValueTuple_2_Object_Object___Array* keys,
        int32_t index,
        int32_t length,
        app::Comparison_1_ValueTuple_2_Object_Object_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C898B0,
        int32_t,
        InternalBinarySearch_2,
        app::ValueTuple_2_Object_Object___Array* array,
        int32_t index,
        int32_t length,
        app::ValueTuple_2_Object_Object_ value,
        app::IComparer_1_System_ValueTuple_2__1* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C89A40,
        void,
        SwapIfGreater_2,
        app::ValueTuple_2_Object_Object___Array* keys,
        app::Comparison_1_ValueTuple_2_Object_Object_* comparer,
        int32_t a,
        int32_t b
    )
    IL2CPP_REGISTER_METHOD(0x02C89BD0, void, Swap_2, app::ValueTuple_2_Object_Object___Array* a, int32_t i, int32_t j)
    IL2CPP_REGISTER_METHOD(
        0x02C86EC0,
        void,
        IntrospectiveSort_2,
        app::ValueTuple_2_Object_Object___Array* keys,
        int32_t left,
        int32_t length,
        app::Comparison_1_ValueTuple_2_Object_Object_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C86FB0,
        void,
        IntroSort_2,
        app::ValueTuple_2_Object_Object___Array* keys,
        int32_t lo,
        int32_t hi,
        int32_t depth_limit,
        app::Comparison_1_ValueTuple_2_Object_Object_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C89C60,
        int32_t,
        PickPivotAndPartition_2,
        app::ValueTuple_2_Object_Object___Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_ValueTuple_2_Object_Object_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C87750,
        void,
        Heapsort_2,
        app::ValueTuple_2_Object_Object___Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_ValueTuple_2_Object_Object_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C8A050,
        void,
        DownHeap_2,
        app::ValueTuple_2_Object_Object___Array* keys,
        int32_t i,
        int32_t n,
        int32_t lo,
        app::Comparison_1_ValueTuple_2_Object_Object_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C8A330,
        void,
        InsertionSort_2,
        app::ValueTuple_2_Object_Object___Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_ValueTuple_2_Object_Object_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02F82D00,
        void,
        Sort_5,
        app::ValueTuple_2_Object_Single___Array* keys,
        int32_t index,
        int32_t length,
        app::IComparer_1_System_ValueTuple_2__2* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02F83020,
        int32_t,
        BinarySearch_3,
        app::ValueTuple_2_Object_Single___Array* array,
        int32_t index,
        int32_t length,
        app::ValueTuple_2_Object_Single_ value,
        app::IComparer_1_System_ValueTuple_2__2* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02F831D0,
        void,
        Sort_6,
        app::ValueTuple_2_Object_Single___Array* keys,
        int32_t index,
        int32_t length,
        app::Comparison_1_ValueTuple_2_Object_Single_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C898B0,
        int32_t,
        InternalBinarySearch_3,
        app::ValueTuple_2_Object_Single___Array* array,
        int32_t index,
        int32_t length,
        app::ValueTuple_2_Object_Single_ value,
        app::IComparer_1_System_ValueTuple_2__2* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C89A40,
        void,
        SwapIfGreater_3,
        app::ValueTuple_2_Object_Single___Array* keys,
        app::Comparison_1_ValueTuple_2_Object_Single_* comparer,
        int32_t a,
        int32_t b
    )
    IL2CPP_REGISTER_METHOD(0x02C89BD0, void, Swap_3, app::ValueTuple_2_Object_Single___Array* a, int32_t i, int32_t j)
    IL2CPP_REGISTER_METHOD(
        0x02C86EC0,
        void,
        IntrospectiveSort_3,
        app::ValueTuple_2_Object_Single___Array* keys,
        int32_t left,
        int32_t length,
        app::Comparison_1_ValueTuple_2_Object_Single_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C86FB0,
        void,
        IntroSort_3,
        app::ValueTuple_2_Object_Single___Array* keys,
        int32_t lo,
        int32_t hi,
        int32_t depth_limit,
        app::Comparison_1_ValueTuple_2_Object_Single_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C89C60,
        int32_t,
        PickPivotAndPartition_3,
        app::ValueTuple_2_Object_Single___Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_ValueTuple_2_Object_Single_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C87750,
        void,
        Heapsort_3,
        app::ValueTuple_2_Object_Single___Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_ValueTuple_2_Object_Single_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C8A050,
        void,
        DownHeap_3,
        app::ValueTuple_2_Object_Single___Array* keys,
        int32_t i,
        int32_t n,
        int32_t lo,
        app::Comparison_1_ValueTuple_2_Object_Single_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C8A330,
        void,
        InsertionSort_3,
        app::ValueTuple_2_Object_Single___Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_ValueTuple_2_Object_Single_* comparer
    )
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_System_ValueTuple_2_
