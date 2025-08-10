#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Comparison_1_Moon_NewSetupStateControllerResolver_SerializedUberStateControllerLinkItem_.h>
#include <Modloader/app/structs/IComparer_1_Moon_NewSetupStateControllerResolver_SerializedUberStateControllerLinkItem_.h>
#include <Modloader/app/structs/NewSetupStateControllerResolver_SerializedUberStateControllerLinkItem.h>
#include <Modloader/app/structs/NewSetupStateControllerResolver_SerializedUberStateControllerLinkItem__Array.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_Moon_NewSetupStateControllerResolver_SerializedUberStateControllerLinkItem_ {
    IL2CPP_REGISTER_METHOD(
        0x02F38F70,
        void,
        Sort_1,
        app::NewSetupStateControllerResolver_SerializedUberStateControllerLinkItem__Array* keys,
        int32_t index,
        int32_t length,
        app::IComparer_1_Moon_NewSetupStateControllerResolver_SerializedUberStateControllerLinkItem_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02F39290,
        int32_t,
        BinarySearch,
        app::NewSetupStateControllerResolver_SerializedUberStateControllerLinkItem__Array* array,
        int32_t index,
        int32_t length,
        app::NewSetupStateControllerResolver_SerializedUberStateControllerLinkItem value,
        app::IComparer_1_Moon_NewSetupStateControllerResolver_SerializedUberStateControllerLinkItem_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02F39440,
        void,
        Sort_2,
        app::NewSetupStateControllerResolver_SerializedUberStateControllerLinkItem__Array* keys,
        int32_t index,
        int32_t length,
        app::Comparison_1_Moon_NewSetupStateControllerResolver_SerializedUberStateControllerLinkItem_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C898B0,
        int32_t,
        InternalBinarySearch,
        app::NewSetupStateControllerResolver_SerializedUberStateControllerLinkItem__Array* array,
        int32_t index,
        int32_t length,
        app::NewSetupStateControllerResolver_SerializedUberStateControllerLinkItem value,
        app::IComparer_1_Moon_NewSetupStateControllerResolver_SerializedUberStateControllerLinkItem_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C89A40,
        void,
        SwapIfGreater,
        app::NewSetupStateControllerResolver_SerializedUberStateControllerLinkItem__Array* keys,
        app::Comparison_1_Moon_NewSetupStateControllerResolver_SerializedUberStateControllerLinkItem_* comparer,
        int32_t a,
        int32_t b
    )
    IL2CPP_REGISTER_METHOD(0x02C89BD0, void, Swap, app::NewSetupStateControllerResolver_SerializedUberStateControllerLinkItem__Array* a, int32_t i, int32_t j)
    IL2CPP_REGISTER_METHOD(
        0x02C86EC0,
        void,
        IntrospectiveSort,
        app::NewSetupStateControllerResolver_SerializedUberStateControllerLinkItem__Array* keys,
        int32_t left,
        int32_t length,
        app::Comparison_1_Moon_NewSetupStateControllerResolver_SerializedUberStateControllerLinkItem_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C86FB0,
        void,
        IntroSort,
        app::NewSetupStateControllerResolver_SerializedUberStateControllerLinkItem__Array* keys,
        int32_t lo,
        int32_t hi,
        int32_t depth_limit,
        app::Comparison_1_Moon_NewSetupStateControllerResolver_SerializedUberStateControllerLinkItem_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C89C60,
        int32_t,
        PickPivotAndPartition,
        app::NewSetupStateControllerResolver_SerializedUberStateControllerLinkItem__Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_Moon_NewSetupStateControllerResolver_SerializedUberStateControllerLinkItem_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C87750,
        void,
        Heapsort,
        app::NewSetupStateControllerResolver_SerializedUberStateControllerLinkItem__Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_Moon_NewSetupStateControllerResolver_SerializedUberStateControllerLinkItem_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C8A050,
        void,
        DownHeap,
        app::NewSetupStateControllerResolver_SerializedUberStateControllerLinkItem__Array* keys,
        int32_t i,
        int32_t n,
        int32_t lo,
        app::Comparison_1_Moon_NewSetupStateControllerResolver_SerializedUberStateControllerLinkItem_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C8A330,
        void,
        InsertionSort,
        app::NewSetupStateControllerResolver_SerializedUberStateControllerLinkItem__Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_Moon_NewSetupStateControllerResolver_SerializedUberStateControllerLinkItem_* comparer
    )
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_Moon_NewSetupStateControllerResolver_SerializedUberStateControllerLinkItem_
