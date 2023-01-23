#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/LayeredRenderSettings_LayeredRenderSettingsOverride__Array.h>
#include <Modloader/app/structs/IComparer_1_LayeredRenderSettings_LayeredRenderSettingsOverride_.h>
#include <Modloader/app/structs/LayeredRenderSettings_LayeredRenderSettingsOverride.h>
#include <Modloader/app/structs/Comparison_1_LayeredRenderSettings_LayeredRenderSettingsOverride_.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_LayeredRenderSettings_LayeredRenderSettingsOverride_ {
    IL2CPP_REGISTER_METHOD(0x02F5F6B0, void, Sort_1, (app::LayeredRenderSettings_LayeredRenderSettingsOverride__Array * keys, int32_t index, int32_t length, app::IComparer_1_LayeredRenderSettings_LayeredRenderSettingsOverride_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x047013E0, ArraySortHelper_1_LayeredRenderSettings_LayeredRenderSettingsOverride__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F5F9D0, int32_t, BinarySearch, (app::LayeredRenderSettings_LayeredRenderSettingsOverride__Array * array, int32_t index, int32_t length, app::LayeredRenderSettings_LayeredRenderSettingsOverride value, app::IComparer_1_LayeredRenderSettings_LayeredRenderSettingsOverride_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04751DB0, ArraySortHelper_1_LayeredRenderSettings_LayeredRenderSettingsOverride__BinarySearch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F5FB80, void, Sort_2, (app::LayeredRenderSettings_LayeredRenderSettingsOverride__Array * keys, int32_t index, int32_t length, app::Comparison_1_LayeredRenderSettings_LayeredRenderSettingsOverride_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04746BE8, ArraySortHelper_1_LayeredRenderSettings_LayeredRenderSettingsOverride__Sort_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C8BFB0, int32_t, InternalBinarySearch, (app::LayeredRenderSettings_LayeredRenderSettingsOverride__Array * array, int32_t index, int32_t length, app::LayeredRenderSettings_LayeredRenderSettingsOverride value, app::IComparer_1_LayeredRenderSettings_LayeredRenderSettingsOverride_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8C170, void, SwapIfGreater, (app::LayeredRenderSettings_LayeredRenderSettingsOverride__Array * keys, app::Comparison_1_LayeredRenderSettings_LayeredRenderSettingsOverride_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02C8C330, void, Swap, (app::LayeredRenderSettings_LayeredRenderSettingsOverride__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::LayeredRenderSettings_LayeredRenderSettingsOverride__Array * keys, int32_t left, int32_t length, app::Comparison_1_LayeredRenderSettings_LayeredRenderSettingsOverride_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::LayeredRenderSettings_LayeredRenderSettingsOverride__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_LayeredRenderSettings_LayeredRenderSettingsOverride_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8C3D0, int32_t, PickPivotAndPartition, (app::LayeredRenderSettings_LayeredRenderSettingsOverride__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_LayeredRenderSettings_LayeredRenderSettingsOverride_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::LayeredRenderSettings_LayeredRenderSettingsOverride__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_LayeredRenderSettings_LayeredRenderSettingsOverride_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8C820, void, DownHeap, (app::LayeredRenderSettings_LayeredRenderSettingsOverride__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_LayeredRenderSettings_LayeredRenderSettingsOverride_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8CBA0, void, InsertionSort, (app::LayeredRenderSettings_LayeredRenderSettingsOverride__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_LayeredRenderSettings_LayeredRenderSettingsOverride_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_LayeredRenderSettings_LayeredRenderSettingsOverride_
