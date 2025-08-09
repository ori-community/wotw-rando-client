#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Comparison_1_Moon_TentacleStabBehaviour_TentacleAttack_.h>
#include <Modloader/app/structs/IComparer_1_Moon_TentacleStabBehaviour_TentacleAttack_.h>
#include <Modloader/app/structs/TentacleStabBehaviour_TentacleAttack.h>
#include <Modloader/app/structs/TentacleStabBehaviour_TentacleAttack__Array.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_Moon_TentacleStabBehaviour_TentacleAttack_ {
    IL2CPP_REGISTER_METHOD(
        0x02F3A1C0,
        void,
        Sort_1,
        app::TentacleStabBehaviour_TentacleAttack__Array* keys,
        int32_t index,
        int32_t length,
        app::IComparer_1_Moon_TentacleStabBehaviour_TentacleAttack_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02F3A4E0,
        int32_t,
        BinarySearch,
        app::TentacleStabBehaviour_TentacleAttack__Array* array,
        int32_t index,
        int32_t length,
        app::TentacleStabBehaviour_TentacleAttack value,
        app::IComparer_1_Moon_TentacleStabBehaviour_TentacleAttack_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02F3A690,
        void,
        Sort_2,
        app::TentacleStabBehaviour_TentacleAttack__Array* keys,
        int32_t index,
        int32_t length,
        app::Comparison_1_Moon_TentacleStabBehaviour_TentacleAttack_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C8BFB0,
        int32_t,
        InternalBinarySearch,
        app::TentacleStabBehaviour_TentacleAttack__Array* array,
        int32_t index,
        int32_t length,
        app::TentacleStabBehaviour_TentacleAttack value,
        app::IComparer_1_Moon_TentacleStabBehaviour_TentacleAttack_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C8C170,
        void,
        SwapIfGreater,
        app::TentacleStabBehaviour_TentacleAttack__Array* keys,
        app::Comparison_1_Moon_TentacleStabBehaviour_TentacleAttack_* comparer,
        int32_t a,
        int32_t b
    )
    IL2CPP_REGISTER_METHOD(0x02C8C330, void, Swap, app::TentacleStabBehaviour_TentacleAttack__Array* a, int32_t i, int32_t j)
    IL2CPP_REGISTER_METHOD(
        0x02C86EC0,
        void,
        IntrospectiveSort,
        app::TentacleStabBehaviour_TentacleAttack__Array* keys,
        int32_t left,
        int32_t length,
        app::Comparison_1_Moon_TentacleStabBehaviour_TentacleAttack_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C86FB0,
        void,
        IntroSort,
        app::TentacleStabBehaviour_TentacleAttack__Array* keys,
        int32_t lo,
        int32_t hi,
        int32_t depth_limit,
        app::Comparison_1_Moon_TentacleStabBehaviour_TentacleAttack_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C8C3D0,
        int32_t,
        PickPivotAndPartition,
        app::TentacleStabBehaviour_TentacleAttack__Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_Moon_TentacleStabBehaviour_TentacleAttack_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C87750,
        void,
        Heapsort,
        app::TentacleStabBehaviour_TentacleAttack__Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_Moon_TentacleStabBehaviour_TentacleAttack_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C8C820,
        void,
        DownHeap,
        app::TentacleStabBehaviour_TentacleAttack__Array* keys,
        int32_t i,
        int32_t n,
        int32_t lo,
        app::Comparison_1_Moon_TentacleStabBehaviour_TentacleAttack_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C8CBA0,
        void,
        InsertionSort,
        app::TentacleStabBehaviour_TentacleAttack__Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_Moon_TentacleStabBehaviour_TentacleAttack_* comparer
    )
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_Moon_TentacleStabBehaviour_TentacleAttack_
