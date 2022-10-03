#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_System_Byte_ {
    IL2CPP_REGISTER_METHOD(0x02FF4020, void, Sort_1, (app::Byte__Array * keys, int32_t index, int32_t length, app::IComparer_1_System_Byte_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x047337D8, ArraySortHelper_1_System_Byte__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FF4340, int32_t, BinarySearch, (app::Byte__Array * array, int32_t index, int32_t length, uint8_t value, app::IComparer_1_System_Byte_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0477AD20, ArraySortHelper_1_System_Byte__BinarySearch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FF44E0, void, Sort_2, (app::Byte__Array * keys, int32_t index, int32_t length, app::Comparison_1_Byte_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04716F58, ArraySortHelper_1_System_Byte__Sort_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F7D410, int32_t, InternalBinarySearch, (app::Byte__Array * array, int32_t index, int32_t length, uint8_t value, app::IComparer_1_System_Byte_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F7D530, void, SwapIfGreater, (app::Byte__Array * keys, app::Comparison_1_Byte_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02F7D6B0, void, Swap, (app::Byte__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::Byte__Array * keys, int32_t left, int32_t length, app::Comparison_1_Byte_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::Byte__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_Byte_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F7D730, int32_t, PickPivotAndPartition, (app::Byte__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Byte_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::Byte__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Byte_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F7DAF0, void, DownHeap, (app::Byte__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_Byte_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F7DDB0, void, InsertionSort, (app::Byte__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Byte_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_System_Byte_
