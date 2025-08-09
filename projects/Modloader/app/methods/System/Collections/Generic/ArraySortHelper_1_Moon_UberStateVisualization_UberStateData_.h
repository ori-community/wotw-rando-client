#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Comparison_1_Moon_UberStateVisualization_UberStateData_.h>
#include <Modloader/app/structs/IComparer_1_Moon_UberStateVisualization_UberStateData_.h>
#include <Modloader/app/structs/UberStateData.h>
#include <Modloader/app/structs/UberStateData__Array.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_Moon_UberStateVisualization_UberStateData_ {
    IL2CPP_REGISTER_METHOD(
        0x02F75B50,
        void,
        Sort_1,
        app::UberStateData__Array* keys,
        int32_t index,
        int32_t length,
        app::IComparer_1_Moon_UberStateVisualization_UberStateData_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02F75E70,
        int32_t,
        BinarySearch,
        app::UberStateData__Array* array,
        int32_t index,
        int32_t length,
        app::UberStateData value,
        app::IComparer_1_Moon_UberStateVisualization_UberStateData_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02F76050,
        void,
        Sort_2,
        app::UberStateData__Array* keys,
        int32_t index,
        int32_t length,
        app::Comparison_1_Moon_UberStateVisualization_UberStateData_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02F761A0,
        int32_t,
        InternalBinarySearch,
        app::UberStateData__Array* array,
        int32_t index,
        int32_t length,
        app::UberStateData value,
        app::IComparer_1_Moon_UberStateVisualization_UberStateData_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02F76340,
        void,
        SwapIfGreater,
        app::UberStateData__Array* keys,
        app::Comparison_1_Moon_UberStateVisualization_UberStateData_* comparer,
        int32_t a,
        int32_t b
    )
    IL2CPP_REGISTER_METHOD(0x02F76590, void, Swap, app::UberStateData__Array* a, int32_t i, int32_t j)
    IL2CPP_REGISTER_METHOD(
        0x02C86EC0,
        void,
        IntrospectiveSort,
        app::UberStateData__Array* keys,
        int32_t left,
        int32_t length,
        app::Comparison_1_Moon_UberStateVisualization_UberStateData_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C86FB0,
        void,
        IntroSort,
        app::UberStateData__Array* keys,
        int32_t lo,
        int32_t hi,
        int32_t depth_limit,
        app::Comparison_1_Moon_UberStateVisualization_UberStateData_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02F76680,
        int32_t,
        PickPivotAndPartition,
        app::UberStateData__Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_Moon_UberStateVisualization_UberStateData_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C87750,
        void,
        Heapsort,
        app::UberStateData__Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_Moon_UberStateVisualization_UberStateData_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02F76B70,
        void,
        DownHeap,
        app::UberStateData__Array* keys,
        int32_t i,
        int32_t n,
        int32_t lo,
        app::Comparison_1_Moon_UberStateVisualization_UberStateData_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02F76FC0,
        void,
        InsertionSort,
        app::UberStateData__Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_Moon_UberStateVisualization_UberStateData_* comparer
    )
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_Moon_UberStateVisualization_UberStateData_
