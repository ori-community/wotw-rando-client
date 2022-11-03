#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_UnityEngine_UICharInfo_ {
    IL2CPP_REGISTER_METHOD(0x02F6EEE0, void, Sort_1, (app::UICharInfo__Array * keys, int32_t index, int32_t length, app::IComparer_1_UnityEngine_UICharInfo_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04746680, ArraySortHelper_1_UnityEngine_UICharInfo__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F6F200, int32_t, BinarySearch, (app::UICharInfo__Array * array, int32_t index, int32_t length, app::UICharInfo value, app::IComparer_1_UnityEngine_UICharInfo_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0475FBE0, ArraySortHelper_1_UnityEngine_UICharInfo__BinarySearch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F6F3B0, void, Sort_2, (app::UICharInfo__Array * keys, int32_t index, int32_t length, app::Comparison_1_UnityEngine_UICharInfo_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0472F528, ArraySortHelper_1_UnityEngine_UICharInfo__Sort_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C884A0, int32_t, InternalBinarySearch, (app::UICharInfo__Array * array, int32_t index, int32_t length, app::UICharInfo value, app::IComparer_1_UnityEngine_UICharInfo_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C88650, void, SwapIfGreater, (app::UICharInfo__Array * keys, app::Comparison_1_UnityEngine_UICharInfo_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02C88810, void, Swap, (app::UICharInfo__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::UICharInfo__Array * keys, int32_t left, int32_t length, app::Comparison_1_UnityEngine_UICharInfo_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::UICharInfo__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_UnityEngine_UICharInfo_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C888B0, int32_t, PickPivotAndPartition, (app::UICharInfo__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UnityEngine_UICharInfo_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::UICharInfo__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UnityEngine_UICharInfo_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C88CE0, void, DownHeap, (app::UICharInfo__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_UnityEngine_UICharInfo_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C89050, void, InsertionSort, (app::UICharInfo__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UnityEngine_UICharInfo_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_UnityEngine_UICharInfo_
