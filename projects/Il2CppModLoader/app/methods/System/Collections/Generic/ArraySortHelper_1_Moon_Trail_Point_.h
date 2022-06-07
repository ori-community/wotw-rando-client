#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Collections::Generic::ArraySortHelper_1_Moon_Trail_Point_ {
    IL2CPP_REGISTER_METHOD(0x02F73830, void, Sort_1, (app::Trail_Point__Array * keys, int32_t index, int32_t length, app::IComparer_1_Moon_Trail_Point_ * comparer))
    IL2CPP_REGISTER_METHODINFO(0x04774B38, ArraySortHelper_1_Moon_Trail_Point__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F73B50, int32_t, BinarySearch, (app::Trail_Point__Array * array, int32_t index, int32_t length, app::Trail_Point value, app::IComparer_1_Moon_Trail_Point_ * comparer))
    IL2CPP_REGISTER_METHODINFO(0x0471E808, ArraySortHelper_1_Moon_Trail_Point__BinarySearch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F73D30, void, Sort_2, (app::Trail_Point__Array * keys, int32_t index, int32_t length, app::Comparison_1_Moon_Trail_Point_ * comparer))
    IL2CPP_REGISTER_METHODINFO(0x0473F760, ArraySortHelper_1_Moon_Trail_Point__Sort_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F73E80, int32_t, InternalBinarySearch, (app::Trail_Point__Array * array, int32_t index, int32_t length, app::Trail_Point value, app::IComparer_1_Moon_Trail_Point_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02F74020, void, SwapIfGreater, (app::Trail_Point__Array * keys, app::Comparison_1_Moon_Trail_Point_ * comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02F74240, void, Swap, (app::Trail_Point__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::Trail_Point__Array * keys, int32_t left, int32_t length, app::Comparison_1_Moon_Trail_Point_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::Trail_Point__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_Moon_Trail_Point_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02F74310, int32_t, PickPivotAndPartition, (app::Trail_Point__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Moon_Trail_Point_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::Trail_Point__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Moon_Trail_Point_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02F747E0, void, DownHeap, (app::Trail_Point__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_Moon_Trail_Point_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02F74C10, void, InsertionSort, (app::Trail_Point__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Moon_Trail_Point_ * comparer))
}
