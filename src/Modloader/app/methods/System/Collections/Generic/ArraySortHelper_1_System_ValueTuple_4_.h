#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Comparison_1_ValueTuple_4_Object_Int32_Int32_Single_.h>
#include <Modloader/app/structs/IComparer_1_System_ValueTuple_4_.h>
#include <Modloader/app/structs/ValueTuple_4_Object_Int32_Int32_Single_.h>
#include <Modloader/app/structs/ValueTuple_4_Object_Int32_Int32_Single___Array.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_System_ValueTuple_4_ {
    IL2CPP_REGISTER_METHOD(
        0x02F83320,
        void,
        Sort_1,
        app::ValueTuple_4_Object_Int32_Int32_Single___Array* keys,
        int32_t index,
        int32_t length,
        app::IComparer_1_System_ValueTuple_4_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02F83640,
        int32_t,
        BinarySearch,
        app::ValueTuple_4_Object_Int32_Int32_Single___Array* array,
        int32_t index,
        int32_t length,
        app::ValueTuple_4_Object_Int32_Int32_Single_ value,
        app::IComparer_1_System_ValueTuple_4_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02F837F0,
        void,
        Sort_2,
        app::ValueTuple_4_Object_Int32_Int32_Single___Array* keys,
        int32_t index,
        int32_t length,
        app::Comparison_1_ValueTuple_4_Object_Int32_Int32_Single_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C8BFB0,
        int32_t,
        InternalBinarySearch,
        app::ValueTuple_4_Object_Int32_Int32_Single___Array* array,
        int32_t index,
        int32_t length,
        app::ValueTuple_4_Object_Int32_Int32_Single_ value,
        app::IComparer_1_System_ValueTuple_4_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C8C170,
        void,
        SwapIfGreater,
        app::ValueTuple_4_Object_Int32_Int32_Single___Array* keys,
        app::Comparison_1_ValueTuple_4_Object_Int32_Int32_Single_* comparer,
        int32_t a,
        int32_t b
    )
    IL2CPP_REGISTER_METHOD(0x02C8C330, void, Swap, app::ValueTuple_4_Object_Int32_Int32_Single___Array* a, int32_t i, int32_t j)
    IL2CPP_REGISTER_METHOD(
        0x02C86EC0,
        void,
        IntrospectiveSort,
        app::ValueTuple_4_Object_Int32_Int32_Single___Array* keys,
        int32_t left,
        int32_t length,
        app::Comparison_1_ValueTuple_4_Object_Int32_Int32_Single_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C86FB0,
        void,
        IntroSort,
        app::ValueTuple_4_Object_Int32_Int32_Single___Array* keys,
        int32_t lo,
        int32_t hi,
        int32_t depth_limit,
        app::Comparison_1_ValueTuple_4_Object_Int32_Int32_Single_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C8C3D0,
        int32_t,
        PickPivotAndPartition,
        app::ValueTuple_4_Object_Int32_Int32_Single___Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_ValueTuple_4_Object_Int32_Int32_Single_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C87750,
        void,
        Heapsort,
        app::ValueTuple_4_Object_Int32_Int32_Single___Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_ValueTuple_4_Object_Int32_Int32_Single_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C8C820,
        void,
        DownHeap,
        app::ValueTuple_4_Object_Int32_Int32_Single___Array* keys,
        int32_t i,
        int32_t n,
        int32_t lo,
        app::Comparison_1_ValueTuple_4_Object_Int32_Int32_Single_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C8CBA0,
        void,
        InsertionSort,
        app::ValueTuple_4_Object_Int32_Int32_Single___Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_ValueTuple_4_Object_Int32_Int32_Single_* comparer
    )
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_System_ValueTuple_4_
