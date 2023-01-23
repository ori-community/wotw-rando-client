#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/LegacyMaterialColorGradientAnimator_RendererData__Array.h>
#include <Modloader/app/structs/IComparer_1_LegacyMaterialColorGradientAnimator_RendererData_.h>
#include <Modloader/app/structs/LegacyMaterialColorGradientAnimator_RendererData.h>
#include <Modloader/app/structs/Comparison_1_LegacyMaterialColorGradientAnimator_RendererData_.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_LegacyMaterialColorGradientAnimator_RendererData_ {
    IL2CPP_REGISTER_METHOD(0x02F602F0, void, Sort_1, (app::LegacyMaterialColorGradientAnimator_RendererData__Array * keys, int32_t index, int32_t length, app::IComparer_1_LegacyMaterialColorGradientAnimator_RendererData_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04742E20, ArraySortHelper_1_LegacyMaterialColorGradientAnimator_RendererData__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F60610, int32_t, BinarySearch, (app::LegacyMaterialColorGradientAnimator_RendererData__Array * array, int32_t index, int32_t length, app::LegacyMaterialColorGradientAnimator_RendererData value, app::IComparer_1_LegacyMaterialColorGradientAnimator_RendererData_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04775250, ArraySortHelper_1_LegacyMaterialColorGradientAnimator_RendererData__BinarySearch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F607C0, void, Sort_2, (app::LegacyMaterialColorGradientAnimator_RendererData__Array * keys, int32_t index, int32_t length, app::Comparison_1_LegacyMaterialColorGradientAnimator_RendererData_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x047312A8, ArraySortHelper_1_LegacyMaterialColorGradientAnimator_RendererData__Sort_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C8BFB0, int32_t, InternalBinarySearch, (app::LegacyMaterialColorGradientAnimator_RendererData__Array * array, int32_t index, int32_t length, app::LegacyMaterialColorGradientAnimator_RendererData value, app::IComparer_1_LegacyMaterialColorGradientAnimator_RendererData_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8C170, void, SwapIfGreater, (app::LegacyMaterialColorGradientAnimator_RendererData__Array * keys, app::Comparison_1_LegacyMaterialColorGradientAnimator_RendererData_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02C8C330, void, Swap, (app::LegacyMaterialColorGradientAnimator_RendererData__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::LegacyMaterialColorGradientAnimator_RendererData__Array * keys, int32_t left, int32_t length, app::Comparison_1_LegacyMaterialColorGradientAnimator_RendererData_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::LegacyMaterialColorGradientAnimator_RendererData__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_LegacyMaterialColorGradientAnimator_RendererData_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8C3D0, int32_t, PickPivotAndPartition, (app::LegacyMaterialColorGradientAnimator_RendererData__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_LegacyMaterialColorGradientAnimator_RendererData_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::LegacyMaterialColorGradientAnimator_RendererData__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_LegacyMaterialColorGradientAnimator_RendererData_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8C820, void, DownHeap, (app::LegacyMaterialColorGradientAnimator_RendererData__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_LegacyMaterialColorGradientAnimator_RendererData_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8CBA0, void, InsertionSort, (app::LegacyMaterialColorGradientAnimator_RendererData__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_LegacyMaterialColorGradientAnimator_RendererData_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_LegacyMaterialColorGradientAnimator_RendererData_
