#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UInt64__Array.h>
#include <Modloader/app/structs/IComparer_1_System_UInt64_.h>
#include <Modloader/app/structs/Comparison_1_UInt64_.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_System_UInt64_ {
    IL2CPP_REGISTER_METHOD(0x02F81AB0, void, Sort_1, (app::UInt64__Array * keys, int32_t index, int32_t length, app::IComparer_1_System_UInt64_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04712D40, ArraySortHelper_1_System_UInt64__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F81DD0, int32_t, BinarySearch, (app::UInt64__Array * array, int32_t index, int32_t length, uint64_t value, app::IComparer_1_System_UInt64_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0473BC30, ArraySortHelper_1_System_UInt64__BinarySearch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F81F70, void, Sort_2, (app::UInt64__Array * keys, int32_t index, int32_t length, app::Comparison_1_UInt64_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x047882D0, ArraySortHelper_1_System_UInt64__Sort_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F7C270, int32_t, InternalBinarySearch, (app::UInt64__Array * array, int32_t index, int32_t length, uint64_t value, app::IComparer_1_System_UInt64_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F7C390, void, SwapIfGreater, (app::UInt64__Array * keys, app::Comparison_1_UInt64_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02F7C510, void, Swap, (app::UInt64__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::UInt64__Array * keys, int32_t left, int32_t length, app::Comparison_1_UInt64_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::UInt64__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_UInt64_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F7C590, int32_t, PickPivotAndPartition, (app::UInt64__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UInt64_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::UInt64__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UInt64_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F7C960, void, DownHeap, (app::UInt64__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_UInt64_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F7CC20, void, InsertionSort, (app::UInt64__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UInt64_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_System_UInt64_
