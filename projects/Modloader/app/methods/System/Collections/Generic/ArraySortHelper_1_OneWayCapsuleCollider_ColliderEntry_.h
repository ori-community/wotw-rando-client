#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_OneWayCapsuleCollider_ColliderEntry_ {
    IL2CPP_REGISTER_METHOD(0x02F7B030, void, Sort_1, (app::OneWayCapsuleCollider_ColliderEntry__Array * keys, int32_t index, int32_t length, app::IComparer_1_OneWayCapsuleCollider_ColliderEntry_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04769048, ArraySortHelper_1_OneWayCapsuleCollider_ColliderEntry__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F7B350, int32_t, BinarySearch, (app::OneWayCapsuleCollider_ColliderEntry__Array * array, int32_t index, int32_t length, app::OneWayCapsuleCollider_ColliderEntry value, app::IComparer_1_OneWayCapsuleCollider_ColliderEntry_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0474DF00, ArraySortHelper_1_OneWayCapsuleCollider_ColliderEntry__BinarySearch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F7B500, void, Sort_2, (app::OneWayCapsuleCollider_ColliderEntry__Array * keys, int32_t index, int32_t length, app::Comparison_1_OneWayCapsuleCollider_ColliderEntry_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04757970, ArraySortHelper_1_OneWayCapsuleCollider_ColliderEntry__Sort_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C898B0, int32_t, InternalBinarySearch, (app::OneWayCapsuleCollider_ColliderEntry__Array * array, int32_t index, int32_t length, app::OneWayCapsuleCollider_ColliderEntry value, app::IComparer_1_OneWayCapsuleCollider_ColliderEntry_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C89A40, void, SwapIfGreater, (app::OneWayCapsuleCollider_ColliderEntry__Array * keys, app::Comparison_1_OneWayCapsuleCollider_ColliderEntry_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02C89BD0, void, Swap, (app::OneWayCapsuleCollider_ColliderEntry__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::OneWayCapsuleCollider_ColliderEntry__Array * keys, int32_t left, int32_t length, app::Comparison_1_OneWayCapsuleCollider_ColliderEntry_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::OneWayCapsuleCollider_ColliderEntry__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_OneWayCapsuleCollider_ColliderEntry_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C89C60, int32_t, PickPivotAndPartition, (app::OneWayCapsuleCollider_ColliderEntry__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_OneWayCapsuleCollider_ColliderEntry_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::OneWayCapsuleCollider_ColliderEntry__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_OneWayCapsuleCollider_ColliderEntry_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8A050, void, DownHeap, (app::OneWayCapsuleCollider_ColliderEntry__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_OneWayCapsuleCollider_ColliderEntry_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8A330, void, InsertionSort, (app::OneWayCapsuleCollider_ColliderEntry__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_OneWayCapsuleCollider_ColliderEntry_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_OneWayCapsuleCollider_ColliderEntry_
