#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Datadog_ThresholdItem__Array.h>
#include <Modloader/app/structs/IComparer_1_Datadog_ThresholdItem_.h>
#include <Modloader/app/structs/Datadog_ThresholdItem.h>
#include <Modloader/app/structs/Comparison_1_Datadog_ThresholdItem_.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_Datadog_ThresholdItem_ {
    IL2CPP_REGISTER_METHOD(0x02F2F230, void, Sort_1, (app::Datadog_ThresholdItem__Array * keys, int32_t index, int32_t length, app::IComparer_1_Datadog_ThresholdItem_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x047468D8, ArraySortHelper_1_Datadog_ThresholdItem__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F2F550, int32_t, BinarySearch, (app::Datadog_ThresholdItem__Array * array, int32_t index, int32_t length, app::Datadog_ThresholdItem value, app::IComparer_1_Datadog_ThresholdItem_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04763000, ArraySortHelper_1_Datadog_ThresholdItem__BinarySearch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F2F700, void, Sort_2, (app::Datadog_ThresholdItem__Array * keys, int32_t index, int32_t length, app::Comparison_1_Datadog_ThresholdItem_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04746338, ArraySortHelper_1_Datadog_ThresholdItem__Sort_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C898B0, int32_t, InternalBinarySearch, (app::Datadog_ThresholdItem__Array * array, int32_t index, int32_t length, app::Datadog_ThresholdItem value, app::IComparer_1_Datadog_ThresholdItem_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C89A40, void, SwapIfGreater, (app::Datadog_ThresholdItem__Array * keys, app::Comparison_1_Datadog_ThresholdItem_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02C89BD0, void, Swap, (app::Datadog_ThresholdItem__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::Datadog_ThresholdItem__Array * keys, int32_t left, int32_t length, app::Comparison_1_Datadog_ThresholdItem_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::Datadog_ThresholdItem__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_Datadog_ThresholdItem_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C89C60, int32_t, PickPivotAndPartition, (app::Datadog_ThresholdItem__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Datadog_ThresholdItem_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::Datadog_ThresholdItem__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Datadog_ThresholdItem_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8A050, void, DownHeap, (app::Datadog_ThresholdItem__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_Datadog_ThresholdItem_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8A330, void, InsertionSort, (app::Datadog_ThresholdItem__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Datadog_ThresholdItem_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_Datadog_ThresholdItem_
