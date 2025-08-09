#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Comparison_1_DistortionAnimator_RendererData_Property_.h>
#include <Modloader/app/structs/DistortionAnimator_RendererData_Property.h>
#include <Modloader/app/structs/DistortionAnimator_RendererData_Property__Array.h>
#include <Modloader/app/structs/IComparer_1_DistortionAnimator_RendererData_Property_.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_DistortionAnimator_RendererData_Property_ {
    IL2CPP_REGISTER_METHOD(
        0x02F2FE70,
        void,
        Sort_1,
        app::DistortionAnimator_RendererData_Property__Array* keys,
        int32_t index,
        int32_t length,
        app::IComparer_1_DistortionAnimator_RendererData_Property_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02F30190,
        int32_t,
        BinarySearch,
        app::DistortionAnimator_RendererData_Property__Array* array,
        int32_t index,
        int32_t length,
        app::DistortionAnimator_RendererData_Property value,
        app::IComparer_1_DistortionAnimator_RendererData_Property_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02F30340,
        void,
        Sort_2,
        app::DistortionAnimator_RendererData_Property__Array* keys,
        int32_t index,
        int32_t length,
        app::Comparison_1_DistortionAnimator_RendererData_Property_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C8D410,
        int32_t,
        InternalBinarySearch,
        app::DistortionAnimator_RendererData_Property__Array* array,
        int32_t index,
        int32_t length,
        app::DistortionAnimator_RendererData_Property value,
        app::IComparer_1_DistortionAnimator_RendererData_Property_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C8D5C0,
        void,
        SwapIfGreater,
        app::DistortionAnimator_RendererData_Property__Array* keys,
        app::Comparison_1_DistortionAnimator_RendererData_Property_* comparer,
        int32_t a,
        int32_t b
    )
    IL2CPP_REGISTER_METHOD(0x02C8D780, void, Swap, app::DistortionAnimator_RendererData_Property__Array* a, int32_t i, int32_t j)
    IL2CPP_REGISTER_METHOD(
        0x02C86EC0,
        void,
        IntrospectiveSort,
        app::DistortionAnimator_RendererData_Property__Array* keys,
        int32_t left,
        int32_t length,
        app::Comparison_1_DistortionAnimator_RendererData_Property_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C86FB0,
        void,
        IntroSort,
        app::DistortionAnimator_RendererData_Property__Array* keys,
        int32_t lo,
        int32_t hi,
        int32_t depth_limit,
        app::Comparison_1_DistortionAnimator_RendererData_Property_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C8D820,
        int32_t,
        PickPivotAndPartition,
        app::DistortionAnimator_RendererData_Property__Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_DistortionAnimator_RendererData_Property_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C87750,
        void,
        Heapsort,
        app::DistortionAnimator_RendererData_Property__Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_DistortionAnimator_RendererData_Property_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C8DC50,
        void,
        DownHeap,
        app::DistortionAnimator_RendererData_Property__Array* keys,
        int32_t i,
        int32_t n,
        int32_t lo,
        app::Comparison_1_DistortionAnimator_RendererData_Property_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C8DFB0,
        void,
        InsertionSort,
        app::DistortionAnimator_RendererData_Property__Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_DistortionAnimator_RendererData_Property_* comparer
    )
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_DistortionAnimator_RendererData_Property_
