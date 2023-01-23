#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Vector2__Array.h>
#include <Modloader/app/structs/IComparer_1_UnityEngine_Vector2_.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Comparison_1_UnityEngine_Vector2_.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_UnityEngine_Vector2_ {
    IL2CPP_REGISTER_METHOD(0x02C86500, void, Sort_1, (app::Vector2__Array * keys, int32_t index, int32_t length, app::IComparer_1_UnityEngine_Vector2_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04723FC8, ArraySortHelper_1_UnityEngine_Vector2__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C86820, int32_t, BinarySearch, (app::Vector2__Array * array, int32_t index, int32_t length, app::Vector2 value, app::IComparer_1_UnityEngine_Vector2_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04740AB0, ArraySortHelper_1_UnityEngine_Vector2__BinarySearch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C869D0, void, Sort_2, (app::Vector2__Array * keys, int32_t index, int32_t length, app::Comparison_1_UnityEngine_Vector2_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04736198, ArraySortHelper_1_UnityEngine_Vector2__Sort_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C86B20, int32_t, InternalBinarySearch, (app::Vector2__Array * array, int32_t index, int32_t length, app::Vector2 value, app::IComparer_1_UnityEngine_Vector2_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86C60, void, SwapIfGreater, (app::Vector2__Array * keys, app::Comparison_1_UnityEngine_Vector2_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02C86E20, void, Swap, (app::Vector2__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::Vector2__Array * keys, int32_t left, int32_t length, app::Comparison_1_UnityEngine_Vector2_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::Vector2__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_UnityEngine_Vector2_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87320, int32_t, PickPivotAndPartition, (app::Vector2__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UnityEngine_Vector2_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::Vector2__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UnityEngine_Vector2_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87900, void, DownHeap, (app::Vector2__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_UnityEngine_Vector2_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87C30, void, InsertionSort, (app::Vector2__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UnityEngine_Vector2_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_UnityEngine_Vector2_
