#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ChainLevelAndCount__Array.h>
#include <Modloader/app/structs/ChainLevelAndCount.h>
#include <Modloader/app/structs/Comparison_1_Motvin_Collections_ChainLevelAndCount_.h>
#include <Modloader/app/structs/IComparer_1_Motvin_Collections_ChainLevelAndCount_.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_Motvin_Collections_ChainLevelAndCount_ {
    IL2CPP_REGISTER_METHOD(0x02F79DE0, void, Sort_1, (app::ChainLevelAndCount__Array * keys, int32_t index, int32_t length, app::IComparer_1_Motvin_Collections_ChainLevelAndCount_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F7A100, int32_t, BinarySearch, (app::ChainLevelAndCount__Array * array, int32_t index, int32_t length, app::ChainLevelAndCount value, app::IComparer_1_Motvin_Collections_ChainLevelAndCount_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F7A2A0, void, Sort_2, (app::ChainLevelAndCount__Array * keys, int32_t index, int32_t length, app::Comparison_1_Motvin_Collections_ChainLevelAndCount_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F2B330, int32_t, InternalBinarySearch, (app::ChainLevelAndCount__Array * array, int32_t index, int32_t length, app::ChainLevelAndCount value, app::IComparer_1_Motvin_Collections_ChainLevelAndCount_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F2B450, void, SwapIfGreater, (app::ChainLevelAndCount__Array * keys, app::Comparison_1_Motvin_Collections_ChainLevelAndCount_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02F2B5E0, void, Swap, (app::ChainLevelAndCount__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::ChainLevelAndCount__Array * keys, int32_t left, int32_t length, app::Comparison_1_Motvin_Collections_ChainLevelAndCount_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::ChainLevelAndCount__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_Motvin_Collections_ChainLevelAndCount_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F2B660, int32_t, PickPivotAndPartition, (app::ChainLevelAndCount__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Motvin_Collections_ChainLevelAndCount_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::ChainLevelAndCount__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Motvin_Collections_ChainLevelAndCount_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F2BA30, void, DownHeap, (app::ChainLevelAndCount__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_Motvin_Collections_ChainLevelAndCount_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F2BCF0, void, InsertionSort, (app::ChainLevelAndCount__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Motvin_Collections_ChainLevelAndCount_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_Motvin_Collections_ChainLevelAndCount_
