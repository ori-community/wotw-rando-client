#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UtilitySelectorNode_NodeUtility__Array.h>
#include <Modloader/app/structs/IComparer_1_Moon_BehaviourSystem_UtilitySelectorNode_NodeUtility_.h>
#include <Modloader/app/structs/UtilitySelectorNode_NodeUtility.h>
#include <Modloader/app/structs/Comparison_1_Moon_BehaviourSystem_UtilitySelectorNode_NodeUtility_.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_Moon_BehaviourSystem_UtilitySelectorNode_NodeUtility_ {
    IL2CPP_REGISTER_METHOD(0x02F33EC0, void, Sort_1, (app::UtilitySelectorNode_NodeUtility__Array * keys, int32_t index, int32_t length, app::IComparer_1_Moon_BehaviourSystem_UtilitySelectorNode_NodeUtility_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04773A70, ArraySortHelper_1_Moon_BehaviourSystem_UtilitySelectorNode_NodeUtility__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F341E0, int32_t, BinarySearch, (app::UtilitySelectorNode_NodeUtility__Array * array, int32_t index, int32_t length, app::UtilitySelectorNode_NodeUtility value, app::IComparer_1_Moon_BehaviourSystem_UtilitySelectorNode_NodeUtility_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04710F30, ArraySortHelper_1_Moon_BehaviourSystem_UtilitySelectorNode_NodeUtility__BinarySearch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F34390, void, Sort_2, (app::UtilitySelectorNode_NodeUtility__Array * keys, int32_t index, int32_t length, app::Comparison_1_Moon_BehaviourSystem_UtilitySelectorNode_NodeUtility_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0473E100, ArraySortHelper_1_Moon_BehaviourSystem_UtilitySelectorNode_NodeUtility__Sort_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C898B0, int32_t, InternalBinarySearch, (app::UtilitySelectorNode_NodeUtility__Array * array, int32_t index, int32_t length, app::UtilitySelectorNode_NodeUtility value, app::IComparer_1_Moon_BehaviourSystem_UtilitySelectorNode_NodeUtility_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C89A40, void, SwapIfGreater, (app::UtilitySelectorNode_NodeUtility__Array * keys, app::Comparison_1_Moon_BehaviourSystem_UtilitySelectorNode_NodeUtility_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02C89BD0, void, Swap, (app::UtilitySelectorNode_NodeUtility__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::UtilitySelectorNode_NodeUtility__Array * keys, int32_t left, int32_t length, app::Comparison_1_Moon_BehaviourSystem_UtilitySelectorNode_NodeUtility_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::UtilitySelectorNode_NodeUtility__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_Moon_BehaviourSystem_UtilitySelectorNode_NodeUtility_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C89C60, int32_t, PickPivotAndPartition, (app::UtilitySelectorNode_NodeUtility__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Moon_BehaviourSystem_UtilitySelectorNode_NodeUtility_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::UtilitySelectorNode_NodeUtility__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Moon_BehaviourSystem_UtilitySelectorNode_NodeUtility_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8A050, void, DownHeap, (app::UtilitySelectorNode_NodeUtility__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_Moon_BehaviourSystem_UtilitySelectorNode_NodeUtility_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8A330, void, InsertionSort, (app::UtilitySelectorNode_NodeUtility__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Moon_BehaviourSystem_UtilitySelectorNode_NodeUtility_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_Moon_BehaviourSystem_UtilitySelectorNode_NodeUtility_
