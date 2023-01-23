#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GeneralDebugMenuPage_SceneInfo__Array.h>
#include <Modloader/app/structs/IComparer_1_GeneralDebugMenuPage_SceneInfo_.h>
#include <Modloader/app/structs/GeneralDebugMenuPage_SceneInfo.h>
#include <Modloader/app/structs/Comparison_1_GeneralDebugMenuPage_SceneInfo_.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_GeneralDebugMenuPage_SceneInfo_ {
    IL2CPP_REGISTER_METHOD(0x02F5C550, void, Sort_1, (app::GeneralDebugMenuPage_SceneInfo__Array * keys, int32_t index, int32_t length, app::IComparer_1_GeneralDebugMenuPage_SceneInfo_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0473A490, ArraySortHelper_1_GeneralDebugMenuPage_SceneInfo__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F5C870, int32_t, BinarySearch, (app::GeneralDebugMenuPage_SceneInfo__Array * array, int32_t index, int32_t length, app::GeneralDebugMenuPage_SceneInfo value, app::IComparer_1_GeneralDebugMenuPage_SceneInfo_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04720D20, ArraySortHelper_1_GeneralDebugMenuPage_SceneInfo__BinarySearch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F5CA20, void, Sort_2, (app::GeneralDebugMenuPage_SceneInfo__Array * keys, int32_t index, int32_t length, app::Comparison_1_GeneralDebugMenuPage_SceneInfo_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0475A550, ArraySortHelper_1_GeneralDebugMenuPage_SceneInfo__Sort_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C898B0, int32_t, InternalBinarySearch, (app::GeneralDebugMenuPage_SceneInfo__Array * array, int32_t index, int32_t length, app::GeneralDebugMenuPage_SceneInfo value, app::IComparer_1_GeneralDebugMenuPage_SceneInfo_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C89A40, void, SwapIfGreater, (app::GeneralDebugMenuPage_SceneInfo__Array * keys, app::Comparison_1_GeneralDebugMenuPage_SceneInfo_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02C89BD0, void, Swap, (app::GeneralDebugMenuPage_SceneInfo__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::GeneralDebugMenuPage_SceneInfo__Array * keys, int32_t left, int32_t length, app::Comparison_1_GeneralDebugMenuPage_SceneInfo_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::GeneralDebugMenuPage_SceneInfo__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_GeneralDebugMenuPage_SceneInfo_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C89C60, int32_t, PickPivotAndPartition, (app::GeneralDebugMenuPage_SceneInfo__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_GeneralDebugMenuPage_SceneInfo_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::GeneralDebugMenuPage_SceneInfo__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_GeneralDebugMenuPage_SceneInfo_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8A050, void, DownHeap, (app::GeneralDebugMenuPage_SceneInfo__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_GeneralDebugMenuPage_SceneInfo_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8A330, void, InsertionSort, (app::GeneralDebugMenuPage_SceneInfo__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_GeneralDebugMenuPage_SceneInfo_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_GeneralDebugMenuPage_SceneInfo_
