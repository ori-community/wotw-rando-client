#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Collections::Generic::ArraySortHelper_1_UnityEngine_AnimatorClipInfo_ {
    IL2CPP_REGISTER_METHOD(0x02F64050, void, Sort_1, (app::AnimatorClipInfo__Array * keys, int32_t index, int32_t length, app::IComparer_1_UnityEngine_AnimatorClipInfo_ * comparer))
    IL2CPP_REGISTER_METHODINFO(0x04794308, ArraySortHelper_1_UnityEngine_AnimatorClipInfo__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F64370, int32_t, BinarySearch, (app::AnimatorClipInfo__Array * array, int32_t index, int32_t length, app::AnimatorClipInfo value, app::IComparer_1_UnityEngine_AnimatorClipInfo_ * comparer))
    IL2CPP_REGISTER_METHODINFO(0x047529A0, ArraySortHelper_1_UnityEngine_AnimatorClipInfo__BinarySearch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F64510, void, Sort_2, (app::AnimatorClipInfo__Array * keys, int32_t index, int32_t length, app::Comparison_1_UnityEngine_AnimatorClipInfo_ * comparer))
    IL2CPP_REGISTER_METHODINFO(0x0476CB40, ArraySortHelper_1_UnityEngine_AnimatorClipInfo__Sort_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F2B330, int32_t, InternalBinarySearch, (app::AnimatorClipInfo__Array * array, int32_t index, int32_t length, app::AnimatorClipInfo value, app::IComparer_1_UnityEngine_AnimatorClipInfo_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02F2B450, void, SwapIfGreater, (app::AnimatorClipInfo__Array * keys, app::Comparison_1_UnityEngine_AnimatorClipInfo_ * comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02F2B5E0, void, Swap, (app::AnimatorClipInfo__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::AnimatorClipInfo__Array * keys, int32_t left, int32_t length, app::Comparison_1_UnityEngine_AnimatorClipInfo_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::AnimatorClipInfo__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_UnityEngine_AnimatorClipInfo_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02F2B660, int32_t, PickPivotAndPartition, (app::AnimatorClipInfo__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UnityEngine_AnimatorClipInfo_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::AnimatorClipInfo__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UnityEngine_AnimatorClipInfo_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02F2BA30, void, DownHeap, (app::AnimatorClipInfo__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_UnityEngine_AnimatorClipInfo_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02F2BCF0, void, InsertionSort, (app::AnimatorClipInfo__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UnityEngine_AnimatorClipInfo_ * comparer))
}
