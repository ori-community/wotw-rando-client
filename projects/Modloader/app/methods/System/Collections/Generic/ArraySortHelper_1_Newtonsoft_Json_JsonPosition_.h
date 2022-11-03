#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_Newtonsoft_Json_JsonPosition_ {
    IL2CPP_REGISTER_METHOD(0x02F7A3F0, void, Sort_1, (app::JsonPosition__Array * keys, int32_t index, int32_t length, app::IComparer_1_Newtonsoft_Json_JsonPosition_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0477C738, ArraySortHelper_1_Newtonsoft_Json_JsonPosition__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F7A710, int32_t, BinarySearch, (app::JsonPosition__Array * array, int32_t index, int32_t length, app::JsonPosition value, app::IComparer_1_Newtonsoft_Json_JsonPosition_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0473CE20, ArraySortHelper_1_Newtonsoft_Json_JsonPosition__BinarySearch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F7A8C0, void, Sort_2, (app::JsonPosition__Array * keys, int32_t index, int32_t length, app::Comparison_1_Newtonsoft_Json_JsonPosition_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04709770, ArraySortHelper_1_Newtonsoft_Json_JsonPosition__Sort_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C8BFB0, int32_t, InternalBinarySearch, (app::JsonPosition__Array * array, int32_t index, int32_t length, app::JsonPosition value, app::IComparer_1_Newtonsoft_Json_JsonPosition_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8C170, void, SwapIfGreater, (app::JsonPosition__Array * keys, app::Comparison_1_Newtonsoft_Json_JsonPosition_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02C8C330, void, Swap, (app::JsonPosition__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::JsonPosition__Array * keys, int32_t left, int32_t length, app::Comparison_1_Newtonsoft_Json_JsonPosition_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::JsonPosition__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_Newtonsoft_Json_JsonPosition_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8C3D0, int32_t, PickPivotAndPartition, (app::JsonPosition__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Newtonsoft_Json_JsonPosition_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::JsonPosition__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Newtonsoft_Json_JsonPosition_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8C820, void, DownHeap, (app::JsonPosition__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_Newtonsoft_Json_JsonPosition_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8CBA0, void, InsertionSort, (app::JsonPosition__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Newtonsoft_Json_JsonPosition_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_Newtonsoft_Json_JsonPosition_
