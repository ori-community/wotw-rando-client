#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Comparison_1_MeshTrail_MeshTrailEmitter_.h>
#include <Modloader/app/structs/IComparer_1_MeshTrail_MeshTrailEmitter_.h>
#include <Modloader/app/structs/MeshTrail_MeshTrailEmitter.h>
#include <Modloader/app/structs/MeshTrail_MeshTrailEmitter__Array.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_MeshTrail_MeshTrailEmitter_ {
    IL2CPP_REGISTER_METHOD(
        0x02F61B70,
        void,
        Sort_1,
        app::MeshTrail_MeshTrailEmitter__Array* keys,
        int32_t index,
        int32_t length,
        app::IComparer_1_MeshTrail_MeshTrailEmitter_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02F61E90,
        int32_t,
        BinarySearch,
        app::MeshTrail_MeshTrailEmitter__Array* array,
        int32_t index,
        int32_t length,
        app::MeshTrail_MeshTrailEmitter value,
        app::IComparer_1_MeshTrail_MeshTrailEmitter_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02F62060,
        void,
        Sort_2,
        app::MeshTrail_MeshTrailEmitter__Array* keys,
        int32_t index,
        int32_t length,
        app::Comparison_1_MeshTrail_MeshTrailEmitter_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C8EE50,
        int32_t,
        InternalBinarySearch,
        app::MeshTrail_MeshTrailEmitter__Array* array,
        int32_t index,
        int32_t length,
        app::MeshTrail_MeshTrailEmitter value,
        app::IComparer_1_MeshTrail_MeshTrailEmitter_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C8EFD0,
        void,
        SwapIfGreater,
        app::MeshTrail_MeshTrailEmitter__Array* keys,
        app::Comparison_1_MeshTrail_MeshTrailEmitter_* comparer,
        int32_t a,
        int32_t b
    )
    IL2CPP_REGISTER_METHOD(0x02C8F1D0, void, Swap, app::MeshTrail_MeshTrailEmitter__Array* a, int32_t i, int32_t j)
    IL2CPP_REGISTER_METHOD(
        0x02C86EC0,
        void,
        IntrospectiveSort,
        app::MeshTrail_MeshTrailEmitter__Array* keys,
        int32_t left,
        int32_t length,
        app::Comparison_1_MeshTrail_MeshTrailEmitter_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C86FB0,
        void,
        IntroSort,
        app::MeshTrail_MeshTrailEmitter__Array* keys,
        int32_t lo,
        int32_t hi,
        int32_t depth_limit,
        app::Comparison_1_MeshTrail_MeshTrailEmitter_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C8F290,
        int32_t,
        PickPivotAndPartition,
        app::MeshTrail_MeshTrailEmitter__Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_MeshTrail_MeshTrailEmitter_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C87750,
        void,
        Heapsort,
        app::MeshTrail_MeshTrailEmitter__Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_MeshTrail_MeshTrailEmitter_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C8F750,
        void,
        DownHeap,
        app::MeshTrail_MeshTrailEmitter__Array* keys,
        int32_t i,
        int32_t n,
        int32_t lo,
        app::Comparison_1_MeshTrail_MeshTrailEmitter_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C8FB70,
        void,
        InsertionSort,
        app::MeshTrail_MeshTrailEmitter__Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_MeshTrail_MeshTrailEmitter_* comparer
    )
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_MeshTrail_MeshTrailEmitter_
