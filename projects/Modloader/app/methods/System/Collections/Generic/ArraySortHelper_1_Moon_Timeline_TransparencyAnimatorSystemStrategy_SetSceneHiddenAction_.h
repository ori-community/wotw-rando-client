#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TransparencyAnimatorSystemStrategy_SetSceneHiddenAction__Array.h>
#include <Modloader/app/structs/Comparison_1_Moon_Timeline_TransparencyAnimatorSystemStrategy_SetSceneHiddenAction_.h>
#include <Modloader/app/structs/IComparer_1_Moon_Timeline_TransparencyAnimatorSystemStrategy_SetSceneHiddenAction_.h>
#include <Modloader/app/structs/TransparencyAnimatorSystemStrategy_SetSceneHiddenAction.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_Moon_Timeline_TransparencyAnimatorSystemStrategy_SetSceneHiddenAction_ {
    IL2CPP_REGISTER_METHOD(0x02F3C060, void, Sort_1, (app::TransparencyAnimatorSystemStrategy_SetSceneHiddenAction__Array * keys, int32_t index, int32_t length, app::IComparer_1_Moon_Timeline_TransparencyAnimatorSystemStrategy_SetSceneHiddenAction_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F3C380, int32_t, BinarySearch, (app::TransparencyAnimatorSystemStrategy_SetSceneHiddenAction__Array * array, int32_t index, int32_t length, app::TransparencyAnimatorSystemStrategy_SetSceneHiddenAction value, app::IComparer_1_Moon_Timeline_TransparencyAnimatorSystemStrategy_SetSceneHiddenAction_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F3C530, void, Sort_2, (app::TransparencyAnimatorSystemStrategy_SetSceneHiddenAction__Array * keys, int32_t index, int32_t length, app::Comparison_1_Moon_Timeline_TransparencyAnimatorSystemStrategy_SetSceneHiddenAction_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C898B0, int32_t, InternalBinarySearch, (app::TransparencyAnimatorSystemStrategy_SetSceneHiddenAction__Array * array, int32_t index, int32_t length, app::TransparencyAnimatorSystemStrategy_SetSceneHiddenAction value, app::IComparer_1_Moon_Timeline_TransparencyAnimatorSystemStrategy_SetSceneHiddenAction_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C89A40, void, SwapIfGreater, (app::TransparencyAnimatorSystemStrategy_SetSceneHiddenAction__Array * keys, app::Comparison_1_Moon_Timeline_TransparencyAnimatorSystemStrategy_SetSceneHiddenAction_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02C89BD0, void, Swap, (app::TransparencyAnimatorSystemStrategy_SetSceneHiddenAction__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::TransparencyAnimatorSystemStrategy_SetSceneHiddenAction__Array * keys, int32_t left, int32_t length, app::Comparison_1_Moon_Timeline_TransparencyAnimatorSystemStrategy_SetSceneHiddenAction_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::TransparencyAnimatorSystemStrategy_SetSceneHiddenAction__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_Moon_Timeline_TransparencyAnimatorSystemStrategy_SetSceneHiddenAction_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C89C60, int32_t, PickPivotAndPartition, (app::TransparencyAnimatorSystemStrategy_SetSceneHiddenAction__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Moon_Timeline_TransparencyAnimatorSystemStrategy_SetSceneHiddenAction_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::TransparencyAnimatorSystemStrategy_SetSceneHiddenAction__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Moon_Timeline_TransparencyAnimatorSystemStrategy_SetSceneHiddenAction_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8A050, void, DownHeap, (app::TransparencyAnimatorSystemStrategy_SetSceneHiddenAction__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_Moon_Timeline_TransparencyAnimatorSystemStrategy_SetSceneHiddenAction_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8A330, void, InsertionSort, (app::TransparencyAnimatorSystemStrategy_SetSceneHiddenAction__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Moon_Timeline_TransparencyAnimatorSystemStrategy_SetSceneHiddenAction_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_Moon_Timeline_TransparencyAnimatorSystemStrategy_SetSceneHiddenAction_
