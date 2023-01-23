#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GameplayCameraTargetEntry__Array.h>
#include <Modloader/app/structs/IComparer_1_GameplayCameraTargetEntry_.h>
#include <Modloader/app/structs/GameplayCameraTargetEntry.h>
#include <Modloader/app/structs/Comparison_1_GameplayCameraTargetEntry_.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_GameplayCameraTargetEntry_ {
    IL2CPP_REGISTER_METHOD(0x02F5BF30, void, Sort_1, (app::GameplayCameraTargetEntry__Array * keys, int32_t index, int32_t length, app::IComparer_1_GameplayCameraTargetEntry_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0478AB80, ArraySortHelper_1_GameplayCameraTargetEntry__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F5C250, int32_t, BinarySearch, (app::GameplayCameraTargetEntry__Array * array, int32_t index, int32_t length, app::GameplayCameraTargetEntry value, app::IComparer_1_GameplayCameraTargetEntry_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04760D08, ArraySortHelper_1_GameplayCameraTargetEntry__BinarySearch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F5C400, void, Sort_2, (app::GameplayCameraTargetEntry__Array * keys, int32_t index, int32_t length, app::Comparison_1_GameplayCameraTargetEntry_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0474A9B0, ArraySortHelper_1_GameplayCameraTargetEntry__Sort_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C8BFB0, int32_t, InternalBinarySearch, (app::GameplayCameraTargetEntry__Array * array, int32_t index, int32_t length, app::GameplayCameraTargetEntry value, app::IComparer_1_GameplayCameraTargetEntry_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8C170, void, SwapIfGreater, (app::GameplayCameraTargetEntry__Array * keys, app::Comparison_1_GameplayCameraTargetEntry_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02C8C330, void, Swap, (app::GameplayCameraTargetEntry__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::GameplayCameraTargetEntry__Array * keys, int32_t left, int32_t length, app::Comparison_1_GameplayCameraTargetEntry_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::GameplayCameraTargetEntry__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_GameplayCameraTargetEntry_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8C3D0, int32_t, PickPivotAndPartition, (app::GameplayCameraTargetEntry__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_GameplayCameraTargetEntry_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::GameplayCameraTargetEntry__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_GameplayCameraTargetEntry_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8C820, void, DownHeap, (app::GameplayCameraTargetEntry__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_GameplayCameraTargetEntry_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8CBA0, void, InsertionSort, (app::GameplayCameraTargetEntry__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_GameplayCameraTargetEntry_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_GameplayCameraTargetEntry_
