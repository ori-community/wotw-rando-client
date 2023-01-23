#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/LegacyBabySandWorm_PositionHistoryEntry__Array.h>
#include <Modloader/app/structs/IComparer_1_LegacyBabySandWorm_PositionHistoryEntry_.h>
#include <Modloader/app/structs/LegacyBabySandWorm_PositionHistoryEntry.h>
#include <Modloader/app/structs/Comparison_1_LegacyBabySandWorm_PositionHistoryEntry_.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_LegacyBabySandWorm_PositionHistoryEntry_ {
    IL2CPP_REGISTER_METHOD(0x02F5FCD0, void, Sort_1, (app::LegacyBabySandWorm_PositionHistoryEntry__Array * keys, int32_t index, int32_t length, app::IComparer_1_LegacyBabySandWorm_PositionHistoryEntry_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04750F68, ArraySortHelper_1_LegacyBabySandWorm_PositionHistoryEntry__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F5FFF0, int32_t, BinarySearch, (app::LegacyBabySandWorm_PositionHistoryEntry__Array * array, int32_t index, int32_t length, app::LegacyBabySandWorm_PositionHistoryEntry value, app::IComparer_1_LegacyBabySandWorm_PositionHistoryEntry_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04743E50, ArraySortHelper_1_LegacyBabySandWorm_PositionHistoryEntry__BinarySearch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F601A0, void, Sort_2, (app::LegacyBabySandWorm_PositionHistoryEntry__Array * keys, int32_t index, int32_t length, app::Comparison_1_LegacyBabySandWorm_PositionHistoryEntry_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0477FE78, ArraySortHelper_1_LegacyBabySandWorm_PositionHistoryEntry__Sort_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C898B0, int32_t, InternalBinarySearch, (app::LegacyBabySandWorm_PositionHistoryEntry__Array * array, int32_t index, int32_t length, app::LegacyBabySandWorm_PositionHistoryEntry value, app::IComparer_1_LegacyBabySandWorm_PositionHistoryEntry_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C89A40, void, SwapIfGreater, (app::LegacyBabySandWorm_PositionHistoryEntry__Array * keys, app::Comparison_1_LegacyBabySandWorm_PositionHistoryEntry_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02C89BD0, void, Swap, (app::LegacyBabySandWorm_PositionHistoryEntry__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::LegacyBabySandWorm_PositionHistoryEntry__Array * keys, int32_t left, int32_t length, app::Comparison_1_LegacyBabySandWorm_PositionHistoryEntry_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::LegacyBabySandWorm_PositionHistoryEntry__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_LegacyBabySandWorm_PositionHistoryEntry_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C89C60, int32_t, PickPivotAndPartition, (app::LegacyBabySandWorm_PositionHistoryEntry__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_LegacyBabySandWorm_PositionHistoryEntry_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::LegacyBabySandWorm_PositionHistoryEntry__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_LegacyBabySandWorm_PositionHistoryEntry_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8A050, void, DownHeap, (app::LegacyBabySandWorm_PositionHistoryEntry__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_LegacyBabySandWorm_PositionHistoryEntry_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8A330, void, InsertionSort, (app::LegacyBabySandWorm_PositionHistoryEntry__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_LegacyBabySandWorm_PositionHistoryEntry_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_LegacyBabySandWorm_PositionHistoryEntry_
