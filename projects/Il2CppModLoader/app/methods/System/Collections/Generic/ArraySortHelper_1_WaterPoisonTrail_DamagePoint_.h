#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Collections::Generic::ArraySortHelper_1_WaterPoisonTrail_DamagePoint_ {
    IL2CPP_REGISTER_METHOD(0x02C8CDF0, void, Sort_1, (app::WaterPoisonTrail_DamagePoint__Array * keys, int32_t index, int32_t length, app::IComparer_1_WaterPoisonTrail_DamagePoint_ * comparer))
    IL2CPP_REGISTER_METHODINFO(0x047242F0, ArraySortHelper_1_WaterPoisonTrail_DamagePoint__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C8D110, int32_t, BinarySearch, (app::WaterPoisonTrail_DamagePoint__Array * array, int32_t index, int32_t length, app::WaterPoisonTrail_DamagePoint value, app::IComparer_1_WaterPoisonTrail_DamagePoint_ * comparer))
    IL2CPP_REGISTER_METHODINFO(0x047115D0, ArraySortHelper_1_WaterPoisonTrail_DamagePoint__BinarySearch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C8D2C0, void, Sort_2, (app::WaterPoisonTrail_DamagePoint__Array * keys, int32_t index, int32_t length, app::Comparison_1_WaterPoisonTrail_DamagePoint_ * comparer))
    IL2CPP_REGISTER_METHODINFO(0x0473E110, ArraySortHelper_1_WaterPoisonTrail_DamagePoint__Sort_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C8D410, int32_t, InternalBinarySearch, (app::WaterPoisonTrail_DamagePoint__Array * array, int32_t index, int32_t length, app::WaterPoisonTrail_DamagePoint value, app::IComparer_1_WaterPoisonTrail_DamagePoint_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02C8D5C0, void, SwapIfGreater, (app::WaterPoisonTrail_DamagePoint__Array * keys, app::Comparison_1_WaterPoisonTrail_DamagePoint_ * comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02C8D780, void, Swap, (app::WaterPoisonTrail_DamagePoint__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::WaterPoisonTrail_DamagePoint__Array * keys, int32_t left, int32_t length, app::Comparison_1_WaterPoisonTrail_DamagePoint_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::WaterPoisonTrail_DamagePoint__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_WaterPoisonTrail_DamagePoint_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02C8D820, int32_t, PickPivotAndPartition, (app::WaterPoisonTrail_DamagePoint__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_WaterPoisonTrail_DamagePoint_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::WaterPoisonTrail_DamagePoint__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_WaterPoisonTrail_DamagePoint_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02C8DC50, void, DownHeap, (app::WaterPoisonTrail_DamagePoint__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_WaterPoisonTrail_DamagePoint_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02C8DFB0, void, InsertionSort, (app::WaterPoisonTrail_DamagePoint__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_WaterPoisonTrail_DamagePoint_ * comparer))
}
