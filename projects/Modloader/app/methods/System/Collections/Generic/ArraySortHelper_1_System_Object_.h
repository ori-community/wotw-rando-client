#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/Comparison_1_Object_.h>
#include <Modloader/app/structs/IComparer_1_System_Object_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x02F7BC60, void, Sort_1, (app::Object__Array * keys, int32_t index, int32_t length, app::IComparer_1_System_Object_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F7BF80, int32_t, BinarySearch, (app::Object__Array * array, int32_t index, int32_t length, app::Object* value, app::IComparer_1_System_Object_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F7C120, void, Sort_2, (app::Object__Array * keys, int32_t index, int32_t length, app::Comparison_1_Object_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F7C270, int32_t, InternalBinarySearch, (app::Object__Array * array, int32_t index, int32_t length, app::Object* value, app::IComparer_1_System_Object_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F7C390, void, SwapIfGreater, (app::Object__Array * keys, app::Comparison_1_Object_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02F7C510, void, Swap, (app::Object__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::Object__Array * keys, int32_t left, int32_t length, app::Comparison_1_Object_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::Object__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_Object_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F7C590, int32_t, PickPivotAndPartition, (app::Object__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Object_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::Object__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Object_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F7C960, void, DownHeap, (app::Object__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_Object_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F7CC20, void, InsertionSort, (app::Object__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Object_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_System_Object_
