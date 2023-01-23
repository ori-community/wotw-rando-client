#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ScalableAnimationPlayer_ScenarioPlaybackData__Array.h>
#include <Modloader/app/structs/IComparer_1_Moon_ScalableAnimationPlayer_ScenarioPlaybackData_.h>
#include <Modloader/app/structs/ScalableAnimationPlayer_ScenarioPlaybackData.h>
#include <Modloader/app/structs/Comparison_1_Moon_ScalableAnimationPlayer_ScenarioPlaybackData_.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_Moon_ScalableAnimationPlayer_ScenarioPlaybackData_ {
    IL2CPP_REGISTER_METHOD(0x02F39590, void, Sort_1, (app::ScalableAnimationPlayer_ScenarioPlaybackData__Array * keys, int32_t index, int32_t length, app::IComparer_1_Moon_ScalableAnimationPlayer_ScenarioPlaybackData_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04753D10, ArraySortHelper_1_Moon_ScalableAnimationPlayer_ScenarioPlaybackData__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F398B0, int32_t, BinarySearch, (app::ScalableAnimationPlayer_ScenarioPlaybackData__Array * array, int32_t index, int32_t length, app::ScalableAnimationPlayer_ScenarioPlaybackData value, app::IComparer_1_Moon_ScalableAnimationPlayer_ScenarioPlaybackData_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04710C58, ArraySortHelper_1_Moon_ScalableAnimationPlayer_ScenarioPlaybackData__BinarySearch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F39A60, void, Sort_2, (app::ScalableAnimationPlayer_ScenarioPlaybackData__Array * keys, int32_t index, int32_t length, app::Comparison_1_Moon_ScalableAnimationPlayer_ScenarioPlaybackData_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0477AC38, ArraySortHelper_1_Moon_ScalableAnimationPlayer_ScenarioPlaybackData__Sort_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C86B20, int32_t, InternalBinarySearch, (app::ScalableAnimationPlayer_ScenarioPlaybackData__Array * array, int32_t index, int32_t length, app::ScalableAnimationPlayer_ScenarioPlaybackData value, app::IComparer_1_Moon_ScalableAnimationPlayer_ScenarioPlaybackData_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86C60, void, SwapIfGreater, (app::ScalableAnimationPlayer_ScenarioPlaybackData__Array * keys, app::Comparison_1_Moon_ScalableAnimationPlayer_ScenarioPlaybackData_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02C86E20, void, Swap, (app::ScalableAnimationPlayer_ScenarioPlaybackData__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::ScalableAnimationPlayer_ScenarioPlaybackData__Array * keys, int32_t left, int32_t length, app::Comparison_1_Moon_ScalableAnimationPlayer_ScenarioPlaybackData_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::ScalableAnimationPlayer_ScenarioPlaybackData__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_Moon_ScalableAnimationPlayer_ScenarioPlaybackData_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87320, int32_t, PickPivotAndPartition, (app::ScalableAnimationPlayer_ScenarioPlaybackData__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Moon_ScalableAnimationPlayer_ScenarioPlaybackData_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::ScalableAnimationPlayer_ScenarioPlaybackData__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Moon_ScalableAnimationPlayer_ScenarioPlaybackData_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87900, void, DownHeap, (app::ScalableAnimationPlayer_ScenarioPlaybackData__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_Moon_ScalableAnimationPlayer_ScenarioPlaybackData_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87C30, void, InsertionSort, (app::ScalableAnimationPlayer_ScenarioPlaybackData__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Moon_ScalableAnimationPlayer_ScenarioPlaybackData_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_Moon_ScalableAnimationPlayer_ScenarioPlaybackData_
