#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_LegacyTransparencyAnimator_RendererData_ {
    IL2CPP_REGISTER_METHOD(0x02F60910, void, Sort_1, (app::LegacyTransparencyAnimator_RendererData__Array * keys, int32_t index, int32_t length, app::IComparer_1_LegacyTransparencyAnimator_RendererData_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x047096B0, ArraySortHelper_1_LegacyTransparencyAnimator_RendererData__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F60C30, int32_t, BinarySearch, (app::LegacyTransparencyAnimator_RendererData__Array * array, int32_t index, int32_t length, app::LegacyTransparencyAnimator_RendererData value, app::IComparer_1_LegacyTransparencyAnimator_RendererData_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0474A6D0, ArraySortHelper_1_LegacyTransparencyAnimator_RendererData__BinarySearch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F60DE0, void, Sort_2, (app::LegacyTransparencyAnimator_RendererData__Array * keys, int32_t index, int32_t length, app::Comparison_1_LegacyTransparencyAnimator_RendererData_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04762598, ArraySortHelper_1_LegacyTransparencyAnimator_RendererData__Sort_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C898B0, int32_t, InternalBinarySearch, (app::LegacyTransparencyAnimator_RendererData__Array * array, int32_t index, int32_t length, app::LegacyTransparencyAnimator_RendererData value, app::IComparer_1_LegacyTransparencyAnimator_RendererData_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C89A40, void, SwapIfGreater, (app::LegacyTransparencyAnimator_RendererData__Array * keys, app::Comparison_1_LegacyTransparencyAnimator_RendererData_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02C89BD0, void, Swap, (app::LegacyTransparencyAnimator_RendererData__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::LegacyTransparencyAnimator_RendererData__Array * keys, int32_t left, int32_t length, app::Comparison_1_LegacyTransparencyAnimator_RendererData_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::LegacyTransparencyAnimator_RendererData__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_LegacyTransparencyAnimator_RendererData_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C89C60, int32_t, PickPivotAndPartition, (app::LegacyTransparencyAnimator_RendererData__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_LegacyTransparencyAnimator_RendererData_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::LegacyTransparencyAnimator_RendererData__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_LegacyTransparencyAnimator_RendererData_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8A050, void, DownHeap, (app::LegacyTransparencyAnimator_RendererData__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_LegacyTransparencyAnimator_RendererData_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8A330, void, InsertionSort, (app::LegacyTransparencyAnimator_RendererData__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_LegacyTransparencyAnimator_RendererData_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_LegacyTransparencyAnimator_RendererData_
