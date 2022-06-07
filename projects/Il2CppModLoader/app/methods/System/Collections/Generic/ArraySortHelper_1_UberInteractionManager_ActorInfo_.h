#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Collections::Generic::ArraySortHelper_1_UberInteractionManager_ActorInfo_ {
    IL2CPP_REGISTER_METHOD(0x02F86420, void, Sort_1, (app::UberInteractionManager_ActorInfo__Array * keys, int32_t index, int32_t length, app::IComparer_1_UberInteractionManager_ActorInfo_ * comparer))
    IL2CPP_REGISTER_METHODINFO(0x04742C00, ArraySortHelper_1_UberInteractionManager_ActorInfo__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F86740, int32_t, BinarySearch, (app::UberInteractionManager_ActorInfo__Array * array, int32_t index, int32_t length, app::UberInteractionManager_ActorInfo value, app::IComparer_1_UberInteractionManager_ActorInfo_ * comparer))
    IL2CPP_REGISTER_METHODINFO(0x04773818, ArraySortHelper_1_UberInteractionManager_ActorInfo__BinarySearch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F868F0, void, Sort_2, (app::UberInteractionManager_ActorInfo__Array * keys, int32_t index, int32_t length, app::Comparison_1_UberInteractionManager_ActorInfo_ * comparer))
    IL2CPP_REGISTER_METHODINFO(0x04747998, ArraySortHelper_1_UberInteractionManager_ActorInfo__Sort_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C8AB70, int32_t, InternalBinarySearch, (app::UberInteractionManager_ActorInfo__Array * array, int32_t index, int32_t length, app::UberInteractionManager_ActorInfo value, app::IComparer_1_UberInteractionManager_ActorInfo_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02C8AD30, void, SwapIfGreater, (app::UberInteractionManager_ActorInfo__Array * keys, app::Comparison_1_UberInteractionManager_ActorInfo_ * comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02C8AEE0, void, Swap, (app::UberInteractionManager_ActorInfo__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::UberInteractionManager_ActorInfo__Array * keys, int32_t left, int32_t length, app::Comparison_1_UberInteractionManager_ActorInfo_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::UberInteractionManager_ActorInfo__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_UberInteractionManager_ActorInfo_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02C8AF80, int32_t, PickPivotAndPartition, (app::UberInteractionManager_ActorInfo__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UberInteractionManager_ActorInfo_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::UberInteractionManager_ActorInfo__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UberInteractionManager_ActorInfo_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02C8B3D0, void, DownHeap, (app::UberInteractionManager_ActorInfo__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_UberInteractionManager_ActorInfo_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02C8B740, void, InsertionSort, (app::UberInteractionManager_ActorInfo__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UberInteractionManager_ActorInfo_ * comparer))
}
