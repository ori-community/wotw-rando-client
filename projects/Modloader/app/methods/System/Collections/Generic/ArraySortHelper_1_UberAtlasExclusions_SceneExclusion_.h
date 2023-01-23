#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UberAtlasExclusions_SceneExclusion__Array.h>
#include <Modloader/app/structs/IComparer_1_UberAtlasExclusions_SceneExclusion_.h>
#include <Modloader/app/structs/UberAtlasExclusions_SceneExclusion.h>
#include <Modloader/app/structs/Comparison_1_UberAtlasExclusions_SceneExclusion_.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_UberAtlasExclusions_SceneExclusion_ {
    IL2CPP_REGISTER_METHOD(0x02F857E0, void, Sort_1, (app::UberAtlasExclusions_SceneExclusion__Array * keys, int32_t index, int32_t length, app::IComparer_1_UberAtlasExclusions_SceneExclusion_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04719F78, ArraySortHelper_1_UberAtlasExclusions_SceneExclusion__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F85B00, int32_t, BinarySearch, (app::UberAtlasExclusions_SceneExclusion__Array * array, int32_t index, int32_t length, app::UberAtlasExclusions_SceneExclusion value, app::IComparer_1_UberAtlasExclusions_SceneExclusion_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04752680, ArraySortHelper_1_UberAtlasExclusions_SceneExclusion__BinarySearch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F85CB0, void, Sort_2, (app::UberAtlasExclusions_SceneExclusion__Array * keys, int32_t index, int32_t length, app::Comparison_1_UberAtlasExclusions_SceneExclusion_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0473CC78, ArraySortHelper_1_UberAtlasExclusions_SceneExclusion__Sort_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C898B0, int32_t, InternalBinarySearch, (app::UberAtlasExclusions_SceneExclusion__Array * array, int32_t index, int32_t length, app::UberAtlasExclusions_SceneExclusion value, app::IComparer_1_UberAtlasExclusions_SceneExclusion_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C89A40, void, SwapIfGreater, (app::UberAtlasExclusions_SceneExclusion__Array * keys, app::Comparison_1_UberAtlasExclusions_SceneExclusion_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02C89BD0, void, Swap, (app::UberAtlasExclusions_SceneExclusion__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::UberAtlasExclusions_SceneExclusion__Array * keys, int32_t left, int32_t length, app::Comparison_1_UberAtlasExclusions_SceneExclusion_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::UberAtlasExclusions_SceneExclusion__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_UberAtlasExclusions_SceneExclusion_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C89C60, int32_t, PickPivotAndPartition, (app::UberAtlasExclusions_SceneExclusion__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UberAtlasExclusions_SceneExclusion_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::UberAtlasExclusions_SceneExclusion__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UberAtlasExclusions_SceneExclusion_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8A050, void, DownHeap, (app::UberAtlasExclusions_SceneExclusion__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_UberAtlasExclusions_SceneExclusion_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8A330, void, InsertionSort, (app::UberAtlasExclusions_SceneExclusion__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UberAtlasExclusions_SceneExclusion_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_UberAtlasExclusions_SceneExclusion_
