#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Comparison_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_VectorRequest_.h>
#include <Modloader/app/structs/IComparer_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_VectorRequest_.h>
#include <Modloader/app/structs/UberShaderAnimatorStrategyExperimental_VectorRequest.h>
#include <Modloader/app/structs/UberShaderAnimatorStrategyExperimental_VectorRequest__Array.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_VectorRequest_ {
    IL2CPP_REGISTER_METHOD(
        0x02F71990,
        void,
        Sort_1,
        app::UberShaderAnimatorStrategyExperimental_VectorRequest__Array* keys,
        int32_t index,
        int32_t length,
        app::IComparer_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_VectorRequest_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02F71CB0,
        int32_t,
        BinarySearch,
        app::UberShaderAnimatorStrategyExperimental_VectorRequest__Array* array,
        int32_t index,
        int32_t length,
        app::UberShaderAnimatorStrategyExperimental_VectorRequest value,
        app::IComparer_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_VectorRequest_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02F71E60,
        void,
        Sort_2,
        app::UberShaderAnimatorStrategyExperimental_VectorRequest__Array* keys,
        int32_t index,
        int32_t length,
        app::Comparison_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_VectorRequest_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C8BFB0,
        int32_t,
        InternalBinarySearch,
        app::UberShaderAnimatorStrategyExperimental_VectorRequest__Array* array,
        int32_t index,
        int32_t length,
        app::UberShaderAnimatorStrategyExperimental_VectorRequest value,
        app::IComparer_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_VectorRequest_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C8C170,
        void,
        SwapIfGreater,
        app::UberShaderAnimatorStrategyExperimental_VectorRequest__Array* keys,
        app::Comparison_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_VectorRequest_* comparer,
        int32_t a,
        int32_t b
    )
    IL2CPP_REGISTER_METHOD(0x02C8C330, void, Swap, app::UberShaderAnimatorStrategyExperimental_VectorRequest__Array* a, int32_t i, int32_t j)
    IL2CPP_REGISTER_METHOD(
        0x02C86EC0,
        void,
        IntrospectiveSort,
        app::UberShaderAnimatorStrategyExperimental_VectorRequest__Array* keys,
        int32_t left,
        int32_t length,
        app::Comparison_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_VectorRequest_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C86FB0,
        void,
        IntroSort,
        app::UberShaderAnimatorStrategyExperimental_VectorRequest__Array* keys,
        int32_t lo,
        int32_t hi,
        int32_t depth_limit,
        app::Comparison_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_VectorRequest_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C8C3D0,
        int32_t,
        PickPivotAndPartition,
        app::UberShaderAnimatorStrategyExperimental_VectorRequest__Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_VectorRequest_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C87750,
        void,
        Heapsort,
        app::UberShaderAnimatorStrategyExperimental_VectorRequest__Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_VectorRequest_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C8C820,
        void,
        DownHeap,
        app::UberShaderAnimatorStrategyExperimental_VectorRequest__Array* keys,
        int32_t i,
        int32_t n,
        int32_t lo,
        app::Comparison_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_VectorRequest_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C8CBA0,
        void,
        InsertionSort,
        app::UberShaderAnimatorStrategyExperimental_VectorRequest__Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_VectorRequest_* comparer
    )
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_VectorRequest_
