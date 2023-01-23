#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ByteStateMap_Mapping__Array.h>
#include <Modloader/app/structs/IComparer_1_ByteStateMap_Mapping_.h>
#include <Modloader/app/structs/ByteStateMap_Mapping.h>
#include <Modloader/app/structs/Comparison_1_ByteStateMap_Mapping_.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_ByteStateMap_Mapping_ {
    IL2CPP_REGISTER_METHOD(0x02F2BED0, void, Sort_1, (app::ByteStateMap_Mapping__Array * keys, int32_t index, int32_t length, app::IComparer_1_ByteStateMap_Mapping_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0477DF10, ArraySortHelper_1_ByteStateMap_Mapping__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F2C1F0, int32_t, BinarySearch, (app::ByteStateMap_Mapping__Array * array, int32_t index, int32_t length, app::ByteStateMap_Mapping value, app::IComparer_1_ByteStateMap_Mapping_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04726D20, ArraySortHelper_1_ByteStateMap_Mapping__BinarySearch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F2C390, void, Sort_2, (app::ByteStateMap_Mapping__Array * keys, int32_t index, int32_t length, app::Comparison_1_ByteStateMap_Mapping_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0472D908, ArraySortHelper_1_ByteStateMap_Mapping__Sort_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F2B330, int32_t, InternalBinarySearch, (app::ByteStateMap_Mapping__Array * array, int32_t index, int32_t length, app::ByteStateMap_Mapping value, app::IComparer_1_ByteStateMap_Mapping_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F2B450, void, SwapIfGreater, (app::ByteStateMap_Mapping__Array * keys, app::Comparison_1_ByteStateMap_Mapping_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02F2B5E0, void, Swap, (app::ByteStateMap_Mapping__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::ByteStateMap_Mapping__Array * keys, int32_t left, int32_t length, app::Comparison_1_ByteStateMap_Mapping_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::ByteStateMap_Mapping__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_ByteStateMap_Mapping_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F2B660, int32_t, PickPivotAndPartition, (app::ByteStateMap_Mapping__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_ByteStateMap_Mapping_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::ByteStateMap_Mapping__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_ByteStateMap_Mapping_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F2BA30, void, DownHeap, (app::ByteStateMap_Mapping__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_ByteStateMap_Mapping_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F2BCF0, void, InsertionSort, (app::ByteStateMap_Mapping__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_ByteStateMap_Mapping_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_ByteStateMap_Mapping_
