#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Comparison_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_Request_.h>
#include <Modloader/app/structs/ExperimentalTransparencyAnimatorSystemStrategy_Request.h>
#include <Modloader/app/structs/ExperimentalTransparencyAnimatorSystemStrategy_Request__Array.h>
#include <Modloader/app/structs/IComparer_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_Request_.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_Request_ {
    IL2CPP_REGISTER_METHOD(
        0x02F3A7E0,
        void,
        Sort_1,
        app::ExperimentalTransparencyAnimatorSystemStrategy_Request__Array* keys,
        int32_t index,
        int32_t length,
        app::IComparer_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_Request_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02F3AB00,
        int32_t,
        BinarySearch,
        app::ExperimentalTransparencyAnimatorSystemStrategy_Request__Array* array,
        int32_t index,
        int32_t length,
        app::ExperimentalTransparencyAnimatorSystemStrategy_Request value,
        app::IComparer_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_Request_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02F3ACB0,
        void,
        Sort_2,
        app::ExperimentalTransparencyAnimatorSystemStrategy_Request__Array* keys,
        int32_t index,
        int32_t length,
        app::Comparison_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_Request_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C884A0,
        int32_t,
        InternalBinarySearch,
        app::ExperimentalTransparencyAnimatorSystemStrategy_Request__Array* array,
        int32_t index,
        int32_t length,
        app::ExperimentalTransparencyAnimatorSystemStrategy_Request value,
        app::IComparer_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_Request_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C88650,
        void,
        SwapIfGreater,
        app::ExperimentalTransparencyAnimatorSystemStrategy_Request__Array* keys,
        app::Comparison_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_Request_* comparer,
        int32_t a,
        int32_t b
    )
    IL2CPP_REGISTER_METHOD(0x02C88810, void, Swap, app::ExperimentalTransparencyAnimatorSystemStrategy_Request__Array* a, int32_t i, int32_t j)
    IL2CPP_REGISTER_METHOD(
        0x02C86EC0,
        void,
        IntrospectiveSort,
        app::ExperimentalTransparencyAnimatorSystemStrategy_Request__Array* keys,
        int32_t left,
        int32_t length,
        app::Comparison_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_Request_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C86FB0,
        void,
        IntroSort,
        app::ExperimentalTransparencyAnimatorSystemStrategy_Request__Array* keys,
        int32_t lo,
        int32_t hi,
        int32_t depth_limit,
        app::Comparison_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_Request_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C888B0,
        int32_t,
        PickPivotAndPartition,
        app::ExperimentalTransparencyAnimatorSystemStrategy_Request__Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_Request_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C87750,
        void,
        Heapsort,
        app::ExperimentalTransparencyAnimatorSystemStrategy_Request__Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_Request_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C88CE0,
        void,
        DownHeap,
        app::ExperimentalTransparencyAnimatorSystemStrategy_Request__Array* keys,
        int32_t i,
        int32_t n,
        int32_t lo,
        app::Comparison_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_Request_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C89050,
        void,
        InsertionSort,
        app::ExperimentalTransparencyAnimatorSystemStrategy_Request__Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_Request_* comparer
    )
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_Request_
