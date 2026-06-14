#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Comparison_1_VerticalSpacer_Item_.h>
#include <Modloader/app/structs/IComparer_1_VerticalSpacer_Item_.h>
#include <Modloader/app/structs/VerticalSpacer_Item.h>
#include <Modloader/app/structs/VerticalSpacer_Item__Array.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_VerticalSpacer_Item_ {
    IL2CPP_REGISTER_METHOD(
        0x02C8A550,
        void,
        Sort_1,
        app::VerticalSpacer_Item__Array* keys,
        int32_t index,
        int32_t length,
        app::IComparer_1_VerticalSpacer_Item_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C8A870,
        int32_t,
        BinarySearch,
        app::VerticalSpacer_Item__Array* array,
        int32_t index,
        int32_t length,
        app::VerticalSpacer_Item value,
        app::IComparer_1_VerticalSpacer_Item_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C8AA20,
        void,
        Sort_2,
        app::VerticalSpacer_Item__Array* keys,
        int32_t index,
        int32_t length,
        app::Comparison_1_VerticalSpacer_Item_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C8AB70,
        int32_t,
        InternalBinarySearch,
        app::VerticalSpacer_Item__Array* array,
        int32_t index,
        int32_t length,
        app::VerticalSpacer_Item value,
        app::IComparer_1_VerticalSpacer_Item_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C8AD30,
        void,
        SwapIfGreater,
        app::VerticalSpacer_Item__Array* keys,
        app::Comparison_1_VerticalSpacer_Item_* comparer,
        int32_t a,
        int32_t b
    )
    IL2CPP_REGISTER_METHOD(0x02C8AEE0, void, Swap, app::VerticalSpacer_Item__Array* a, int32_t i, int32_t j)
    IL2CPP_REGISTER_METHOD(
        0x02C86EC0,
        void,
        IntrospectiveSort,
        app::VerticalSpacer_Item__Array* keys,
        int32_t left,
        int32_t length,
        app::Comparison_1_VerticalSpacer_Item_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C86FB0,
        void,
        IntroSort,
        app::VerticalSpacer_Item__Array* keys,
        int32_t lo,
        int32_t hi,
        int32_t depth_limit,
        app::Comparison_1_VerticalSpacer_Item_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C8AF80,
        int32_t,
        PickPivotAndPartition,
        app::VerticalSpacer_Item__Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_VerticalSpacer_Item_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C87750,
        void,
        Heapsort,
        app::VerticalSpacer_Item__Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_VerticalSpacer_Item_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C8B3D0,
        void,
        DownHeap,
        app::VerticalSpacer_Item__Array* keys,
        int32_t i,
        int32_t n,
        int32_t lo,
        app::Comparison_1_VerticalSpacer_Item_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C8B740,
        void,
        InsertionSort,
        app::VerticalSpacer_Item__Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_VerticalSpacer_Item_* comparer
    )
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_VerticalSpacer_Item_
