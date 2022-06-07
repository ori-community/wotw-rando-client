#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Collections::Generic::ArraySortHelper_1_System_Int32_ {
    IL2CPP_REGISTER_METHOD(0x03000190, void, Sort_1, (app::Int32__Array * keys, int32_t index, int32_t length, app::IComparer_1_System_Int32_ * comparer))
    IL2CPP_REGISTER_METHODINFO(0x0475DC28, ArraySortHelper_1_System_Int32__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x030004B0, int32_t, BinarySearch, (app::Int32__Array * array, int32_t index, int32_t length, int32_t value, app::IComparer_1_System_Int32_ * comparer))
    IL2CPP_REGISTER_METHODINFO(0x04744FA0, ArraySortHelper_1_System_Int32__BinarySearch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x03000650, void, Sort_2, (app::Int32__Array * keys, int32_t index, int32_t length, app::Comparison_1_Int32_ * comparer))
    IL2CPP_REGISTER_METHODINFO(0x04752810, ArraySortHelper_1_System_Int32__Sort_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F80F40, int32_t, InternalBinarySearch, (app::Int32__Array * array, int32_t index, int32_t length, int32_t value, app::IComparer_1_System_Int32_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02F81060, void, SwapIfGreater, (app::Int32__Array * keys, app::Comparison_1_Int32_ * comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02F811E0, void, Swap, (app::Int32__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::Int32__Array * keys, int32_t left, int32_t length, app::Comparison_1_Int32_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::Int32__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_Int32_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02F81260, int32_t, PickPivotAndPartition, (app::Int32__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Int32_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::Int32__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Int32_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02F81610, void, DownHeap, (app::Int32__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_Int32_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02F818D0, void, InsertionSort, (app::Int32__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Int32_ * comparer))
}
