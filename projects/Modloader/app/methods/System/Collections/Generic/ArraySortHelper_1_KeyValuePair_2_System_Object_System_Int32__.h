#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/KeyValuePair_2_System_Object_System_Int32___Array.h>
#include <Modloader/app/structs/Comparison_1_System_Collections_Generic_KeyValuePair_2__7.h>
#include <Modloader/app/structs/IComparer_1_KeyValuePair_2_System_Object_System_Int32_.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Object_System_Int32_.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_KeyValuePair_2_System_Object_System_Int32__ {
    IL2CPP_REGISTER_METHOD(0x02FFB2B0, void, Sort_1, (app::KeyValuePair_2_System_Object_System_Int32___Array * keys, int32_t index, int32_t length, app::IComparer_1_KeyValuePair_2_System_Object_System_Int32_* comparer))
    IL2CPP_REGISTER_METHOD(0x02FFB5D0, int32_t, BinarySearch, (app::KeyValuePair_2_System_Object_System_Int32___Array * array, int32_t index, int32_t length, app::KeyValuePair_2_System_Object_System_Int32_ value, app::IComparer_1_KeyValuePair_2_System_Object_System_Int32_* comparer))
    IL2CPP_REGISTER_METHOD(0x02FFB780, void, Sort_2, (app::KeyValuePair_2_System_Object_System_Int32___Array * keys, int32_t index, int32_t length, app::Comparison_1_System_Collections_Generic_KeyValuePair_2__7* comparer))
    IL2CPP_REGISTER_METHOD(0x02C898B0, int32_t, InternalBinarySearch, (app::KeyValuePair_2_System_Object_System_Int32___Array * array, int32_t index, int32_t length, app::KeyValuePair_2_System_Object_System_Int32_ value, app::IComparer_1_KeyValuePair_2_System_Object_System_Int32_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C89A40, void, SwapIfGreater, (app::KeyValuePair_2_System_Object_System_Int32___Array * keys, app::Comparison_1_System_Collections_Generic_KeyValuePair_2__7* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02C89BD0, void, Swap, (app::KeyValuePair_2_System_Object_System_Int32___Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::KeyValuePair_2_System_Object_System_Int32___Array * keys, int32_t left, int32_t length, app::Comparison_1_System_Collections_Generic_KeyValuePair_2__7* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::KeyValuePair_2_System_Object_System_Int32___Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_System_Collections_Generic_KeyValuePair_2__7* comparer))
    IL2CPP_REGISTER_METHOD(0x02C89C60, int32_t, PickPivotAndPartition, (app::KeyValuePair_2_System_Object_System_Int32___Array * keys, int32_t lo, int32_t hi, app::Comparison_1_System_Collections_Generic_KeyValuePair_2__7* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::KeyValuePair_2_System_Object_System_Int32___Array * keys, int32_t lo, int32_t hi, app::Comparison_1_System_Collections_Generic_KeyValuePair_2__7* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8A050, void, DownHeap, (app::KeyValuePair_2_System_Object_System_Int32___Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_System_Collections_Generic_KeyValuePair_2__7* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8A330, void, InsertionSort, (app::KeyValuePair_2_System_Object_System_Int32___Array * keys, int32_t lo, int32_t hi, app::Comparison_1_System_Collections_Generic_KeyValuePair_2__7* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_KeyValuePair_2_System_Object_System_Int32__
