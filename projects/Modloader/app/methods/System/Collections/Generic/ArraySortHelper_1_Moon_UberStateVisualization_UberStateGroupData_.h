#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UberStateGroupData__Array.h>
#include <Modloader/app/structs/Comparison_1_Moon_UberStateVisualization_UberStateGroupData_.h>
#include <Modloader/app/structs/IComparer_1_Moon_UberStateVisualization_UberStateGroupData_.h>
#include <Modloader/app/structs/UberStateGroupData.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_Moon_UberStateVisualization_UberStateGroupData_ {
    IL2CPP_REGISTER_METHOD(0x02F772D0, void, Sort_1, (app::UberStateGroupData__Array * keys, int32_t index, int32_t length, app::IComparer_1_Moon_UberStateVisualization_UberStateGroupData_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F775F0, int32_t, BinarySearch, (app::UberStateGroupData__Array * array, int32_t index, int32_t length, app::UberStateGroupData value, app::IComparer_1_Moon_UberStateVisualization_UberStateGroupData_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F777D0, void, Sort_2, (app::UberStateGroupData__Array * keys, int32_t index, int32_t length, app::Comparison_1_Moon_UberStateVisualization_UberStateGroupData_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F761A0, int32_t, InternalBinarySearch, (app::UberStateGroupData__Array * array, int32_t index, int32_t length, app::UberStateGroupData value, app::IComparer_1_Moon_UberStateVisualization_UberStateGroupData_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F76340, void, SwapIfGreater, (app::UberStateGroupData__Array * keys, app::Comparison_1_Moon_UberStateVisualization_UberStateGroupData_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02F76590, void, Swap, (app::UberStateGroupData__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::UberStateGroupData__Array * keys, int32_t left, int32_t length, app::Comparison_1_Moon_UberStateVisualization_UberStateGroupData_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::UberStateGroupData__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_Moon_UberStateVisualization_UberStateGroupData_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F76680, int32_t, PickPivotAndPartition, (app::UberStateGroupData__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Moon_UberStateVisualization_UberStateGroupData_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::UberStateGroupData__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Moon_UberStateVisualization_UberStateGroupData_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F76B70, void, DownHeap, (app::UberStateGroupData__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_Moon_UberStateVisualization_UberStateGroupData_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F76FC0, void, InsertionSort, (app::UberStateGroupData__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Moon_UberStateVisualization_UberStateGroupData_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_Moon_UberStateVisualization_UberStateGroupData_
