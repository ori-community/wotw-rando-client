#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_TriangleNet_Topology_Otri_ {
    IL2CPP_REGISTER_METHOD(0x02F851C0, void, Sort_1, (app::Otri__Array * keys, int32_t index, int32_t length, app::IComparer_1_TriangleNet_Topology_Otri_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0470BBB0, ArraySortHelper_1_TriangleNet_Topology_Otri__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F854E0, int32_t, BinarySearch, (app::Otri__Array * array, int32_t index, int32_t length, app::Otri value, app::IComparer_1_TriangleNet_Topology_Otri_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04771358, ArraySortHelper_1_TriangleNet_Topology_Otri__BinarySearch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F85690, void, Sort_2, (app::Otri__Array * keys, int32_t index, int32_t length, app::Comparison_1_TriangleNet_Topology_Otri_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04725230, ArraySortHelper_1_TriangleNet_Topology_Otri__Sort_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C898B0, int32_t, InternalBinarySearch, (app::Otri__Array * array, int32_t index, int32_t length, app::Otri value, app::IComparer_1_TriangleNet_Topology_Otri_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C89A40, void, SwapIfGreater, (app::Otri__Array * keys, app::Comparison_1_TriangleNet_Topology_Otri_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02C89BD0, void, Swap, (app::Otri__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::Otri__Array * keys, int32_t left, int32_t length, app::Comparison_1_TriangleNet_Topology_Otri_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::Otri__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_TriangleNet_Topology_Otri_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C89C60, int32_t, PickPivotAndPartition, (app::Otri__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_TriangleNet_Topology_Otri_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::Otri__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_TriangleNet_Topology_Otri_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8A050, void, DownHeap, (app::Otri__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_TriangleNet_Topology_Otri_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8A330, void, InsertionSort, (app::Otri__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_TriangleNet_Topology_Otri_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_TriangleNet_Topology_Otri_
