#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MicroProfilerGraph_MarkerCache__Array.h>
#include <Modloader/app/structs/IComparer_1_MicroProfilerGraph_MarkerCache_.h>
#include <Modloader/app/structs/MicroProfilerGraph_MarkerCache.h>
#include <Modloader/app/structs/Comparison_1_MicroProfilerGraph_MarkerCache_.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_MicroProfilerGraph_MarkerCache_ {
    IL2CPP_REGISTER_METHOD(0x02F627D0, void, Sort_1, (app::MicroProfilerGraph_MarkerCache__Array * keys, int32_t index, int32_t length, app::IComparer_1_MicroProfilerGraph_MarkerCache_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04745250, ArraySortHelper_1_MicroProfilerGraph_MarkerCache__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F62AF0, int32_t, BinarySearch, (app::MicroProfilerGraph_MarkerCache__Array * array, int32_t index, int32_t length, app::MicroProfilerGraph_MarkerCache value, app::IComparer_1_MicroProfilerGraph_MarkerCache_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0476BC88, ArraySortHelper_1_MicroProfilerGraph_MarkerCache__BinarySearch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F62CA0, void, Sort_2, (app::MicroProfilerGraph_MarkerCache__Array * keys, int32_t index, int32_t length, app::Comparison_1_MicroProfilerGraph_MarkerCache_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04719BD8, ArraySortHelper_1_MicroProfilerGraph_MarkerCache__Sort_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C884A0, int32_t, InternalBinarySearch, (app::MicroProfilerGraph_MarkerCache__Array * array, int32_t index, int32_t length, app::MicroProfilerGraph_MarkerCache value, app::IComparer_1_MicroProfilerGraph_MarkerCache_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C88650, void, SwapIfGreater, (app::MicroProfilerGraph_MarkerCache__Array * keys, app::Comparison_1_MicroProfilerGraph_MarkerCache_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02C88810, void, Swap, (app::MicroProfilerGraph_MarkerCache__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::MicroProfilerGraph_MarkerCache__Array * keys, int32_t left, int32_t length, app::Comparison_1_MicroProfilerGraph_MarkerCache_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::MicroProfilerGraph_MarkerCache__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_MicroProfilerGraph_MarkerCache_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C888B0, int32_t, PickPivotAndPartition, (app::MicroProfilerGraph_MarkerCache__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_MicroProfilerGraph_MarkerCache_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::MicroProfilerGraph_MarkerCache__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_MicroProfilerGraph_MarkerCache_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C88CE0, void, DownHeap, (app::MicroProfilerGraph_MarkerCache__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_MicroProfilerGraph_MarkerCache_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C89050, void, InsertionSort, (app::MicroProfilerGraph_MarkerCache__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_MicroProfilerGraph_MarkerCache_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_MicroProfilerGraph_MarkerCache_
