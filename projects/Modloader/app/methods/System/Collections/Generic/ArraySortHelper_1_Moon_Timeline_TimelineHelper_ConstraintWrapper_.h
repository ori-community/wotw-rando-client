#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/TimelineHelper_ConstraintWrapper__Array.h>
#include <Modloader/app/structs/IComparer_1_Moon_Timeline_TimelineHelper_ConstraintWrapper_.h>
#include <Modloader/app/structs/TimelineHelper_ConstraintWrapper.h>
#include <Modloader/app/structs/Comparison_1_Moon_Timeline_TimelineHelper_ConstraintWrapper_.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_Moon_Timeline_TimelineHelper_ConstraintWrapper_ {
    IL2CPP_REGISTER_METHOD(0x02F3BA40, void, Sort_1, (app::TimelineHelper_ConstraintWrapper__Array * keys, int32_t index, int32_t length, app::IComparer_1_Moon_Timeline_TimelineHelper_ConstraintWrapper_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04709D80, ArraySortHelper_1_Moon_Timeline_TimelineHelper_ConstraintWrapper__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F3BD60, int32_t, BinarySearch, (app::TimelineHelper_ConstraintWrapper__Array * array, int32_t index, int32_t length, app::TimelineHelper_ConstraintWrapper value, app::IComparer_1_Moon_Timeline_TimelineHelper_ConstraintWrapper_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0471B890, ArraySortHelper_1_Moon_Timeline_TimelineHelper_ConstraintWrapper__BinarySearch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F3BF10, void, Sort_2, (app::TimelineHelper_ConstraintWrapper__Array * keys, int32_t index, int32_t length, app::Comparison_1_Moon_Timeline_TimelineHelper_ConstraintWrapper_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04769988, ArraySortHelper_1_Moon_Timeline_TimelineHelper_ConstraintWrapper__Sort_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C8BFB0, int32_t, InternalBinarySearch, (app::TimelineHelper_ConstraintWrapper__Array * array, int32_t index, int32_t length, app::TimelineHelper_ConstraintWrapper value, app::IComparer_1_Moon_Timeline_TimelineHelper_ConstraintWrapper_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8C170, void, SwapIfGreater, (app::TimelineHelper_ConstraintWrapper__Array * keys, app::Comparison_1_Moon_Timeline_TimelineHelper_ConstraintWrapper_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02C8C330, void, Swap, (app::TimelineHelper_ConstraintWrapper__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::TimelineHelper_ConstraintWrapper__Array * keys, int32_t left, int32_t length, app::Comparison_1_Moon_Timeline_TimelineHelper_ConstraintWrapper_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::TimelineHelper_ConstraintWrapper__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_Moon_Timeline_TimelineHelper_ConstraintWrapper_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8C3D0, int32_t, PickPivotAndPartition, (app::TimelineHelper_ConstraintWrapper__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Moon_Timeline_TimelineHelper_ConstraintWrapper_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::TimelineHelper_ConstraintWrapper__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Moon_Timeline_TimelineHelper_ConstraintWrapper_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8C820, void, DownHeap, (app::TimelineHelper_ConstraintWrapper__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_Moon_Timeline_TimelineHelper_ConstraintWrapper_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8CBA0, void, InsertionSort, (app::TimelineHelper_ConstraintWrapper__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Moon_Timeline_TimelineHelper_ConstraintWrapper_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_Moon_Timeline_TimelineHelper_ConstraintWrapper_
