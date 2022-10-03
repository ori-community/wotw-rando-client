#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_XboxOneStatistics_StatisticReading_ {
    IL2CPP_REGISTER_METHOD(0x02C8E1F0, void, Sort_1, (app::XboxOneStatistics_StatisticReading__Array * keys, int32_t index, int32_t length, app::IComparer_1_XboxOneStatistics_StatisticReading_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04723D70, ArraySortHelper_1_XboxOneStatistics_StatisticReading__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C8E510, int32_t, BinarySearch, (app::XboxOneStatistics_StatisticReading__Array * array, int32_t index, int32_t length, app::XboxOneStatistics_StatisticReading value, app::IComparer_1_XboxOneStatistics_StatisticReading_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x047277C0, ArraySortHelper_1_XboxOneStatistics_StatisticReading__BinarySearch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C8E6C0, void, Sort_2, (app::XboxOneStatistics_StatisticReading__Array * keys, int32_t index, int32_t length, app::Comparison_1_XboxOneStatistics_StatisticReading_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x047890D8, ArraySortHelper_1_XboxOneStatistics_StatisticReading__Sort_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C8BFB0, int32_t, InternalBinarySearch, (app::XboxOneStatistics_StatisticReading__Array * array, int32_t index, int32_t length, app::XboxOneStatistics_StatisticReading value, app::IComparer_1_XboxOneStatistics_StatisticReading_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8C170, void, SwapIfGreater, (app::XboxOneStatistics_StatisticReading__Array * keys, app::Comparison_1_XboxOneStatistics_StatisticReading_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02C8C330, void, Swap, (app::XboxOneStatistics_StatisticReading__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::XboxOneStatistics_StatisticReading__Array * keys, int32_t left, int32_t length, app::Comparison_1_XboxOneStatistics_StatisticReading_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::XboxOneStatistics_StatisticReading__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_XboxOneStatistics_StatisticReading_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8C3D0, int32_t, PickPivotAndPartition, (app::XboxOneStatistics_StatisticReading__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_XboxOneStatistics_StatisticReading_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::XboxOneStatistics_StatisticReading__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_XboxOneStatistics_StatisticReading_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8C820, void, DownHeap, (app::XboxOneStatistics_StatisticReading__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_XboxOneStatistics_StatisticReading_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8CBA0, void, InsertionSort, (app::XboxOneStatistics_StatisticReading__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_XboxOneStatistics_StatisticReading_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_XboxOneStatistics_StatisticReading_
