#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_UnityEngine_ParticleCollisionEvent_ {
    IL2CPP_REGISTER_METHOD(0x02F6C000, void, Sort_1, (app::ParticleCollisionEvent__Array * keys, int32_t index, int32_t length, app::IComparer_1_UnityEngine_ParticleCollisionEvent_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0470CA28, ArraySortHelper_1_UnityEngine_ParticleCollisionEvent__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F6C320, int32_t, BinarySearch, (app::ParticleCollisionEvent__Array * array, int32_t index, int32_t length, app::ParticleCollisionEvent value, app::IComparer_1_UnityEngine_ParticleCollisionEvent_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0471D208, ArraySortHelper_1_UnityEngine_ParticleCollisionEvent__BinarySearch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F6C4F0, void, Sort_2, (app::ParticleCollisionEvent__Array * keys, int32_t index, int32_t length, app::Comparison_1_UnityEngine_ParticleCollisionEvent_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0471B278, ArraySortHelper_1_UnityEngine_ParticleCollisionEvent__Sort_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F31D30, int32_t, InternalBinarySearch, (app::ParticleCollisionEvent__Array * array, int32_t index, int32_t length, app::ParticleCollisionEvent value, app::IComparer_1_UnityEngine_ParticleCollisionEvent_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F31EA0, void, SwapIfGreater, (app::ParticleCollisionEvent__Array * keys, app::Comparison_1_UnityEngine_ParticleCollisionEvent_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02F32090, void, Swap, (app::ParticleCollisionEvent__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::ParticleCollisionEvent__Array * keys, int32_t left, int32_t length, app::Comparison_1_UnityEngine_ParticleCollisionEvent_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::ParticleCollisionEvent__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_UnityEngine_ParticleCollisionEvent_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F32150, int32_t, PickPivotAndPartition, (app::ParticleCollisionEvent__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UnityEngine_ParticleCollisionEvent_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::ParticleCollisionEvent__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UnityEngine_ParticleCollisionEvent_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F325F0, void, DownHeap, (app::ParticleCollisionEvent__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_UnityEngine_ParticleCollisionEvent_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F329C0, void, InsertionSort, (app::ParticleCollisionEvent__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UnityEngine_ParticleCollisionEvent_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_UnityEngine_ParticleCollisionEvent_
