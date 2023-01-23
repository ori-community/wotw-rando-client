#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MoonAnimator_AnimatorPostprocessData__Array.h>
#include <Modloader/app/structs/IComparer_1_Moon_MoonAnimator_AnimatorPostprocessData_.h>
#include <Modloader/app/structs/MoonAnimator_AnimatorPostprocessData.h>
#include <Modloader/app/structs/Comparison_1_Moon_MoonAnimator_AnimatorPostprocessData_.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_Moon_MoonAnimator_AnimatorPostprocessData_ {
    IL2CPP_REGISTER_METHOD(0x02F36690, void, Sort_1, (app::MoonAnimator_AnimatorPostprocessData__Array * keys, int32_t index, int32_t length, app::IComparer_1_Moon_MoonAnimator_AnimatorPostprocessData_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04742B40, ArraySortHelper_1_Moon_MoonAnimator_AnimatorPostprocessData__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F369B0, int32_t, BinarySearch, (app::MoonAnimator_AnimatorPostprocessData__Array * array, int32_t index, int32_t length, app::MoonAnimator_AnimatorPostprocessData value, app::IComparer_1_Moon_MoonAnimator_AnimatorPostprocessData_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x047587D8, ArraySortHelper_1_Moon_MoonAnimator_AnimatorPostprocessData__BinarySearch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F36B80, void, Sort_2, (app::MoonAnimator_AnimatorPostprocessData__Array * keys, int32_t index, int32_t length, app::Comparison_1_Moon_MoonAnimator_AnimatorPostprocessData_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04764200, ArraySortHelper_1_Moon_MoonAnimator_AnimatorPostprocessData__Sort_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F31D30, int32_t, InternalBinarySearch, (app::MoonAnimator_AnimatorPostprocessData__Array * array, int32_t index, int32_t length, app::MoonAnimator_AnimatorPostprocessData value, app::IComparer_1_Moon_MoonAnimator_AnimatorPostprocessData_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F31EA0, void, SwapIfGreater, (app::MoonAnimator_AnimatorPostprocessData__Array * keys, app::Comparison_1_Moon_MoonAnimator_AnimatorPostprocessData_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02F32090, void, Swap, (app::MoonAnimator_AnimatorPostprocessData__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::MoonAnimator_AnimatorPostprocessData__Array * keys, int32_t left, int32_t length, app::Comparison_1_Moon_MoonAnimator_AnimatorPostprocessData_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::MoonAnimator_AnimatorPostprocessData__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_Moon_MoonAnimator_AnimatorPostprocessData_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F32150, int32_t, PickPivotAndPartition, (app::MoonAnimator_AnimatorPostprocessData__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Moon_MoonAnimator_AnimatorPostprocessData_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::MoonAnimator_AnimatorPostprocessData__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Moon_MoonAnimator_AnimatorPostprocessData_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F325F0, void, DownHeap, (app::MoonAnimator_AnimatorPostprocessData__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_Moon_MoonAnimator_AnimatorPostprocessData_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F329C0, void, InsertionSort, (app::MoonAnimator_AnimatorPostprocessData__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Moon_MoonAnimator_AnimatorPostprocessData_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_Moon_MoonAnimator_AnimatorPostprocessData_
