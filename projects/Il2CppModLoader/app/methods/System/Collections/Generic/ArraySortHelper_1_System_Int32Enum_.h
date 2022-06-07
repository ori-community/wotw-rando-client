#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Collections::Generic::ArraySortHelper_1_System_Int32Enum_ {
    IL2CPP_REGISTER_METHOD(0x030007A0, void, Sort_1, (app::Int32Enum__Enum__Array * keys, int32_t index, int32_t length, app::IComparer_1_System_Int32Enum_ * comparer))
    IL2CPP_REGISTER_METHODINFO(0x04732BA0, ArraySortHelper_1_System_Int32Enum__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x03000AC0, int32_t, BinarySearch, (app::Int32Enum__Enum__Array * array, int32_t index, int32_t length, app::Int32Enum__Enum value, app::IComparer_1_System_Int32Enum_ * comparer))
    IL2CPP_REGISTER_METHODINFO(0x0477D838, ArraySortHelper_1_System_Int32Enum__BinarySearch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x03000C60, void, Sort_2, (app::Int32Enum__Enum__Array * keys, int32_t index, int32_t length, app::Comparison_1_Int32Enum_ * comparer))
    IL2CPP_REGISTER_METHODINFO(0x04769238, ArraySortHelper_1_System_Int32Enum__Sort_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F80F40, int32_t, InternalBinarySearch, (app::Int32Enum__Enum__Array * array, int32_t index, int32_t length, app::Int32Enum__Enum value, app::IComparer_1_System_Int32Enum_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02F81060, void, SwapIfGreater, (app::Int32Enum__Enum__Array * keys, app::Comparison_1_Int32Enum_ * comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02F811E0, void, Swap, (app::Int32Enum__Enum__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::Int32Enum__Enum__Array * keys, int32_t left, int32_t length, app::Comparison_1_Int32Enum_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::Int32Enum__Enum__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_Int32Enum_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02F81260, int32_t, PickPivotAndPartition, (app::Int32Enum__Enum__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Int32Enum_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::Int32Enum__Enum__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Int32Enum_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02F81610, void, DownHeap, (app::Int32Enum__Enum__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_Int32Enum_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02F818D0, void, InsertionSort, (app::Int32Enum__Enum__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Int32Enum_ * comparer))
}
