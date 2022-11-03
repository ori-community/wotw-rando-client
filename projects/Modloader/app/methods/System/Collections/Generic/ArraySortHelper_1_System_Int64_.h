#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_System_Int64_ {
    IL2CPP_REGISTER_METHOD(0x03000DB0, void, Sort_1, (app::Int64__Array * keys, int32_t index, int32_t length, app::IComparer_1_System_Int64_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04794060, ArraySortHelper_1_System_Int64__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x030010D0, int32_t, BinarySearch, (app::Int64__Array * array, int32_t index, int32_t length, int64_t value, app::IComparer_1_System_Int64_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04779990, ArraySortHelper_1_System_Int64__BinarySearch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x03001270, void, Sort_2, (app::Int64__Array * keys, int32_t index, int32_t length, app::Comparison_1_Int64_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0472AD58, ArraySortHelper_1_System_Int64__Sort_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F7C270, int32_t, InternalBinarySearch, (app::Int64__Array * array, int32_t index, int32_t length, int64_t value, app::IComparer_1_System_Int64_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F7C390, void, SwapIfGreater, (app::Int64__Array * keys, app::Comparison_1_Int64_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02F7C510, void, Swap, (app::Int64__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::Int64__Array * keys, int32_t left, int32_t length, app::Comparison_1_Int64_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::Int64__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_Int64_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F7C590, int32_t, PickPivotAndPartition, (app::Int64__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Int64_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::Int64__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Int64_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F7C960, void, DownHeap, (app::Int64__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_Int64_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F7CC20, void, InsertionSort, (app::Int64__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Int64_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_System_Int64_
