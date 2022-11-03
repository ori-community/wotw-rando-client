#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_UberInteractionManager_ExplosionApplication_ {
    IL2CPP_REGISTER_METHOD(0x02F86A40, void, Sort_1, (app::UberInteractionManager_ExplosionApplication__Array * keys, int32_t index, int32_t length, app::IComparer_1_UberInteractionManager_ExplosionApplication_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0471F1F0, ArraySortHelper_1_UberInteractionManager_ExplosionApplication__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F86D60, int32_t, BinarySearch, (app::UberInteractionManager_ExplosionApplication__Array * array, int32_t index, int32_t length, app::UberInteractionManager_ExplosionApplication value, app::IComparer_1_UberInteractionManager_ExplosionApplication_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x047052E0, ArraySortHelper_1_UberInteractionManager_ExplosionApplication__BinarySearch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F86F30, void, Sort_2, (app::UberInteractionManager_ExplosionApplication__Array * keys, int32_t index, int32_t length, app::Comparison_1_UberInteractionManager_ExplosionApplication_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04701338, ArraySortHelper_1_UberInteractionManager_ExplosionApplication__Sort_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F37310, int32_t, InternalBinarySearch, (app::UberInteractionManager_ExplosionApplication__Array * array, int32_t index, int32_t length, app::UberInteractionManager_ExplosionApplication value, app::IComparer_1_UberInteractionManager_ExplosionApplication_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F37490, void, SwapIfGreater, (app::UberInteractionManager_ExplosionApplication__Array * keys, app::Comparison_1_UberInteractionManager_ExplosionApplication_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02F376A0, void, Swap, (app::UberInteractionManager_ExplosionApplication__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::UberInteractionManager_ExplosionApplication__Array * keys, int32_t left, int32_t length, app::Comparison_1_UberInteractionManager_ExplosionApplication_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::UberInteractionManager_ExplosionApplication__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_UberInteractionManager_ExplosionApplication_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F37770, int32_t, PickPivotAndPartition, (app::UberInteractionManager_ExplosionApplication__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UberInteractionManager_ExplosionApplication_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::UberInteractionManager_ExplosionApplication__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UberInteractionManager_ExplosionApplication_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F37C40, void, DownHeap, (app::UberInteractionManager_ExplosionApplication__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_UberInteractionManager_ExplosionApplication_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F38060, void, InsertionSort, (app::UberInteractionManager_ExplosionApplication__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UberInteractionManager_ExplosionApplication_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_UberInteractionManager_ExplosionApplication_
