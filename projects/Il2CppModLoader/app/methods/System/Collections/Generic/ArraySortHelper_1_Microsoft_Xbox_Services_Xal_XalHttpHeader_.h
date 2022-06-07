#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Collections::Generic::ArraySortHelper_1_Microsoft_Xbox_Services_Xal_XalHttpHeader_ {
    IL2CPP_REGISTER_METHOD(0x02F33280, void, Sort_1, (app::XalHttpHeader__Array * keys, int32_t index, int32_t length, app::IComparer_1_Microsoft_Xbox_Services_Xal_XalHttpHeader_ * comparer))
    IL2CPP_REGISTER_METHODINFO(0x0473DFB0, ArraySortHelper_1_Microsoft_Xbox_Services_Xal_XalHttpHeader__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F335A0, int32_t, BinarySearch, (app::XalHttpHeader__Array * array, int32_t index, int32_t length, app::XalHttpHeader value, app::IComparer_1_Microsoft_Xbox_Services_Xal_XalHttpHeader_ * comparer))
    IL2CPP_REGISTER_METHODINFO(0x04744800, ArraySortHelper_1_Microsoft_Xbox_Services_Xal_XalHttpHeader__BinarySearch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F33750, void, Sort_2, (app::XalHttpHeader__Array * keys, int32_t index, int32_t length, app::Comparison_1_Microsoft_Xbox_Services_Xal_XalHttpHeader_ * comparer))
    IL2CPP_REGISTER_METHODINFO(0x0472A260, ArraySortHelper_1_Microsoft_Xbox_Services_Xal_XalHttpHeader__Sort_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C898B0, int32_t, InternalBinarySearch, (app::XalHttpHeader__Array * array, int32_t index, int32_t length, app::XalHttpHeader value, app::IComparer_1_Microsoft_Xbox_Services_Xal_XalHttpHeader_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02C89A40, void, SwapIfGreater, (app::XalHttpHeader__Array * keys, app::Comparison_1_Microsoft_Xbox_Services_Xal_XalHttpHeader_ * comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02C89BD0, void, Swap, (app::XalHttpHeader__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::XalHttpHeader__Array * keys, int32_t left, int32_t length, app::Comparison_1_Microsoft_Xbox_Services_Xal_XalHttpHeader_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::XalHttpHeader__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_Microsoft_Xbox_Services_Xal_XalHttpHeader_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02C89C60, int32_t, PickPivotAndPartition, (app::XalHttpHeader__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Microsoft_Xbox_Services_Xal_XalHttpHeader_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::XalHttpHeader__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Microsoft_Xbox_Services_Xal_XalHttpHeader_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02C8A050, void, DownHeap, (app::XalHttpHeader__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_Microsoft_Xbox_Services_Xal_XalHttpHeader_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02C8A330, void, InsertionSort, (app::XalHttpHeader__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Microsoft_Xbox_Services_Xal_XalHttpHeader_ * comparer))
}
