#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Comparison_1_Double_.h>
#include <Modloader/app/structs/Double__Array.h>
#include <Modloader/app/structs/IComparer_1_System_Double_.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_System_Double_ {
    IL2CPP_REGISTER_METHOD(0x02FFE390, void, Sort_1, app::Double__Array* keys, int32_t index, int32_t length, app::IComparer_1_System_Double_* comparer)
    IL2CPP_REGISTER_METHOD(
        0x02FFE6B0,
        int32_t,
        BinarySearch,
        app::Double__Array* array,
        int32_t index,
        int32_t length,
        double value,
        app::IComparer_1_System_Double_* comparer
    )
    IL2CPP_REGISTER_METHOD(0x02FFE850, void, Sort_2, app::Double__Array* keys, int32_t index, int32_t length, app::Comparison_1_Double_* comparer)
    IL2CPP_REGISTER_METHOD(
        0x02FFE9A0,
        int32_t,
        InternalBinarySearch,
        app::Double__Array* array,
        int32_t index,
        int32_t length,
        double value,
        app::IComparer_1_System_Double_* comparer
    )
    IL2CPP_REGISTER_METHOD(0x02FFEAD0, void, SwapIfGreater, app::Double__Array* keys, app::Comparison_1_Double_* comparer, int32_t a, int32_t b)
    IL2CPP_REGISTER_METHOD(0x02FFEC60, void, Swap, app::Double__Array* a, int32_t i, int32_t j)
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, app::Double__Array* keys, int32_t left, int32_t length, app::Comparison_1_Double_* comparer)
    IL2CPP_REGISTER_METHOD(
        0x02C86FB0,
        void,
        IntroSort,
        app::Double__Array* keys,
        int32_t lo,
        int32_t hi,
        int32_t depth_limit,
        app::Comparison_1_Double_* comparer
    )
    IL2CPP_REGISTER_METHOD(0x02FFECE0, int32_t, PickPivotAndPartition, app::Double__Array* keys, int32_t lo, int32_t hi, app::Comparison_1_Double_* comparer)
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, app::Double__Array* keys, int32_t lo, int32_t hi, app::Comparison_1_Double_* comparer)
    IL2CPP_REGISTER_METHOD(0x02FFF0B0, void, DownHeap, app::Double__Array* keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_Double_* comparer)
    IL2CPP_REGISTER_METHOD(0x02FFF370, void, InsertionSort, app::Double__Array* keys, int32_t lo, int32_t hi, app::Comparison_1_Double_* comparer)
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_System_Double_
