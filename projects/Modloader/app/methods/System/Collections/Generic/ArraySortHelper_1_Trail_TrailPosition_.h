#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Trail_TrailPosition__Array.h>
#include <Modloader/app/structs/Comparison_1_Trail_TrailPosition_.h>
#include <Modloader/app/structs/IComparer_1_Trail_TrailPosition_.h>
#include <Modloader/app/structs/Trail_TrailPosition.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_Trail_TrailPosition_ {
    IL2CPP_REGISTER_METHOD(0x02F84BA0, void, Sort_1, (app::Trail_TrailPosition__Array * keys, int32_t index, int32_t length, app::IComparer_1_Trail_TrailPosition_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F84EC0, int32_t, BinarySearch, (app::Trail_TrailPosition__Array * array, int32_t index, int32_t length, app::Trail_TrailPosition value, app::IComparer_1_Trail_TrailPosition_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F85070, void, Sort_2, (app::Trail_TrailPosition__Array * keys, int32_t index, int32_t length, app::Comparison_1_Trail_TrailPosition_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C898B0, int32_t, InternalBinarySearch, (app::Trail_TrailPosition__Array * array, int32_t index, int32_t length, app::Trail_TrailPosition value, app::IComparer_1_Trail_TrailPosition_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C89A40, void, SwapIfGreater, (app::Trail_TrailPosition__Array * keys, app::Comparison_1_Trail_TrailPosition_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02C89BD0, void, Swap, (app::Trail_TrailPosition__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::Trail_TrailPosition__Array * keys, int32_t left, int32_t length, app::Comparison_1_Trail_TrailPosition_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::Trail_TrailPosition__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_Trail_TrailPosition_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C89C60, int32_t, PickPivotAndPartition, (app::Trail_TrailPosition__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Trail_TrailPosition_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::Trail_TrailPosition__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Trail_TrailPosition_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8A050, void, DownHeap, (app::Trail_TrailPosition__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_Trail_TrailPosition_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8A330, void, InsertionSort, (app::Trail_TrailPosition__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Trail_TrailPosition_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_Trail_TrailPosition_
