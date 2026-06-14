#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Comparison_1_UnityEngine_UILineInfo_.h>
#include <Modloader/app/structs/IComparer_1_UnityEngine_UILineInfo_.h>
#include <Modloader/app/structs/UILineInfo.h>
#include <Modloader/app/structs/UILineInfo__Array.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_UnityEngine_UILineInfo_ {
    IL2CPP_REGISTER_METHOD(
        0x02F6F500,
        void,
        Sort_1,
        app::UILineInfo__Array* keys,
        int32_t index,
        int32_t length,
        app::IComparer_1_UnityEngine_UILineInfo_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02F6F820,
        int32_t,
        BinarySearch,
        app::UILineInfo__Array* array,
        int32_t index,
        int32_t length,
        app::UILineInfo value,
        app::IComparer_1_UnityEngine_UILineInfo_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02F6F9D0,
        void,
        Sort_2,
        app::UILineInfo__Array* keys,
        int32_t index,
        int32_t length,
        app::Comparison_1_UnityEngine_UILineInfo_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C898B0,
        int32_t,
        InternalBinarySearch,
        app::UILineInfo__Array* array,
        int32_t index,
        int32_t length,
        app::UILineInfo value,
        app::IComparer_1_UnityEngine_UILineInfo_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C89A40,
        void,
        SwapIfGreater,
        app::UILineInfo__Array* keys,
        app::Comparison_1_UnityEngine_UILineInfo_* comparer,
        int32_t a,
        int32_t b
    )
    IL2CPP_REGISTER_METHOD(0x02C89BD0, void, Swap, app::UILineInfo__Array* a, int32_t i, int32_t j)
    IL2CPP_REGISTER_METHOD(
        0x02C86EC0,
        void,
        IntrospectiveSort,
        app::UILineInfo__Array* keys,
        int32_t left,
        int32_t length,
        app::Comparison_1_UnityEngine_UILineInfo_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C86FB0,
        void,
        IntroSort,
        app::UILineInfo__Array* keys,
        int32_t lo,
        int32_t hi,
        int32_t depth_limit,
        app::Comparison_1_UnityEngine_UILineInfo_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C89C60,
        int32_t,
        PickPivotAndPartition,
        app::UILineInfo__Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_UnityEngine_UILineInfo_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C87750,
        void,
        Heapsort,
        app::UILineInfo__Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_UnityEngine_UILineInfo_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C8A050,
        void,
        DownHeap,
        app::UILineInfo__Array* keys,
        int32_t i,
        int32_t n,
        int32_t lo,
        app::Comparison_1_UnityEngine_UILineInfo_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C8A330,
        void,
        InsertionSort,
        app::UILineInfo__Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_UnityEngine_UILineInfo_* comparer
    )
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_UnityEngine_UILineInfo_
