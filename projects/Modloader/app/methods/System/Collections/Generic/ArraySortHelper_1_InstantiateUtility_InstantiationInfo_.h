#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/InstantiateUtility_InstantiationInfo__Array.h>
#include <Modloader/app/structs/IComparer_1_InstantiateUtility_InstantiationInfo_.h>
#include <Modloader/app/structs/InstantiateUtility_InstantiationInfo.h>
#include <Modloader/app/structs/Comparison_1_InstantiateUtility_InstantiationInfo_.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_InstantiateUtility_InstantiationInfo_ {
    IL2CPP_REGISTER_METHOD(0x02F5E450, void, Sort_1, (app::InstantiateUtility_InstantiationInfo__Array * keys, int32_t index, int32_t length, app::IComparer_1_InstantiateUtility_InstantiationInfo_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0476F540, ArraySortHelper_1_InstantiateUtility_InstantiationInfo__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F5E770, int32_t, BinarySearch, (app::InstantiateUtility_InstantiationInfo__Array * array, int32_t index, int32_t length, app::InstantiateUtility_InstantiationInfo value, app::IComparer_1_InstantiateUtility_InstantiationInfo_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04754948, ArraySortHelper_1_InstantiateUtility_InstantiationInfo__BinarySearch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F5E920, void, Sort_2, (app::InstantiateUtility_InstantiationInfo__Array * keys, int32_t index, int32_t length, app::Comparison_1_InstantiateUtility_InstantiationInfo_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x047845A8, ArraySortHelper_1_InstantiateUtility_InstantiationInfo__Sort_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C8AB70, int32_t, InternalBinarySearch, (app::InstantiateUtility_InstantiationInfo__Array * array, int32_t index, int32_t length, app::InstantiateUtility_InstantiationInfo value, app::IComparer_1_InstantiateUtility_InstantiationInfo_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8AD30, void, SwapIfGreater, (app::InstantiateUtility_InstantiationInfo__Array * keys, app::Comparison_1_InstantiateUtility_InstantiationInfo_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02C8AEE0, void, Swap, (app::InstantiateUtility_InstantiationInfo__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::InstantiateUtility_InstantiationInfo__Array * keys, int32_t left, int32_t length, app::Comparison_1_InstantiateUtility_InstantiationInfo_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::InstantiateUtility_InstantiationInfo__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_InstantiateUtility_InstantiationInfo_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8AF80, int32_t, PickPivotAndPartition, (app::InstantiateUtility_InstantiationInfo__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_InstantiateUtility_InstantiationInfo_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::InstantiateUtility_InstantiationInfo__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_InstantiateUtility_InstantiationInfo_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8B3D0, void, DownHeap, (app::InstantiateUtility_InstantiationInfo__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_InstantiateUtility_InstantiationInfo_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8B740, void, InsertionSort, (app::InstantiateUtility_InstantiationInfo__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_InstantiateUtility_InstantiationInfo_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_InstantiateUtility_InstantiationInfo_
