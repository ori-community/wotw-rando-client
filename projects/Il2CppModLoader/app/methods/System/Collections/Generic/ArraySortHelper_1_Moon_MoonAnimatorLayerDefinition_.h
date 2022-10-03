#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_Moon_MoonAnimatorLayerDefinition_ {
    IL2CPP_REGISTER_METHOD(0x02F38320, void, Sort_1, (app::MoonAnimatorLayerDefinition__Array * keys, int32_t index, int32_t length, app::IComparer_1_Moon_MoonAnimatorLayerDefinition_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04765008, ArraySortHelper_1_Moon_MoonAnimatorLayerDefinition__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F38640, int32_t, BinarySearch, (app::MoonAnimatorLayerDefinition__Array * array, int32_t index, int32_t length, app::MoonAnimatorLayerDefinition value, app::IComparer_1_Moon_MoonAnimatorLayerDefinition_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04737128, ArraySortHelper_1_Moon_MoonAnimatorLayerDefinition__BinarySearch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F387F0, void, Sort_2, (app::MoonAnimatorLayerDefinition__Array * keys, int32_t index, int32_t length, app::Comparison_1_Moon_MoonAnimatorLayerDefinition_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04725998, ArraySortHelper_1_Moon_MoonAnimatorLayerDefinition__Sort_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C8AB70, int32_t, InternalBinarySearch, (app::MoonAnimatorLayerDefinition__Array * array, int32_t index, int32_t length, app::MoonAnimatorLayerDefinition value, app::IComparer_1_Moon_MoonAnimatorLayerDefinition_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8AD30, void, SwapIfGreater, (app::MoonAnimatorLayerDefinition__Array * keys, app::Comparison_1_Moon_MoonAnimatorLayerDefinition_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02C8AEE0, void, Swap, (app::MoonAnimatorLayerDefinition__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::MoonAnimatorLayerDefinition__Array * keys, int32_t left, int32_t length, app::Comparison_1_Moon_MoonAnimatorLayerDefinition_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::MoonAnimatorLayerDefinition__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_Moon_MoonAnimatorLayerDefinition_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8AF80, int32_t, PickPivotAndPartition, (app::MoonAnimatorLayerDefinition__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Moon_MoonAnimatorLayerDefinition_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::MoonAnimatorLayerDefinition__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Moon_MoonAnimatorLayerDefinition_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8B3D0, void, DownHeap, (app::MoonAnimatorLayerDefinition__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_Moon_MoonAnimatorLayerDefinition_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8B740, void, InsertionSort, (app::MoonAnimatorLayerDefinition__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Moon_MoonAnimatorLayerDefinition_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_Moon_MoonAnimatorLayerDefinition_
