#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Collections::Generic::ArraySortHelper_1_UnityEngine_BeforeRenderHelper_OrderBlock_ {
    IL2CPP_REGISTER_METHOD(0x02F64660, void, Sort_1, (app::BeforeRenderHelper_OrderBlock__Array * keys, int32_t index, int32_t length, app::IComparer_1_UnityEngine_BeforeRenderHelper_OrderBlock_ * comparer))
    IL2CPP_REGISTER_METHODINFO(0x0477F5C0, ArraySortHelper_1_UnityEngine_BeforeRenderHelper_OrderBlock__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F64980, int32_t, BinarySearch, (app::BeforeRenderHelper_OrderBlock__Array * array, int32_t index, int32_t length, app::BeforeRenderHelper_OrderBlock value, app::IComparer_1_UnityEngine_BeforeRenderHelper_OrderBlock_ * comparer))
    IL2CPP_REGISTER_METHODINFO(0x0473AD88, ArraySortHelper_1_UnityEngine_BeforeRenderHelper_OrderBlock__BinarySearch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F64B30, void, Sort_2, (app::BeforeRenderHelper_OrderBlock__Array * keys, int32_t index, int32_t length, app::Comparison_1_UnityEngine_BeforeRenderHelper_OrderBlock_ * comparer))
    IL2CPP_REGISTER_METHODINFO(0x0476A140, ArraySortHelper_1_UnityEngine_BeforeRenderHelper_OrderBlock__Sort_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C898B0, int32_t, InternalBinarySearch, (app::BeforeRenderHelper_OrderBlock__Array * array, int32_t index, int32_t length, app::BeforeRenderHelper_OrderBlock value, app::IComparer_1_UnityEngine_BeforeRenderHelper_OrderBlock_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02C89A40, void, SwapIfGreater, (app::BeforeRenderHelper_OrderBlock__Array * keys, app::Comparison_1_UnityEngine_BeforeRenderHelper_OrderBlock_ * comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02C89BD0, void, Swap, (app::BeforeRenderHelper_OrderBlock__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::BeforeRenderHelper_OrderBlock__Array * keys, int32_t left, int32_t length, app::Comparison_1_UnityEngine_BeforeRenderHelper_OrderBlock_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::BeforeRenderHelper_OrderBlock__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_UnityEngine_BeforeRenderHelper_OrderBlock_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02C89C60, int32_t, PickPivotAndPartition, (app::BeforeRenderHelper_OrderBlock__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UnityEngine_BeforeRenderHelper_OrderBlock_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::BeforeRenderHelper_OrderBlock__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UnityEngine_BeforeRenderHelper_OrderBlock_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02C8A050, void, DownHeap, (app::BeforeRenderHelper_OrderBlock__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_UnityEngine_BeforeRenderHelper_OrderBlock_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02C8A330, void, InsertionSort, (app::BeforeRenderHelper_OrderBlock__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UnityEngine_BeforeRenderHelper_OrderBlock_ * comparer))
}
