#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/InstantiateDebugUtility_InstanceInfo__Array.h>
#include <Modloader/app/structs/IComparer_1_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_.h>
#include <Modloader/app/structs/InstantiateDebugUtility_InstanceInfo.h>
#include <Modloader/app/structs/Comparison_1_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_ {
    IL2CPP_REGISTER_METHOD(0x02F5DE30, void, Sort_1, (app::InstantiateDebugUtility_InstanceInfo__Array * keys, int32_t index, int32_t length, app::IComparer_1_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04702FD0, ArraySortHelper_1_InstantiateDebug_InstantiateDebugUtility_InstanceInfo__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F5E150, int32_t, BinarySearch, (app::InstantiateDebugUtility_InstanceInfo__Array * array, int32_t index, int32_t length, app::InstantiateDebugUtility_InstanceInfo value, app::IComparer_1_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04735DA8, ArraySortHelper_1_InstantiateDebug_InstantiateDebugUtility_InstanceInfo__BinarySearch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F5E300, void, Sort_2, (app::InstantiateDebugUtility_InstanceInfo__Array * keys, int32_t index, int32_t length, app::Comparison_1_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04754D90, ArraySortHelper_1_InstantiateDebug_InstantiateDebugUtility_InstanceInfo__Sort_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C8AB70, int32_t, InternalBinarySearch, (app::InstantiateDebugUtility_InstanceInfo__Array * array, int32_t index, int32_t length, app::InstantiateDebugUtility_InstanceInfo value, app::IComparer_1_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8AD30, void, SwapIfGreater, (app::InstantiateDebugUtility_InstanceInfo__Array * keys, app::Comparison_1_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02C8AEE0, void, Swap, (app::InstantiateDebugUtility_InstanceInfo__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::InstantiateDebugUtility_InstanceInfo__Array * keys, int32_t left, int32_t length, app::Comparison_1_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::InstantiateDebugUtility_InstanceInfo__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8AF80, int32_t, PickPivotAndPartition, (app::InstantiateDebugUtility_InstanceInfo__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::InstantiateDebugUtility_InstanceInfo__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8B3D0, void, DownHeap, (app::InstantiateDebugUtility_InstanceInfo__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8B740, void, InsertionSort, (app::InstantiateDebugUtility_InstanceInfo__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_
