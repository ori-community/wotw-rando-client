#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Reaction__Array.h>
#include <Modloader/app/structs/IComparer_1_Moon_Timeline_Reaction_.h>
#include <Modloader/app/structs/Reaction.h>
#include <Modloader/app/structs/Comparison_1_Moon_Timeline_Reaction_.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_Moon_Timeline_Reaction_ {
    IL2CPP_REGISTER_METHOD(0x02F3B420, void, Sort_1, (app::Reaction__Array * keys, int32_t index, int32_t length, app::IComparer_1_Moon_Timeline_Reaction_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04725210, ArraySortHelper_1_Moon_Timeline_Reaction__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F3B740, int32_t, BinarySearch, (app::Reaction__Array * array, int32_t index, int32_t length, app::Reaction value, app::IComparer_1_Moon_Timeline_Reaction_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04767340, ArraySortHelper_1_Moon_Timeline_Reaction__BinarySearch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F3B8F0, void, Sort_2, (app::Reaction__Array * keys, int32_t index, int32_t length, app::Comparison_1_Moon_Timeline_Reaction_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0470A1B0, ArraySortHelper_1_Moon_Timeline_Reaction__Sort_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C8AB70, int32_t, InternalBinarySearch, (app::Reaction__Array * array, int32_t index, int32_t length, app::Reaction value, app::IComparer_1_Moon_Timeline_Reaction_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8AD30, void, SwapIfGreater, (app::Reaction__Array * keys, app::Comparison_1_Moon_Timeline_Reaction_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02C8AEE0, void, Swap, (app::Reaction__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::Reaction__Array * keys, int32_t left, int32_t length, app::Comparison_1_Moon_Timeline_Reaction_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::Reaction__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_Moon_Timeline_Reaction_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8AF80, int32_t, PickPivotAndPartition, (app::Reaction__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Moon_Timeline_Reaction_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::Reaction__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Moon_Timeline_Reaction_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8B3D0, void, DownHeap, (app::Reaction__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_Moon_Timeline_Reaction_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8B740, void, InsertionSort, (app::Reaction__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Moon_Timeline_Reaction_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_Moon_Timeline_Reaction_
