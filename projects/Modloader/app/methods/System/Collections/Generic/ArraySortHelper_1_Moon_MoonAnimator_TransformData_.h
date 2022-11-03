#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_Moon_MoonAnimator_TransformData_ {
    IL2CPP_REGISTER_METHOD(0x02F36CD0, void, Sort_1, (app::MoonAnimator_TransformData__Array * keys, int32_t index, int32_t length, app::IComparer_1_Moon_MoonAnimator_TransformData_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04779E88, ArraySortHelper_1_Moon_MoonAnimator_TransformData__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F36FF0, int32_t, BinarySearch, (app::MoonAnimator_TransformData__Array * array, int32_t index, int32_t length, app::MoonAnimator_TransformData value, app::IComparer_1_Moon_MoonAnimator_TransformData_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04733CF8, ArraySortHelper_1_Moon_MoonAnimator_TransformData__BinarySearch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F371C0, void, Sort_2, (app::MoonAnimator_TransformData__Array * keys, int32_t index, int32_t length, app::Comparison_1_Moon_MoonAnimator_TransformData_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04706E40, ArraySortHelper_1_Moon_MoonAnimator_TransformData__Sort_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F37310, int32_t, InternalBinarySearch, (app::MoonAnimator_TransformData__Array * array, int32_t index, int32_t length, app::MoonAnimator_TransformData value, app::IComparer_1_Moon_MoonAnimator_TransformData_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F37490, void, SwapIfGreater, (app::MoonAnimator_TransformData__Array * keys, app::Comparison_1_Moon_MoonAnimator_TransformData_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02F376A0, void, Swap, (app::MoonAnimator_TransformData__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::MoonAnimator_TransformData__Array * keys, int32_t left, int32_t length, app::Comparison_1_Moon_MoonAnimator_TransformData_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::MoonAnimator_TransformData__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_Moon_MoonAnimator_TransformData_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F37770, int32_t, PickPivotAndPartition, (app::MoonAnimator_TransformData__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Moon_MoonAnimator_TransformData_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::MoonAnimator_TransformData__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Moon_MoonAnimator_TransformData_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F37C40, void, DownHeap, (app::MoonAnimator_TransformData__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_Moon_MoonAnimator_TransformData_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F38060, void, InsertionSort, (app::MoonAnimator_TransformData__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Moon_MoonAnimator_TransformData_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_Moon_MoonAnimator_TransformData_
