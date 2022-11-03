#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_DistortionAnimator_RendererData_ {
    IL2CPP_REGISTER_METHOD(0x02F30490, void, Sort_1, (app::DistortionAnimator_RendererData__Array * keys, int32_t index, int32_t length, app::IComparer_1_DistortionAnimator_RendererData_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0471DD20, ArraySortHelper_1_DistortionAnimator_RendererData__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F307B0, int32_t, BinarySearch, (app::DistortionAnimator_RendererData__Array * array, int32_t index, int32_t length, app::DistortionAnimator_RendererData value, app::IComparer_1_DistortionAnimator_RendererData_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0472E2B8, ArraySortHelper_1_DistortionAnimator_RendererData__BinarySearch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F30960, void, Sort_2, (app::DistortionAnimator_RendererData__Array * keys, int32_t index, int32_t length, app::Comparison_1_DistortionAnimator_RendererData_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04769610, ArraySortHelper_1_DistortionAnimator_RendererData__Sort_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C8BFB0, int32_t, InternalBinarySearch, (app::DistortionAnimator_RendererData__Array * array, int32_t index, int32_t length, app::DistortionAnimator_RendererData value, app::IComparer_1_DistortionAnimator_RendererData_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8C170, void, SwapIfGreater, (app::DistortionAnimator_RendererData__Array * keys, app::Comparison_1_DistortionAnimator_RendererData_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02C8C330, void, Swap, (app::DistortionAnimator_RendererData__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::DistortionAnimator_RendererData__Array * keys, int32_t left, int32_t length, app::Comparison_1_DistortionAnimator_RendererData_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::DistortionAnimator_RendererData__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_DistortionAnimator_RendererData_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8C3D0, int32_t, PickPivotAndPartition, (app::DistortionAnimator_RendererData__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_DistortionAnimator_RendererData_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::DistortionAnimator_RendererData__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_DistortionAnimator_RendererData_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8C820, void, DownHeap, (app::DistortionAnimator_RendererData__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_DistortionAnimator_RendererData_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8CBA0, void, InsertionSort, (app::DistortionAnimator_RendererData__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_DistortionAnimator_RendererData_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_DistortionAnimator_RendererData_
