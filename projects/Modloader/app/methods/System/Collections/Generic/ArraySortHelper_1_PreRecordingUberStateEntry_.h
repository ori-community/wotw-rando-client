#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PreRecordingUberStateEntry__Array.h>
#include <Modloader/app/structs/IComparer_1_PreRecordingUberStateEntry_.h>
#include <Modloader/app/structs/PreRecordingUberStateEntry.h>
#include <Modloader/app/structs/Comparison_1_PreRecordingUberStateEntry_.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_PreRecordingUberStateEntry_ {
    IL2CPP_REGISTER_METHOD(0x02FEDDD0, void, Sort_1, (app::PreRecordingUberStateEntry__Array * keys, int32_t index, int32_t length, app::IComparer_1_PreRecordingUberStateEntry_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04740F48, ArraySortHelper_1_PreRecordingUberStateEntry__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FEE0F0, int32_t, BinarySearch, (app::PreRecordingUberStateEntry__Array * array, int32_t index, int32_t length, app::PreRecordingUberStateEntry value, app::IComparer_1_PreRecordingUberStateEntry_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04762600, ArraySortHelper_1_PreRecordingUberStateEntry__BinarySearch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FEE2A0, void, Sort_2, (app::PreRecordingUberStateEntry__Array * keys, int32_t index, int32_t length, app::Comparison_1_PreRecordingUberStateEntry_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0474E5D0, ArraySortHelper_1_PreRecordingUberStateEntry__Sort_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C898B0, int32_t, InternalBinarySearch, (app::PreRecordingUberStateEntry__Array * array, int32_t index, int32_t length, app::PreRecordingUberStateEntry value, app::IComparer_1_PreRecordingUberStateEntry_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C89A40, void, SwapIfGreater, (app::PreRecordingUberStateEntry__Array * keys, app::Comparison_1_PreRecordingUberStateEntry_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02C89BD0, void, Swap, (app::PreRecordingUberStateEntry__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::PreRecordingUberStateEntry__Array * keys, int32_t left, int32_t length, app::Comparison_1_PreRecordingUberStateEntry_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::PreRecordingUberStateEntry__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_PreRecordingUberStateEntry_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C89C60, int32_t, PickPivotAndPartition, (app::PreRecordingUberStateEntry__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_PreRecordingUberStateEntry_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::PreRecordingUberStateEntry__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_PreRecordingUberStateEntry_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8A050, void, DownHeap, (app::PreRecordingUberStateEntry__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_PreRecordingUberStateEntry_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8A330, void, InsertionSort, (app::PreRecordingUberStateEntry__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_PreRecordingUberStateEntry_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_PreRecordingUberStateEntry_
