#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Comparison_1_ShardTraderPlaceholder_ConditionalStockList_.h>
#include <Modloader/app/structs/IComparer_1_ShardTraderPlaceholder_ConditionalStockList_.h>
#include <Modloader/app/structs/ShardTraderPlaceholder_ConditionalStockList.h>
#include <Modloader/app/structs/ShardTraderPlaceholder_ConditionalStockList__Array.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_ShardTraderPlaceholder_ConditionalStockList_ {
    IL2CPP_REGISTER_METHOD(
        0x02FF08F0,
        void,
        Sort_1,
        app::ShardTraderPlaceholder_ConditionalStockList__Array* keys,
        int32_t index,
        int32_t length,
        app::IComparer_1_ShardTraderPlaceholder_ConditionalStockList_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02FF0C10,
        int32_t,
        BinarySearch,
        app::ShardTraderPlaceholder_ConditionalStockList__Array* array,
        int32_t index,
        int32_t length,
        app::ShardTraderPlaceholder_ConditionalStockList value,
        app::IComparer_1_ShardTraderPlaceholder_ConditionalStockList_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02FF0DC0,
        void,
        Sort_2,
        app::ShardTraderPlaceholder_ConditionalStockList__Array* keys,
        int32_t index,
        int32_t length,
        app::Comparison_1_ShardTraderPlaceholder_ConditionalStockList_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C898B0,
        int32_t,
        InternalBinarySearch,
        app::ShardTraderPlaceholder_ConditionalStockList__Array* array,
        int32_t index,
        int32_t length,
        app::ShardTraderPlaceholder_ConditionalStockList value,
        app::IComparer_1_ShardTraderPlaceholder_ConditionalStockList_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C89A40,
        void,
        SwapIfGreater,
        app::ShardTraderPlaceholder_ConditionalStockList__Array* keys,
        app::Comparison_1_ShardTraderPlaceholder_ConditionalStockList_* comparer,
        int32_t a,
        int32_t b
    )
    IL2CPP_REGISTER_METHOD(0x02C89BD0, void, Swap, app::ShardTraderPlaceholder_ConditionalStockList__Array* a, int32_t i, int32_t j)
    IL2CPP_REGISTER_METHOD(
        0x02C86EC0,
        void,
        IntrospectiveSort,
        app::ShardTraderPlaceholder_ConditionalStockList__Array* keys,
        int32_t left,
        int32_t length,
        app::Comparison_1_ShardTraderPlaceholder_ConditionalStockList_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C86FB0,
        void,
        IntroSort,
        app::ShardTraderPlaceholder_ConditionalStockList__Array* keys,
        int32_t lo,
        int32_t hi,
        int32_t depth_limit,
        app::Comparison_1_ShardTraderPlaceholder_ConditionalStockList_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C89C60,
        int32_t,
        PickPivotAndPartition,
        app::ShardTraderPlaceholder_ConditionalStockList__Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_ShardTraderPlaceholder_ConditionalStockList_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C87750,
        void,
        Heapsort,
        app::ShardTraderPlaceholder_ConditionalStockList__Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_ShardTraderPlaceholder_ConditionalStockList_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C8A050,
        void,
        DownHeap,
        app::ShardTraderPlaceholder_ConditionalStockList__Array* keys,
        int32_t i,
        int32_t n,
        int32_t lo,
        app::Comparison_1_ShardTraderPlaceholder_ConditionalStockList_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C8A330,
        void,
        InsertionSort,
        app::ShardTraderPlaceholder_ConditionalStockList__Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_ShardTraderPlaceholder_ConditionalStockList_* comparer
    )
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_ShardTraderPlaceholder_ConditionalStockList_
