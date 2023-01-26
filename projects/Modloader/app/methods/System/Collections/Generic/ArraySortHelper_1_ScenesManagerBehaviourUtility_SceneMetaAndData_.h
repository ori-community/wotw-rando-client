#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ScenesManagerBehaviourUtility_SceneMetaAndData__Array.h>
#include <Modloader/app/structs/Comparison_1_ScenesManagerBehaviourUtility_SceneMetaAndData_.h>
#include <Modloader/app/structs/IComparer_1_ScenesManagerBehaviourUtility_SceneMetaAndData_.h>
#include <Modloader/app/structs/ScenesManagerBehaviourUtility_SceneMetaAndData.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_ScenesManagerBehaviourUtility_SceneMetaAndData_ {
    IL2CPP_REGISTER_METHOD(0x02FEF650, void, Sort_1, (app::ScenesManagerBehaviourUtility_SceneMetaAndData__Array * keys, int32_t index, int32_t length, app::IComparer_1_ScenesManagerBehaviourUtility_SceneMetaAndData_* comparer))
    IL2CPP_REGISTER_METHOD(0x02FEF970, int32_t, BinarySearch, (app::ScenesManagerBehaviourUtility_SceneMetaAndData__Array * array, int32_t index, int32_t length, app::ScenesManagerBehaviourUtility_SceneMetaAndData value, app::IComparer_1_ScenesManagerBehaviourUtility_SceneMetaAndData_* comparer))
    IL2CPP_REGISTER_METHOD(0x02FEFB20, void, Sort_2, (app::ScenesManagerBehaviourUtility_SceneMetaAndData__Array * keys, int32_t index, int32_t length, app::Comparison_1_ScenesManagerBehaviourUtility_SceneMetaAndData_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8AB70, int32_t, InternalBinarySearch, (app::ScenesManagerBehaviourUtility_SceneMetaAndData__Array * array, int32_t index, int32_t length, app::ScenesManagerBehaviourUtility_SceneMetaAndData value, app::IComparer_1_ScenesManagerBehaviourUtility_SceneMetaAndData_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8AD30, void, SwapIfGreater, (app::ScenesManagerBehaviourUtility_SceneMetaAndData__Array * keys, app::Comparison_1_ScenesManagerBehaviourUtility_SceneMetaAndData_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02C8AEE0, void, Swap, (app::ScenesManagerBehaviourUtility_SceneMetaAndData__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::ScenesManagerBehaviourUtility_SceneMetaAndData__Array * keys, int32_t left, int32_t length, app::Comparison_1_ScenesManagerBehaviourUtility_SceneMetaAndData_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::ScenesManagerBehaviourUtility_SceneMetaAndData__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_ScenesManagerBehaviourUtility_SceneMetaAndData_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8AF80, int32_t, PickPivotAndPartition, (app::ScenesManagerBehaviourUtility_SceneMetaAndData__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_ScenesManagerBehaviourUtility_SceneMetaAndData_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::ScenesManagerBehaviourUtility_SceneMetaAndData__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_ScenesManagerBehaviourUtility_SceneMetaAndData_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8B3D0, void, DownHeap, (app::ScenesManagerBehaviourUtility_SceneMetaAndData__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_ScenesManagerBehaviourUtility_SceneMetaAndData_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8B740, void, InsertionSort, (app::ScenesManagerBehaviourUtility_SceneMetaAndData__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_ScenesManagerBehaviourUtility_SceneMetaAndData_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_ScenesManagerBehaviourUtility_SceneMetaAndData_
