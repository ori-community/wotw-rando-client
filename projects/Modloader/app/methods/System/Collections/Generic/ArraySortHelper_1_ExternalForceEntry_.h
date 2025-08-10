#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Comparison_1_ExternalForceEntry_.h>
#include <Modloader/app/structs/ExternalForceEntry.h>
#include <Modloader/app/structs/ExternalForceEntry__Array.h>
#include <Modloader/app/structs/IComparer_1_ExternalForceEntry_.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_ExternalForceEntry_ {
    IL2CPP_REGISTER_METHOD(
        0x02F316F0,
        void,
        Sort_1,
        app::ExternalForceEntry__Array* keys,
        int32_t index,
        int32_t length,
        app::IComparer_1_ExternalForceEntry_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02F31A10,
        int32_t,
        BinarySearch,
        app::ExternalForceEntry__Array* array,
        int32_t index,
        int32_t length,
        app::ExternalForceEntry value,
        app::IComparer_1_ExternalForceEntry_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02F31BE0,
        void,
        Sort_2,
        app::ExternalForceEntry__Array* keys,
        int32_t index,
        int32_t length,
        app::Comparison_1_ExternalForceEntry_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02F31D30,
        int32_t,
        InternalBinarySearch,
        app::ExternalForceEntry__Array* array,
        int32_t index,
        int32_t length,
        app::ExternalForceEntry value,
        app::IComparer_1_ExternalForceEntry_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02F31EA0,
        void,
        SwapIfGreater,
        app::ExternalForceEntry__Array* keys,
        app::Comparison_1_ExternalForceEntry_* comparer,
        int32_t a,
        int32_t b
    )
    IL2CPP_REGISTER_METHOD(0x02F32090, void, Swap, app::ExternalForceEntry__Array* a, int32_t i, int32_t j)
    IL2CPP_REGISTER_METHOD(
        0x02C86EC0,
        void,
        IntrospectiveSort,
        app::ExternalForceEntry__Array* keys,
        int32_t left,
        int32_t length,
        app::Comparison_1_ExternalForceEntry_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C86FB0,
        void,
        IntroSort,
        app::ExternalForceEntry__Array* keys,
        int32_t lo,
        int32_t hi,
        int32_t depth_limit,
        app::Comparison_1_ExternalForceEntry_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02F32150,
        int32_t,
        PickPivotAndPartition,
        app::ExternalForceEntry__Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_ExternalForceEntry_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C87750,
        void,
        Heapsort,
        app::ExternalForceEntry__Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_ExternalForceEntry_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02F325F0,
        void,
        DownHeap,
        app::ExternalForceEntry__Array* keys,
        int32_t i,
        int32_t n,
        int32_t lo,
        app::Comparison_1_ExternalForceEntry_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02F329C0,
        void,
        InsertionSort,
        app::ExternalForceEntry__Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_ExternalForceEntry_* comparer
    )
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_ExternalForceEntry_
