#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_System_Xml_Schema_RangePositionInfo_ {
    IL2CPP_REGISTER_METHOD(0x02F83940, void, Sort_1, (app::RangePositionInfo__Array * keys, int32_t index, int32_t length, app::IComparer_1_System_Xml_Schema_RangePositionInfo_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0476AD90, ArraySortHelper_1_System_Xml_Schema_RangePositionInfo__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F83C60, int32_t, BinarySearch, (app::RangePositionInfo__Array * array, int32_t index, int32_t length, app::RangePositionInfo value, app::IComparer_1_System_Xml_Schema_RangePositionInfo_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04776430, ArraySortHelper_1_System_Xml_Schema_RangePositionInfo__BinarySearch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F83E10, void, Sort_2, (app::RangePositionInfo__Array * keys, int32_t index, int32_t length, app::Comparison_1_System_Xml_Schema_RangePositionInfo_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0476F6A8, ArraySortHelper_1_System_Xml_Schema_RangePositionInfo__Sort_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C898B0, int32_t, InternalBinarySearch, (app::RangePositionInfo__Array * array, int32_t index, int32_t length, app::RangePositionInfo value, app::IComparer_1_System_Xml_Schema_RangePositionInfo_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C89A40, void, SwapIfGreater, (app::RangePositionInfo__Array * keys, app::Comparison_1_System_Xml_Schema_RangePositionInfo_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02C89BD0, void, Swap, (app::RangePositionInfo__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::RangePositionInfo__Array * keys, int32_t left, int32_t length, app::Comparison_1_System_Xml_Schema_RangePositionInfo_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::RangePositionInfo__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_System_Xml_Schema_RangePositionInfo_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C89C60, int32_t, PickPivotAndPartition, (app::RangePositionInfo__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_System_Xml_Schema_RangePositionInfo_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::RangePositionInfo__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_System_Xml_Schema_RangePositionInfo_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8A050, void, DownHeap, (app::RangePositionInfo__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_System_Xml_Schema_RangePositionInfo_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8A330, void, InsertionSort, (app::RangePositionInfo__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_System_Xml_Schema_RangePositionInfo_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_System_Xml_Schema_RangePositionInfo_
