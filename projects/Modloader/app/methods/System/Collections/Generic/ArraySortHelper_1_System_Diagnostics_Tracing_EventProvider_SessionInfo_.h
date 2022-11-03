#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_System_Diagnostics_Tracing_EventProvider_SessionInfo_ {
    IL2CPP_REGISTER_METHOD(0x02FFDD80, void, Sort_1, (app::EventProvider_SessionInfo__Array * keys, int32_t index, int32_t length, app::IComparer_1_System_Diagnostics_Tracing_EventProvider_SessionInfo_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0473AD30, ArraySortHelper_1_System_Diagnostics_Tracing_EventProvider_SessionInfo__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FFE0A0, int32_t, BinarySearch, (app::EventProvider_SessionInfo__Array * array, int32_t index, int32_t length, app::EventProvider_SessionInfo value, app::IComparer_1_System_Diagnostics_Tracing_EventProvider_SessionInfo_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04727C28, ArraySortHelper_1_System_Diagnostics_Tracing_EventProvider_SessionInfo__BinarySearch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FFE240, void, Sort_2, (app::EventProvider_SessionInfo__Array * keys, int32_t index, int32_t length, app::Comparison_1_System_Diagnostics_Tracing_EventProvider_SessionInfo_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0472FE60, ArraySortHelper_1_System_Diagnostics_Tracing_EventProvider_SessionInfo__Sort_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F2B330, int32_t, InternalBinarySearch, (app::EventProvider_SessionInfo__Array * array, int32_t index, int32_t length, app::EventProvider_SessionInfo value, app::IComparer_1_System_Diagnostics_Tracing_EventProvider_SessionInfo_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F2B450, void, SwapIfGreater, (app::EventProvider_SessionInfo__Array * keys, app::Comparison_1_System_Diagnostics_Tracing_EventProvider_SessionInfo_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02F2B5E0, void, Swap, (app::EventProvider_SessionInfo__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::EventProvider_SessionInfo__Array * keys, int32_t left, int32_t length, app::Comparison_1_System_Diagnostics_Tracing_EventProvider_SessionInfo_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::EventProvider_SessionInfo__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_System_Diagnostics_Tracing_EventProvider_SessionInfo_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F2B660, int32_t, PickPivotAndPartition, (app::EventProvider_SessionInfo__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_System_Diagnostics_Tracing_EventProvider_SessionInfo_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::EventProvider_SessionInfo__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_System_Diagnostics_Tracing_EventProvider_SessionInfo_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F2BA30, void, DownHeap, (app::EventProvider_SessionInfo__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_System_Diagnostics_Tracing_EventProvider_SessionInfo_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F2BCF0, void, InsertionSort, (app::EventProvider_SessionInfo__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_System_Diagnostics_Tracing_EventProvider_SessionInfo_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_System_Diagnostics_Tracing_EventProvider_SessionInfo_
