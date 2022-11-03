#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_PreRecordingDynamicSceneObjectEntry_ {
    IL2CPP_REGISTER_METHOD(0x02F7B650, void, Sort_1, (app::PreRecordingDynamicSceneObjectEntry__Array * keys, int32_t index, int32_t length, app::IComparer_1_PreRecordingDynamicSceneObjectEntry_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0472CDA0, ArraySortHelper_1_PreRecordingDynamicSceneObjectEntry__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F7B970, int32_t, BinarySearch, (app::PreRecordingDynamicSceneObjectEntry__Array * array, int32_t index, int32_t length, app::PreRecordingDynamicSceneObjectEntry value, app::IComparer_1_PreRecordingDynamicSceneObjectEntry_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04734970, ArraySortHelper_1_PreRecordingDynamicSceneObjectEntry__BinarySearch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F7BB10, void, Sort_2, (app::PreRecordingDynamicSceneObjectEntry__Array * keys, int32_t index, int32_t length, app::Comparison_1_PreRecordingDynamicSceneObjectEntry_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0472EE40, ArraySortHelper_1_PreRecordingDynamicSceneObjectEntry__Sort_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F2B330, int32_t, InternalBinarySearch, (app::PreRecordingDynamicSceneObjectEntry__Array * array, int32_t index, int32_t length, app::PreRecordingDynamicSceneObjectEntry value, app::IComparer_1_PreRecordingDynamicSceneObjectEntry_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F2B450, void, SwapIfGreater, (app::PreRecordingDynamicSceneObjectEntry__Array * keys, app::Comparison_1_PreRecordingDynamicSceneObjectEntry_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02F2B5E0, void, Swap, (app::PreRecordingDynamicSceneObjectEntry__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::PreRecordingDynamicSceneObjectEntry__Array * keys, int32_t left, int32_t length, app::Comparison_1_PreRecordingDynamicSceneObjectEntry_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::PreRecordingDynamicSceneObjectEntry__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_PreRecordingDynamicSceneObjectEntry_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F2B660, int32_t, PickPivotAndPartition, (app::PreRecordingDynamicSceneObjectEntry__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_PreRecordingDynamicSceneObjectEntry_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::PreRecordingDynamicSceneObjectEntry__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_PreRecordingDynamicSceneObjectEntry_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F2BA30, void, DownHeap, (app::PreRecordingDynamicSceneObjectEntry__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_PreRecordingDynamicSceneObjectEntry_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F2BCF0, void, InsertionSort, (app::PreRecordingDynamicSceneObjectEntry__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_PreRecordingDynamicSceneObjectEntry_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_PreRecordingDynamicSceneObjectEntry_
