#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Collections::Generic::ArraySortHelper_1_System_UInt16_ {
    IL2CPP_REGISTER_METHOD(0x02F7F770, void, Sort_1, (app::UInt16__Array * keys, int32_t index, int32_t length, app::IComparer_1_System_UInt16_ * comparer))
    IL2CPP_REGISTER_METHODINFO(0x0471B8B0, ArraySortHelper_1_System_UInt16__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F7FA90, int32_t, BinarySearch, (app::UInt16__Array * array, int32_t index, int32_t length, uint16_t value, app::IComparer_1_System_UInt16_ * comparer))
    IL2CPP_REGISTER_METHODINFO(0x04795CB8, ArraySortHelper_1_System_UInt16__BinarySearch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F7FC30, void, Sort_2, (app::UInt16__Array * keys, int32_t index, int32_t length, app::Comparison_1_UInt16_ * comparer))
    IL2CPP_REGISTER_METHODINFO(0x047641F0, ArraySortHelper_1_System_UInt16__Sort_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F7FD80, int32_t, InternalBinarySearch, (app::UInt16__Array * array, int32_t index, int32_t length, uint16_t value, app::IComparer_1_System_UInt16_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02F7FEA0, void, SwapIfGreater, (app::UInt16__Array * keys, app::Comparison_1_UInt16_ * comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02F80030, void, Swap, (app::UInt16__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::UInt16__Array * keys, int32_t left, int32_t length, app::Comparison_1_UInt16_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::UInt16__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_UInt16_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02F800B0, int32_t, PickPivotAndPartition, (app::UInt16__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UInt16_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::UInt16__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UInt16_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02F80480, void, DownHeap, (app::UInt16__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_UInt16_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02F80750, void, InsertionSort, (app::UInt16__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UInt16_ * comparer))
}
