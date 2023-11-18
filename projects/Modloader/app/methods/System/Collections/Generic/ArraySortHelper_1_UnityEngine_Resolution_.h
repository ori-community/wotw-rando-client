#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Resolution__Array.h>
#include <Modloader/app/structs/Comparison_1_UnityEngine_Resolution_.h>
#include <Modloader/app/structs/IComparer_1_UnityEngine_Resolution_.h>
#include <Modloader/app/structs/Resolution.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_UnityEngine_Resolution_ {
    IL2CPP_REGISTER_METHOD(0x02F6E8C0, void, Sort_1, (app::Resolution__Array * keys, int32_t index, int32_t length, app::IComparer_1_UnityEngine_Resolution_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F6EBE0, int32_t, BinarySearch, (app::Resolution__Array * array, int32_t index, int32_t length, app::Resolution value, app::IComparer_1_UnityEngine_Resolution_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F6ED90, void, Sort_2, (app::Resolution__Array * keys, int32_t index, int32_t length, app::Comparison_1_UnityEngine_Resolution_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C884A0, int32_t, InternalBinarySearch, (app::Resolution__Array * array, int32_t index, int32_t length, app::Resolution value, app::IComparer_1_UnityEngine_Resolution_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C88650, void, SwapIfGreater, (app::Resolution__Array * keys, app::Comparison_1_UnityEngine_Resolution_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02C88810, void, Swap, (app::Resolution__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::Resolution__Array * keys, int32_t left, int32_t length, app::Comparison_1_UnityEngine_Resolution_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::Resolution__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_UnityEngine_Resolution_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C888B0, int32_t, PickPivotAndPartition, (app::Resolution__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UnityEngine_Resolution_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::Resolution__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UnityEngine_Resolution_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C88CE0, void, DownHeap, (app::Resolution__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_UnityEngine_Resolution_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C89050, void, InsertionSort, (app::Resolution__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UnityEngine_Resolution_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_UnityEngine_Resolution_
