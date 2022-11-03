#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_PreRecordingInstantiationEntry_ {
    IL2CPP_REGISTER_METHOD(0x02FED7B0, void, Sort_1, (app::PreRecordingInstantiationEntry__Array * keys, int32_t index, int32_t length, app::IComparer_1_PreRecordingInstantiationEntry_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0471D490, ArraySortHelper_1_PreRecordingInstantiationEntry__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FEDAD0, int32_t, BinarySearch, (app::PreRecordingInstantiationEntry__Array * array, int32_t index, int32_t length, app::PreRecordingInstantiationEntry value, app::IComparer_1_PreRecordingInstantiationEntry_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04793538, ArraySortHelper_1_PreRecordingInstantiationEntry__BinarySearch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FEDC80, void, Sort_2, (app::PreRecordingInstantiationEntry__Array * keys, int32_t index, int32_t length, app::Comparison_1_PreRecordingInstantiationEntry_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04749320, ArraySortHelper_1_PreRecordingInstantiationEntry__Sort_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C898B0, int32_t, InternalBinarySearch, (app::PreRecordingInstantiationEntry__Array * array, int32_t index, int32_t length, app::PreRecordingInstantiationEntry value, app::IComparer_1_PreRecordingInstantiationEntry_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C89A40, void, SwapIfGreater, (app::PreRecordingInstantiationEntry__Array * keys, app::Comparison_1_PreRecordingInstantiationEntry_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02C89BD0, void, Swap, (app::PreRecordingInstantiationEntry__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::PreRecordingInstantiationEntry__Array * keys, int32_t left, int32_t length, app::Comparison_1_PreRecordingInstantiationEntry_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::PreRecordingInstantiationEntry__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_PreRecordingInstantiationEntry_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C89C60, int32_t, PickPivotAndPartition, (app::PreRecordingInstantiationEntry__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_PreRecordingInstantiationEntry_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::PreRecordingInstantiationEntry__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_PreRecordingInstantiationEntry_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8A050, void, DownHeap, (app::PreRecordingInstantiationEntry__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_PreRecordingInstantiationEntry_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8A330, void, InsertionSort, (app::PreRecordingInstantiationEntry__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_PreRecordingInstantiationEntry_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_PreRecordingInstantiationEntry_
