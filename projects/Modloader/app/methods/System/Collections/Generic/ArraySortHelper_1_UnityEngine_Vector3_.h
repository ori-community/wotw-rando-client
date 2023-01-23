#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Vector3__Array.h>
#include <Modloader/app/structs/IComparer_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Comparison_1_UnityEngine_Vector3_.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_UnityEngine_Vector3_ {
    IL2CPP_REGISTER_METHOD(0x02C87E80, void, Sort_1, (app::Vector3__Array * keys, int32_t index, int32_t length, app::IComparer_1_UnityEngine_Vector3_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0474CDA8, ArraySortHelper_1_UnityEngine_Vector3__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C881A0, int32_t, BinarySearch, (app::Vector3__Array * array, int32_t index, int32_t length, app::Vector3 value, app::IComparer_1_UnityEngine_Vector3_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0473E060, ArraySortHelper_1_UnityEngine_Vector3__BinarySearch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C88350, void, Sort_2, (app::Vector3__Array * keys, int32_t index, int32_t length, app::Comparison_1_UnityEngine_Vector3_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04766CA0, ArraySortHelper_1_UnityEngine_Vector3__Sort_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C884A0, int32_t, InternalBinarySearch, (app::Vector3__Array * array, int32_t index, int32_t length, app::Vector3 value, app::IComparer_1_UnityEngine_Vector3_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C88650, void, SwapIfGreater, (app::Vector3__Array * keys, app::Comparison_1_UnityEngine_Vector3_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02C88810, void, Swap, (app::Vector3__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::Vector3__Array * keys, int32_t left, int32_t length, app::Comparison_1_UnityEngine_Vector3_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::Vector3__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_UnityEngine_Vector3_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C888B0, int32_t, PickPivotAndPartition, (app::Vector3__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UnityEngine_Vector3_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::Vector3__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UnityEngine_Vector3_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C88CE0, void, DownHeap, (app::Vector3__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_UnityEngine_Vector3_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C89050, void, InsertionSort, (app::Vector3__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UnityEngine_Vector3_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_UnityEngine_Vector3_
