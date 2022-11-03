#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_UnityEngine_Quaternion_ {
    IL2CPP_REGISTER_METHOD(0x02F6C640, void, Sort_1, (app::Quaternion__Array * keys, int32_t index, int32_t length, app::IComparer_1_UnityEngine_Quaternion_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04709A78, ArraySortHelper_1_UnityEngine_Quaternion__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F6C960, int32_t, BinarySearch, (app::Quaternion__Array * array, int32_t index, int32_t length, app::Quaternion value, app::IComparer_1_UnityEngine_Quaternion_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04750E78, ArraySortHelper_1_UnityEngine_Quaternion__BinarySearch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F6CB10, void, Sort_2, (app::Quaternion__Array * keys, int32_t index, int32_t length, app::Comparison_1_UnityEngine_Quaternion_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0477EA40, ArraySortHelper_1_UnityEngine_Quaternion__Sort_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C898B0, int32_t, InternalBinarySearch, (app::Quaternion__Array * array, int32_t index, int32_t length, app::Quaternion value, app::IComparer_1_UnityEngine_Quaternion_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C89A40, void, SwapIfGreater, (app::Quaternion__Array * keys, app::Comparison_1_UnityEngine_Quaternion_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02C89BD0, void, Swap, (app::Quaternion__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::Quaternion__Array * keys, int32_t left, int32_t length, app::Comparison_1_UnityEngine_Quaternion_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::Quaternion__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_UnityEngine_Quaternion_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C89C60, int32_t, PickPivotAndPartition, (app::Quaternion__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UnityEngine_Quaternion_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::Quaternion__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UnityEngine_Quaternion_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8A050, void, DownHeap, (app::Quaternion__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_UnityEngine_Quaternion_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8A330, void, InsertionSort, (app::Quaternion__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UnityEngine_Quaternion_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_UnityEngine_Quaternion_
