#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Comparison_1_SceneOperation_.h>
#include <Modloader/app/structs/IComparer_1_SceneOperation_.h>
#include <Modloader/app/structs/SceneOperation.h>
#include <Modloader/app/structs/SceneOperation__Array.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_SceneOperation_ {
    IL2CPP_REGISTER_METHOD(
        0x02FEF030,
        void,
        Sort_1,
        app::SceneOperation__Array* keys,
        int32_t index,
        int32_t length,
        app::IComparer_1_SceneOperation_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02FEF350,
        int32_t,
        BinarySearch,
        app::SceneOperation__Array* array,
        int32_t index,
        int32_t length,
        app::SceneOperation value,
        app::IComparer_1_SceneOperation_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02FEF500,
        void,
        Sort_2,
        app::SceneOperation__Array* keys,
        int32_t index,
        int32_t length,
        app::Comparison_1_SceneOperation_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C898B0,
        int32_t,
        InternalBinarySearch,
        app::SceneOperation__Array* array,
        int32_t index,
        int32_t length,
        app::SceneOperation value,
        app::IComparer_1_SceneOperation_* comparer
    )
    IL2CPP_REGISTER_METHOD(0x02C89A40, void, SwapIfGreater, app::SceneOperation__Array* keys, app::Comparison_1_SceneOperation_* comparer, int32_t a, int32_t b)
    IL2CPP_REGISTER_METHOD(0x02C89BD0, void, Swap, app::SceneOperation__Array* a, int32_t i, int32_t j)
    IL2CPP_REGISTER_METHOD(
        0x02C86EC0,
        void,
        IntrospectiveSort,
        app::SceneOperation__Array* keys,
        int32_t left,
        int32_t length,
        app::Comparison_1_SceneOperation_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C86FB0,
        void,
        IntroSort,
        app::SceneOperation__Array* keys,
        int32_t lo,
        int32_t hi,
        int32_t depth_limit,
        app::Comparison_1_SceneOperation_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C89C60,
        int32_t,
        PickPivotAndPartition,
        app::SceneOperation__Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_SceneOperation_* comparer
    )
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, app::SceneOperation__Array* keys, int32_t lo, int32_t hi, app::Comparison_1_SceneOperation_* comparer)
    IL2CPP_REGISTER_METHOD(
        0x02C8A050,
        void,
        DownHeap,
        app::SceneOperation__Array* keys,
        int32_t i,
        int32_t n,
        int32_t lo,
        app::Comparison_1_SceneOperation_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C8A330,
        void,
        InsertionSort,
        app::SceneOperation__Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_SceneOperation_* comparer
    )
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_SceneOperation_
