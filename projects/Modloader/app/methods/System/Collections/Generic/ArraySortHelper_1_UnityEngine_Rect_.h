#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Rect__Array.h>
#include <Modloader/app/structs/IComparer_1_UnityEngine_Rect_.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/Comparison_1_UnityEngine_Rect_.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_UnityEngine_Rect_ {
    IL2CPP_REGISTER_METHOD(0x02F6E2A0, void, Sort_1, (app::Rect__Array * keys, int32_t index, int32_t length, app::IComparer_1_UnityEngine_Rect_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0474CAC8, ArraySortHelper_1_UnityEngine_Rect__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F6E5C0, int32_t, BinarySearch, (app::Rect__Array * array, int32_t index, int32_t length, app::Rect value, app::IComparer_1_UnityEngine_Rect_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04721420, ArraySortHelper_1_UnityEngine_Rect__BinarySearch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F6E770, void, Sort_2, (app::Rect__Array * keys, int32_t index, int32_t length, app::Comparison_1_UnityEngine_Rect_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0473D4F0, ArraySortHelper_1_UnityEngine_Rect__Sort_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C898B0, int32_t, InternalBinarySearch, (app::Rect__Array * array, int32_t index, int32_t length, app::Rect value, app::IComparer_1_UnityEngine_Rect_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C89A40, void, SwapIfGreater, (app::Rect__Array * keys, app::Comparison_1_UnityEngine_Rect_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02C89BD0, void, Swap, (app::Rect__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::Rect__Array * keys, int32_t left, int32_t length, app::Comparison_1_UnityEngine_Rect_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::Rect__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_UnityEngine_Rect_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C89C60, int32_t, PickPivotAndPartition, (app::Rect__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UnityEngine_Rect_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::Rect__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UnityEngine_Rect_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8A050, void, DownHeap, (app::Rect__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_UnityEngine_Rect_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8A330, void, InsertionSort, (app::Rect__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UnityEngine_Rect_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_UnityEngine_Rect_
