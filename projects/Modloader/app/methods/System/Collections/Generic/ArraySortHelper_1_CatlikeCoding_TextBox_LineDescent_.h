#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Comparison_1_CatlikeCoding_TextBox_LineDescent_.h>
#include <Modloader/app/structs/IComparer_1_CatlikeCoding_TextBox_LineDescent_.h>
#include <Modloader/app/structs/LineDescent.h>
#include <Modloader/app/structs/LineDescent__Array.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_CatlikeCoding_TextBox_LineDescent_ {
    IL2CPP_REGISTER_METHOD(
        0x02F2CB00,
        void,
        Sort_1,
        app::LineDescent__Array* keys,
        int32_t index,
        int32_t length,
        app::IComparer_1_CatlikeCoding_TextBox_LineDescent_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02F2CE20,
        int32_t,
        BinarySearch,
        app::LineDescent__Array* array,
        int32_t index,
        int32_t length,
        app::LineDescent value,
        app::IComparer_1_CatlikeCoding_TextBox_LineDescent_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02F2CFD0,
        void,
        Sort_2,
        app::LineDescent__Array* keys,
        int32_t index,
        int32_t length,
        app::Comparison_1_CatlikeCoding_TextBox_LineDescent_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C86B20,
        int32_t,
        InternalBinarySearch,
        app::LineDescent__Array* array,
        int32_t index,
        int32_t length,
        app::LineDescent value,
        app::IComparer_1_CatlikeCoding_TextBox_LineDescent_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C86C60,
        void,
        SwapIfGreater,
        app::LineDescent__Array* keys,
        app::Comparison_1_CatlikeCoding_TextBox_LineDescent_* comparer,
        int32_t a,
        int32_t b
    )
    IL2CPP_REGISTER_METHOD(0x02C86E20, void, Swap, app::LineDescent__Array* a, int32_t i, int32_t j)
    IL2CPP_REGISTER_METHOD(
        0x02C86EC0,
        void,
        IntrospectiveSort,
        app::LineDescent__Array* keys,
        int32_t left,
        int32_t length,
        app::Comparison_1_CatlikeCoding_TextBox_LineDescent_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C86FB0,
        void,
        IntroSort,
        app::LineDescent__Array* keys,
        int32_t lo,
        int32_t hi,
        int32_t depth_limit,
        app::Comparison_1_CatlikeCoding_TextBox_LineDescent_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C87320,
        int32_t,
        PickPivotAndPartition,
        app::LineDescent__Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_CatlikeCoding_TextBox_LineDescent_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C87750,
        void,
        Heapsort,
        app::LineDescent__Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_CatlikeCoding_TextBox_LineDescent_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C87900,
        void,
        DownHeap,
        app::LineDescent__Array* keys,
        int32_t i,
        int32_t n,
        int32_t lo,
        app::Comparison_1_CatlikeCoding_TextBox_LineDescent_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C87C30,
        void,
        InsertionSort,
        app::LineDescent__Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_CatlikeCoding_TextBox_LineDescent_* comparer
    )
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_CatlikeCoding_TextBox_LineDescent_
