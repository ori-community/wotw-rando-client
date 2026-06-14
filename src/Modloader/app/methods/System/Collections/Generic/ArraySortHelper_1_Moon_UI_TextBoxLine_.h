#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Comparison_1_Moon_UI_TextBoxLine_.h>
#include <Modloader/app/structs/IComparer_1_Moon_UI_TextBoxLine_.h>
#include <Modloader/app/structs/TextBoxLine_1.h>
#include <Modloader/app/structs/TextBoxLine_1__Array.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_Moon_UI_TextBoxLine_ {
    IL2CPP_REGISTER_METHOD(
        0x02F74F00,
        void,
        Sort_1,
        app::TextBoxLine_1__Array* keys,
        int32_t index,
        int32_t length,
        app::IComparer_1_Moon_UI_TextBoxLine_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02F75220,
        int32_t,
        BinarySearch,
        app::TextBoxLine_1__Array* array,
        int32_t index,
        int32_t length,
        app::TextBoxLine_1 value,
        app::IComparer_1_Moon_UI_TextBoxLine_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02F753E0,
        void,
        Sort_2,
        app::TextBoxLine_1__Array* keys,
        int32_t index,
        int32_t length,
        app::Comparison_1_Moon_UI_TextBoxLine_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02F2DD70,
        int32_t,
        InternalBinarySearch,
        app::TextBoxLine_1__Array* array,
        int32_t index,
        int32_t length,
        app::TextBoxLine_1 value,
        app::IComparer_1_Moon_UI_TextBoxLine_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02F2DED0,
        void,
        SwapIfGreater,
        app::TextBoxLine_1__Array* keys,
        app::Comparison_1_Moon_UI_TextBoxLine_* comparer,
        int32_t a,
        int32_t b
    )
    IL2CPP_REGISTER_METHOD(0x02F2E0A0, void, Swap, app::TextBoxLine_1__Array* a, int32_t i, int32_t j)
    IL2CPP_REGISTER_METHOD(
        0x02C86EC0,
        void,
        IntrospectiveSort,
        app::TextBoxLine_1__Array* keys,
        int32_t left,
        int32_t length,
        app::Comparison_1_Moon_UI_TextBoxLine_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C86FB0,
        void,
        IntroSort,
        app::TextBoxLine_1__Array* keys,
        int32_t lo,
        int32_t hi,
        int32_t depth_limit,
        app::Comparison_1_Moon_UI_TextBoxLine_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02F2E150,
        int32_t,
        PickPivotAndPartition,
        app::TextBoxLine_1__Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_Moon_UI_TextBoxLine_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C87750,
        void,
        Heapsort,
        app::TextBoxLine_1__Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_Moon_UI_TextBoxLine_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02F2E5D0,
        void,
        DownHeap,
        app::TextBoxLine_1__Array* keys,
        int32_t i,
        int32_t n,
        int32_t lo,
        app::Comparison_1_Moon_UI_TextBoxLine_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02F2E990,
        void,
        InsertionSort,
        app::TextBoxLine_1__Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_Moon_UI_TextBoxLine_* comparer
    )
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_Moon_UI_TextBoxLine_
