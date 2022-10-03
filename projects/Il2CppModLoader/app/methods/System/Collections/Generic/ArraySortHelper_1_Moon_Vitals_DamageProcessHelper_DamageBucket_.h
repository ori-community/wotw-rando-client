#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_Moon_Vitals_DamageProcessHelper_DamageBucket_ {
    IL2CPP_REGISTER_METHOD(0x02F77920, void, Sort_1, (app::Vitals_DamageProcessHelper_DamageBucket__Array * keys, int32_t index, int32_t length, app::IComparer_1_Moon_Vitals_DamageProcessHelper_DamageBucket_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0472F018, ArraySortHelper_1_Moon_Vitals_DamageProcessHelper_DamageBucket__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F77C40, int32_t, BinarySearch, (app::Vitals_DamageProcessHelper_DamageBucket__Array * array, int32_t index, int32_t length, app::Vitals_DamageProcessHelper_DamageBucket value, app::IComparer_1_Moon_Vitals_DamageProcessHelper_DamageBucket_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0474C1A8, ArraySortHelper_1_Moon_Vitals_DamageProcessHelper_DamageBucket__BinarySearch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F77DF0, void, Sort_2, (app::Vitals_DamageProcessHelper_DamageBucket__Array * keys, int32_t index, int32_t length, app::Comparison_1_Moon_Vitals_DamageProcessHelper_DamageBucket_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0477A828, ArraySortHelper_1_Moon_Vitals_DamageProcessHelper_DamageBucket__Sort_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C884A0, int32_t, InternalBinarySearch, (app::Vitals_DamageProcessHelper_DamageBucket__Array * array, int32_t index, int32_t length, app::Vitals_DamageProcessHelper_DamageBucket value, app::IComparer_1_Moon_Vitals_DamageProcessHelper_DamageBucket_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C88650, void, SwapIfGreater, (app::Vitals_DamageProcessHelper_DamageBucket__Array * keys, app::Comparison_1_Moon_Vitals_DamageProcessHelper_DamageBucket_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02C88810, void, Swap, (app::Vitals_DamageProcessHelper_DamageBucket__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::Vitals_DamageProcessHelper_DamageBucket__Array * keys, int32_t left, int32_t length, app::Comparison_1_Moon_Vitals_DamageProcessHelper_DamageBucket_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::Vitals_DamageProcessHelper_DamageBucket__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_Moon_Vitals_DamageProcessHelper_DamageBucket_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C888B0, int32_t, PickPivotAndPartition, (app::Vitals_DamageProcessHelper_DamageBucket__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Moon_Vitals_DamageProcessHelper_DamageBucket_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::Vitals_DamageProcessHelper_DamageBucket__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Moon_Vitals_DamageProcessHelper_DamageBucket_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C88CE0, void, DownHeap, (app::Vitals_DamageProcessHelper_DamageBucket__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_Moon_Vitals_DamageProcessHelper_DamageBucket_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C89050, void, InsertionSort, (app::Vitals_DamageProcessHelper_DamageBucket__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Moon_Vitals_DamageProcessHelper_DamageBucket_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_Moon_Vitals_DamageProcessHelper_DamageBucket_
