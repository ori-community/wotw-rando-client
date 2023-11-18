#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IntStateMap_Mapping__Array.h>
#include <Modloader/app/structs/Comparison_1_IntStateMap_Mapping_.h>
#include <Modloader/app/structs/IComparer_1_IntStateMap_Mapping_.h>
#include <Modloader/app/structs/IntStateMap_Mapping.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_IntStateMap_Mapping_ {
    IL2CPP_REGISTER_METHOD(0x02F5EA70, void, Sort_1, (app::IntStateMap_Mapping__Array * keys, int32_t index, int32_t length, app::IComparer_1_IntStateMap_Mapping_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F5ED90, int32_t, BinarySearch, (app::IntStateMap_Mapping__Array * array, int32_t index, int32_t length, app::IntStateMap_Mapping value, app::IComparer_1_IntStateMap_Mapping_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F5EF40, void, Sort_2, (app::IntStateMap_Mapping__Array * keys, int32_t index, int32_t length, app::Comparison_1_IntStateMap_Mapping_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C884A0, int32_t, InternalBinarySearch, (app::IntStateMap_Mapping__Array * array, int32_t index, int32_t length, app::IntStateMap_Mapping value, app::IComparer_1_IntStateMap_Mapping_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C88650, void, SwapIfGreater, (app::IntStateMap_Mapping__Array * keys, app::Comparison_1_IntStateMap_Mapping_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02C88810, void, Swap, (app::IntStateMap_Mapping__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::IntStateMap_Mapping__Array * keys, int32_t left, int32_t length, app::Comparison_1_IntStateMap_Mapping_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::IntStateMap_Mapping__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_IntStateMap_Mapping_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C888B0, int32_t, PickPivotAndPartition, (app::IntStateMap_Mapping__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_IntStateMap_Mapping_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::IntStateMap_Mapping__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_IntStateMap_Mapping_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C88CE0, void, DownHeap, (app::IntStateMap_Mapping__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_IntStateMap_Mapping_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C89050, void, InsertionSort, (app::IntStateMap_Mapping__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_IntStateMap_Mapping_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_IntStateMap_Mapping_
