#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Comparison_1_EntityReactions_ReactionInterruptionSuspensionEntry_.h>
#include <Modloader/app/structs/EntityReactions_ReactionInterruptionSuspensionEntry.h>
#include <Modloader/app/structs/EntityReactions_ReactionInterruptionSuspensionEntry__Array.h>
#include <Modloader/app/structs/IComparer_1_EntityReactions_ReactionInterruptionSuspensionEntry_.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_EntityReactions_ReactionInterruptionSuspensionEntry_ {
    IL2CPP_REGISTER_METHOD(
        0x02F310D0,
        void,
        Sort_1,
        app::EntityReactions_ReactionInterruptionSuspensionEntry__Array* keys,
        int32_t index,
        int32_t length,
        app::IComparer_1_EntityReactions_ReactionInterruptionSuspensionEntry_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02F313F0,
        int32_t,
        BinarySearch,
        app::EntityReactions_ReactionInterruptionSuspensionEntry__Array* array,
        int32_t index,
        int32_t length,
        app::EntityReactions_ReactionInterruptionSuspensionEntry value,
        app::IComparer_1_EntityReactions_ReactionInterruptionSuspensionEntry_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02F315A0,
        void,
        Sort_2,
        app::EntityReactions_ReactionInterruptionSuspensionEntry__Array* keys,
        int32_t index,
        int32_t length,
        app::Comparison_1_EntityReactions_ReactionInterruptionSuspensionEntry_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C898B0,
        int32_t,
        InternalBinarySearch,
        app::EntityReactions_ReactionInterruptionSuspensionEntry__Array* array,
        int32_t index,
        int32_t length,
        app::EntityReactions_ReactionInterruptionSuspensionEntry value,
        app::IComparer_1_EntityReactions_ReactionInterruptionSuspensionEntry_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C89A40,
        void,
        SwapIfGreater,
        app::EntityReactions_ReactionInterruptionSuspensionEntry__Array* keys,
        app::Comparison_1_EntityReactions_ReactionInterruptionSuspensionEntry_* comparer,
        int32_t a,
        int32_t b
    )
    IL2CPP_REGISTER_METHOD(0x02C89BD0, void, Swap, app::EntityReactions_ReactionInterruptionSuspensionEntry__Array* a, int32_t i, int32_t j)
    IL2CPP_REGISTER_METHOD(
        0x02C86EC0,
        void,
        IntrospectiveSort,
        app::EntityReactions_ReactionInterruptionSuspensionEntry__Array* keys,
        int32_t left,
        int32_t length,
        app::Comparison_1_EntityReactions_ReactionInterruptionSuspensionEntry_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C86FB0,
        void,
        IntroSort,
        app::EntityReactions_ReactionInterruptionSuspensionEntry__Array* keys,
        int32_t lo,
        int32_t hi,
        int32_t depth_limit,
        app::Comparison_1_EntityReactions_ReactionInterruptionSuspensionEntry_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C89C60,
        int32_t,
        PickPivotAndPartition,
        app::EntityReactions_ReactionInterruptionSuspensionEntry__Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_EntityReactions_ReactionInterruptionSuspensionEntry_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C87750,
        void,
        Heapsort,
        app::EntityReactions_ReactionInterruptionSuspensionEntry__Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_EntityReactions_ReactionInterruptionSuspensionEntry_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C8A050,
        void,
        DownHeap,
        app::EntityReactions_ReactionInterruptionSuspensionEntry__Array* keys,
        int32_t i,
        int32_t n,
        int32_t lo,
        app::Comparison_1_EntityReactions_ReactionInterruptionSuspensionEntry_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C8A330,
        void,
        InsertionSort,
        app::EntityReactions_ReactionInterruptionSuspensionEntry__Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_EntityReactions_ReactionInterruptionSuspensionEntry_* comparer
    )
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_EntityReactions_ReactionInterruptionSuspensionEntry_
