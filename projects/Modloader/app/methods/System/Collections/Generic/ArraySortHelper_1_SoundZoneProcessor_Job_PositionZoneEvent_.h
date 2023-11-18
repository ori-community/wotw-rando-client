#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SoundZoneProcessor_Job_PositionZoneEvent__Array.h>
#include <Modloader/app/structs/Comparison_1_SoundZoneProcessor_Job_PositionZoneEvent_.h>
#include <Modloader/app/structs/IComparer_1_SoundZoneProcessor_Job_PositionZoneEvent_.h>
#include <Modloader/app/structs/SoundZoneProcessor_Job_PositionZoneEvent.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_SoundZoneProcessor_Job_PositionZoneEvent_ {
    IL2CPP_REGISTER_METHOD(0x02FF2190, void, Sort_1, (app::SoundZoneProcessor_Job_PositionZoneEvent__Array * keys, int32_t index, int32_t length, app::IComparer_1_SoundZoneProcessor_Job_PositionZoneEvent_* comparer))
    IL2CPP_REGISTER_METHOD(0x02FF24B0, int32_t, BinarySearch, (app::SoundZoneProcessor_Job_PositionZoneEvent__Array * array, int32_t index, int32_t length, app::SoundZoneProcessor_Job_PositionZoneEvent value, app::IComparer_1_SoundZoneProcessor_Job_PositionZoneEvent_* comparer))
    IL2CPP_REGISTER_METHOD(0x02FF2660, void, Sort_2, (app::SoundZoneProcessor_Job_PositionZoneEvent__Array * keys, int32_t index, int32_t length, app::Comparison_1_SoundZoneProcessor_Job_PositionZoneEvent_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C898B0, int32_t, InternalBinarySearch, (app::SoundZoneProcessor_Job_PositionZoneEvent__Array * array, int32_t index, int32_t length, app::SoundZoneProcessor_Job_PositionZoneEvent value, app::IComparer_1_SoundZoneProcessor_Job_PositionZoneEvent_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C89A40, void, SwapIfGreater, (app::SoundZoneProcessor_Job_PositionZoneEvent__Array * keys, app::Comparison_1_SoundZoneProcessor_Job_PositionZoneEvent_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02C89BD0, void, Swap, (app::SoundZoneProcessor_Job_PositionZoneEvent__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::SoundZoneProcessor_Job_PositionZoneEvent__Array * keys, int32_t left, int32_t length, app::Comparison_1_SoundZoneProcessor_Job_PositionZoneEvent_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::SoundZoneProcessor_Job_PositionZoneEvent__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_SoundZoneProcessor_Job_PositionZoneEvent_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C89C60, int32_t, PickPivotAndPartition, (app::SoundZoneProcessor_Job_PositionZoneEvent__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_SoundZoneProcessor_Job_PositionZoneEvent_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::SoundZoneProcessor_Job_PositionZoneEvent__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_SoundZoneProcessor_Job_PositionZoneEvent_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8A050, void, DownHeap, (app::SoundZoneProcessor_Job_PositionZoneEvent__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_SoundZoneProcessor_Job_PositionZoneEvent_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8A330, void, InsertionSort, (app::SoundZoneProcessor_Job_PositionZoneEvent__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_SoundZoneProcessor_Job_PositionZoneEvent_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_SoundZoneProcessor_Job_PositionZoneEvent_
