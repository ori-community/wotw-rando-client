#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_AttackTokens_Request_ {
    IL2CPP_REGISTER_METHOD(0x02F2A0E0, void, Sort_1, (app::AttackTokens_Request__Array * keys, int32_t index, int32_t length, app::IComparer_1_AttackTokens_Request_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04771938, ArraySortHelper_1_AttackTokens_Request__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F2A400, int32_t, BinarySearch, (app::AttackTokens_Request__Array * array, int32_t index, int32_t length, app::AttackTokens_Request value, app::IComparer_1_AttackTokens_Request_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04734E00, ArraySortHelper_1_AttackTokens_Request__BinarySearch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F2A5B0, void, Sort_2, (app::AttackTokens_Request__Array * keys, int32_t index, int32_t length, app::Comparison_1_AttackTokens_Request_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0475D368, ArraySortHelper_1_AttackTokens_Request__Sort_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C8BFB0, int32_t, InternalBinarySearch, (app::AttackTokens_Request__Array * array, int32_t index, int32_t length, app::AttackTokens_Request value, app::IComparer_1_AttackTokens_Request_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8C170, void, SwapIfGreater, (app::AttackTokens_Request__Array * keys, app::Comparison_1_AttackTokens_Request_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02C8C330, void, Swap, (app::AttackTokens_Request__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::AttackTokens_Request__Array * keys, int32_t left, int32_t length, app::Comparison_1_AttackTokens_Request_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::AttackTokens_Request__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_AttackTokens_Request_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8C3D0, int32_t, PickPivotAndPartition, (app::AttackTokens_Request__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_AttackTokens_Request_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::AttackTokens_Request__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_AttackTokens_Request_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8C820, void, DownHeap, (app::AttackTokens_Request__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_AttackTokens_Request_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8CBA0, void, InsertionSort, (app::AttackTokens_Request__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_AttackTokens_Request_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_AttackTokens_Request_
