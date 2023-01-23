#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ArraySortHelper_2_System_UInt64_System_Object_.h>
#include <Modloader/app/structs/UInt64__Array.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/IComparer_1_System_UInt64_.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_2_System_UInt64_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x02C90A60, app::ArraySortHelper_2_System_UInt64_System_Object_*, get_Default, ())
    IL2CPP_REGISTER_METHOD(0x02C90B10, app::ArraySortHelper_2_System_UInt64_System_Object_*, CreateArraySortHelper, ())
    IL2CPP_REGISTER_METHOD(0x02C92170, void, Sort, (app::ArraySortHelper_2_System_UInt64_System_Object_ * this_ptr, app::UInt64__Array* keys, app::Object__Array* values, int32_t index, int32_t length, app::IComparer_1_System_UInt64_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04768348, ArraySortHelper_2_System_UInt64_System_Object__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C90E40, void, SwapIfGreaterWithItems, (app::UInt64__Array * keys, app::Object__Array* values, app::IComparer_1_System_UInt64_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02C91030, void, Swap, (app::UInt64__Array * keys, app::Object__Array* values, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C91130, void, IntrospectiveSort, (app::UInt64__Array * keys, app::Object__Array* values, int32_t left, int32_t length, app::IComparer_1_System_UInt64_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C91230, void, IntroSort, (app::UInt64__Array * keys, app::Object__Array* values, int32_t lo, int32_t hi, int32_t depth_limit, app::IComparer_1_System_UInt64_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C915E0, int32_t, PickPivotAndPartition, (app::UInt64__Array * keys, app::Object__Array* values, int32_t lo, int32_t hi, app::IComparer_1_System_UInt64_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C919D0, void, Heapsort, (app::UInt64__Array * keys, app::Object__Array* values, int32_t lo, int32_t hi, app::IComparer_1_System_UInt64_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C91BA0, void, DownHeap, (app::UInt64__Array * keys, app::Object__Array* values, int32_t i, int32_t n, int32_t lo, app::IComparer_1_System_UInt64_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C91F00, void, InsertionSort, (app::UInt64__Array * keys, app::Object__Array* values, int32_t lo, int32_t hi, app::IComparer_1_System_UInt64_* comparer))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::ArraySortHelper_2_System_UInt64_System_Object_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_2_System_UInt64_System_Object_
