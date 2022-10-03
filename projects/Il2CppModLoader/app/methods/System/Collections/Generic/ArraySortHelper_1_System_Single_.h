#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_System_Single_ {
    IL2CPP_REGISTER_METHOD(0x02F7DF90, void, Sort_1, (app::Single__Array * keys, int32_t index, int32_t length, app::IComparer_1_System_Single_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04784180, ArraySortHelper_1_System_Single__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F7E2B0, int32_t, BinarySearch, (app::Single__Array * array, int32_t index, int32_t length, float value, app::IComparer_1_System_Single_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0476DBF8, ArraySortHelper_1_System_Single__BinarySearch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F7E450, void, Sort_2, (app::Single__Array * keys, int32_t index, int32_t length, app::Comparison_1_Single_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04773058, ArraySortHelper_1_System_Single__Sort_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F7E5A0, int32_t, InternalBinarySearch, (app::Single__Array * array, int32_t index, int32_t length, float value, app::IComparer_1_System_Single_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F7E6D0, void, SwapIfGreater, (app::Single__Array * keys, app::Comparison_1_Single_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02F7E860, void, Swap, (app::Single__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::Single__Array * keys, int32_t left, int32_t length, app::Comparison_1_Single_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::Single__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_Single_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F7E8E0, int32_t, PickPivotAndPartition, (app::Single__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Single_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::Single__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Single_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F7ECB0, void, DownHeap, (app::Single__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_Single_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F7EF70, void, InsertionSort, (app::Single__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Single_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_System_Single_
