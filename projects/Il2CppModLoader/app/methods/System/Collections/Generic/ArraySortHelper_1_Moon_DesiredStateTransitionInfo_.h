#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Collections::Generic::ArraySortHelper_1_Moon_DesiredStateTransitionInfo_ {
    IL2CPP_REGISTER_METHOD(0x02F34B00, void, Sort_1, (app::DesiredStateTransitionInfo__Array * keys, int32_t index, int32_t length, app::IComparer_1_Moon_DesiredStateTransitionInfo_ * comparer))
    IL2CPP_REGISTER_METHODINFO(0x04780AA8, ArraySortHelper_1_Moon_DesiredStateTransitionInfo__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F34E20, int32_t, BinarySearch, (app::DesiredStateTransitionInfo__Array * array, int32_t index, int32_t length, app::DesiredStateTransitionInfo value, app::IComparer_1_Moon_DesiredStateTransitionInfo_ * comparer))
    IL2CPP_REGISTER_METHODINFO(0x04745AB8, ArraySortHelper_1_Moon_DesiredStateTransitionInfo__BinarySearch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F34FF0, void, Sort_2, (app::DesiredStateTransitionInfo__Array * keys, int32_t index, int32_t length, app::Comparison_1_Moon_DesiredStateTransitionInfo_ * comparer))
    IL2CPP_REGISTER_METHODINFO(0x0476B1F8, ArraySortHelper_1_Moon_DesiredStateTransitionInfo__Sort_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F31D30, int32_t, InternalBinarySearch, (app::DesiredStateTransitionInfo__Array * array, int32_t index, int32_t length, app::DesiredStateTransitionInfo value, app::IComparer_1_Moon_DesiredStateTransitionInfo_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02F31EA0, void, SwapIfGreater, (app::DesiredStateTransitionInfo__Array * keys, app::Comparison_1_Moon_DesiredStateTransitionInfo_ * comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02F32090, void, Swap, (app::DesiredStateTransitionInfo__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::DesiredStateTransitionInfo__Array * keys, int32_t left, int32_t length, app::Comparison_1_Moon_DesiredStateTransitionInfo_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::DesiredStateTransitionInfo__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_Moon_DesiredStateTransitionInfo_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02F32150, int32_t, PickPivotAndPartition, (app::DesiredStateTransitionInfo__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Moon_DesiredStateTransitionInfo_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::DesiredStateTransitionInfo__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Moon_DesiredStateTransitionInfo_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02F325F0, void, DownHeap, (app::DesiredStateTransitionInfo__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_Moon_DesiredStateTransitionInfo_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02F329C0, void, InsertionSort, (app::DesiredStateTransitionInfo__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Moon_DesiredStateTransitionInfo_ * comparer))
}
