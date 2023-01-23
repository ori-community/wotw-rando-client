#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MoonTelemetryCharacterHeartbeatEvent_Cleanup__Array.h>
#include <Modloader/app/structs/IComparer_1_MoonTelemetryCharacterHeartbeatEvent_Cleanup_.h>
#include <Modloader/app/structs/MoonTelemetryCharacterHeartbeatEvent_Cleanup.h>
#include <Modloader/app/structs/Comparison_1_MoonTelemetryCharacterHeartbeatEvent_Cleanup_.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_MoonTelemetryCharacterHeartbeatEvent_Cleanup_ {
    IL2CPP_REGISTER_METHOD(0x02F797C0, void, Sort_1, (app::MoonTelemetryCharacterHeartbeatEvent_Cleanup__Array * keys, int32_t index, int32_t length, app::IComparer_1_MoonTelemetryCharacterHeartbeatEvent_Cleanup_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x047701D8, ArraySortHelper_1_MoonTelemetryCharacterHeartbeatEvent_Cleanup__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F79AE0, int32_t, BinarySearch, (app::MoonTelemetryCharacterHeartbeatEvent_Cleanup__Array * array, int32_t index, int32_t length, app::MoonTelemetryCharacterHeartbeatEvent_Cleanup value, app::IComparer_1_MoonTelemetryCharacterHeartbeatEvent_Cleanup_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04765898, ArraySortHelper_1_MoonTelemetryCharacterHeartbeatEvent_Cleanup__BinarySearch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F79C90, void, Sort_2, (app::MoonTelemetryCharacterHeartbeatEvent_Cleanup__Array * keys, int32_t index, int32_t length, app::Comparison_1_MoonTelemetryCharacterHeartbeatEvent_Cleanup_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04753DD8, ArraySortHelper_1_MoonTelemetryCharacterHeartbeatEvent_Cleanup__Sort_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C8BFB0, int32_t, InternalBinarySearch, (app::MoonTelemetryCharacterHeartbeatEvent_Cleanup__Array * array, int32_t index, int32_t length, app::MoonTelemetryCharacterHeartbeatEvent_Cleanup value, app::IComparer_1_MoonTelemetryCharacterHeartbeatEvent_Cleanup_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8C170, void, SwapIfGreater, (app::MoonTelemetryCharacterHeartbeatEvent_Cleanup__Array * keys, app::Comparison_1_MoonTelemetryCharacterHeartbeatEvent_Cleanup_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02C8C330, void, Swap, (app::MoonTelemetryCharacterHeartbeatEvent_Cleanup__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::MoonTelemetryCharacterHeartbeatEvent_Cleanup__Array * keys, int32_t left, int32_t length, app::Comparison_1_MoonTelemetryCharacterHeartbeatEvent_Cleanup_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::MoonTelemetryCharacterHeartbeatEvent_Cleanup__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_MoonTelemetryCharacterHeartbeatEvent_Cleanup_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8C3D0, int32_t, PickPivotAndPartition, (app::MoonTelemetryCharacterHeartbeatEvent_Cleanup__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_MoonTelemetryCharacterHeartbeatEvent_Cleanup_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::MoonTelemetryCharacterHeartbeatEvent_Cleanup__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_MoonTelemetryCharacterHeartbeatEvent_Cleanup_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8C820, void, DownHeap, (app::MoonTelemetryCharacterHeartbeatEvent_Cleanup__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_MoonTelemetryCharacterHeartbeatEvent_Cleanup_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8CBA0, void, InsertionSort, (app::MoonTelemetryCharacterHeartbeatEvent_Cleanup__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_MoonTelemetryCharacterHeartbeatEvent_Cleanup_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_MoonTelemetryCharacterHeartbeatEvent_Cleanup_
