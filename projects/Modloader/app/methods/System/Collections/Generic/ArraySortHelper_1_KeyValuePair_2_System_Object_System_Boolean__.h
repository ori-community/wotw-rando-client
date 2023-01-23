#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Object_System_Boolean___Array.h>
#include <Modloader/app/structs/IComparer_1_KeyValuePair_2_System_Object_System_Boolean_.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Object_System_Boolean_.h>
#include <Modloader/app/structs/Comparison_1_System_Collections_Generic_KeyValuePair_2__10.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_KeyValuePair_2_System_Object_System_Boolean__ {
    IL2CPP_REGISTER_METHOD(0x02FFA670, void, Sort_1, (app::KeyValuePair_2_System_Object_System_Boolean___Array * keys, int32_t index, int32_t length, app::IComparer_1_KeyValuePair_2_System_Object_System_Boolean_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04708838, ArraySortHelper_1_KeyValuePair_2_System_Object_System_Boolean__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FFA990, int32_t, BinarySearch, (app::KeyValuePair_2_System_Object_System_Boolean___Array * array, int32_t index, int32_t length, app::KeyValuePair_2_System_Object_System_Boolean_ value, app::IComparer_1_KeyValuePair_2_System_Object_System_Boolean_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0477CD70, ArraySortHelper_1_KeyValuePair_2_System_Object_System_Boolean__BinarySearch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FFAB40, void, Sort_2, (app::KeyValuePair_2_System_Object_System_Boolean___Array * keys, int32_t index, int32_t length, app::Comparison_1_System_Collections_Generic_KeyValuePair_2__10* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0475E2F0, ArraySortHelper_1_KeyValuePair_2_System_Object_System_Boolean__Sort_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C898B0, int32_t, InternalBinarySearch, (app::KeyValuePair_2_System_Object_System_Boolean___Array * array, int32_t index, int32_t length, app::KeyValuePair_2_System_Object_System_Boolean_ value, app::IComparer_1_KeyValuePair_2_System_Object_System_Boolean_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C89A40, void, SwapIfGreater, (app::KeyValuePair_2_System_Object_System_Boolean___Array * keys, app::Comparison_1_System_Collections_Generic_KeyValuePair_2__10* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02C89BD0, void, Swap, (app::KeyValuePair_2_System_Object_System_Boolean___Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::KeyValuePair_2_System_Object_System_Boolean___Array * keys, int32_t left, int32_t length, app::Comparison_1_System_Collections_Generic_KeyValuePair_2__10* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::KeyValuePair_2_System_Object_System_Boolean___Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_System_Collections_Generic_KeyValuePair_2__10* comparer))
    IL2CPP_REGISTER_METHOD(0x02C89C60, int32_t, PickPivotAndPartition, (app::KeyValuePair_2_System_Object_System_Boolean___Array * keys, int32_t lo, int32_t hi, app::Comparison_1_System_Collections_Generic_KeyValuePair_2__10* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::KeyValuePair_2_System_Object_System_Boolean___Array * keys, int32_t lo, int32_t hi, app::Comparison_1_System_Collections_Generic_KeyValuePair_2__10* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8A050, void, DownHeap, (app::KeyValuePair_2_System_Object_System_Boolean___Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_System_Collections_Generic_KeyValuePair_2__10* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8A330, void, InsertionSort, (app::KeyValuePair_2_System_Object_System_Boolean___Array * keys, int32_t lo, int32_t hi, app::Comparison_1_System_Collections_Generic_KeyValuePair_2__10* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_KeyValuePair_2_System_Object_System_Boolean__
