#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Collections::Generic::ArraySortHelper_1_FramePerformanceMonitor_PerformanceFrameData_ {
    IL2CPP_REGISTER_METHOD(0x02F5ACD0, void, Sort_1, (app::FramePerformanceMonitor_PerformanceFrameData__Array * keys, int32_t index, int32_t length, app::IComparer_1_FramePerformanceMonitor_PerformanceFrameData_ * comparer))
    IL2CPP_REGISTER_METHODINFO(0x0473BA30, ArraySortHelper_1_FramePerformanceMonitor_PerformanceFrameData__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F5AFF0, int32_t, BinarySearch, (app::FramePerformanceMonitor_PerformanceFrameData__Array * array, int32_t index, int32_t length, app::FramePerformanceMonitor_PerformanceFrameData value, app::IComparer_1_FramePerformanceMonitor_PerformanceFrameData_ * comparer))
    IL2CPP_REGISTER_METHODINFO(0x04792010, ArraySortHelper_1_FramePerformanceMonitor_PerformanceFrameData__BinarySearch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F5B1A0, void, Sort_2, (app::FramePerformanceMonitor_PerformanceFrameData__Array * keys, int32_t index, int32_t length, app::Comparison_1_FramePerformanceMonitor_PerformanceFrameData_ * comparer))
    IL2CPP_REGISTER_METHODINFO(0x0470D7F0, ArraySortHelper_1_FramePerformanceMonitor_PerformanceFrameData__Sort_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C8BFB0, int32_t, InternalBinarySearch, (app::FramePerformanceMonitor_PerformanceFrameData__Array * array, int32_t index, int32_t length, app::FramePerformanceMonitor_PerformanceFrameData value, app::IComparer_1_FramePerformanceMonitor_PerformanceFrameData_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02C8C170, void, SwapIfGreater, (app::FramePerformanceMonitor_PerformanceFrameData__Array * keys, app::Comparison_1_FramePerformanceMonitor_PerformanceFrameData_ * comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02C8C330, void, Swap, (app::FramePerformanceMonitor_PerformanceFrameData__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::FramePerformanceMonitor_PerformanceFrameData__Array * keys, int32_t left, int32_t length, app::Comparison_1_FramePerformanceMonitor_PerformanceFrameData_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::FramePerformanceMonitor_PerformanceFrameData__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_FramePerformanceMonitor_PerformanceFrameData_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02C8C3D0, int32_t, PickPivotAndPartition, (app::FramePerformanceMonitor_PerformanceFrameData__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_FramePerformanceMonitor_PerformanceFrameData_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::FramePerformanceMonitor_PerformanceFrameData__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_FramePerformanceMonitor_PerformanceFrameData_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02C8C820, void, DownHeap, (app::FramePerformanceMonitor_PerformanceFrameData__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_FramePerformanceMonitor_PerformanceFrameData_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02C8CBA0, void, InsertionSort, (app::FramePerformanceMonitor_PerformanceFrameData__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_FramePerformanceMonitor_PerformanceFrameData_ * comparer))
}
