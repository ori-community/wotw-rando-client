#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Comparison_1_Moon_Vitals_DamageProcessHelper_SortedDamageEntry_.h>
#include <Modloader/app/structs/IComparer_1_Moon_Vitals_DamageProcessHelper_SortedDamageEntry_.h>
#include <Modloader/app/structs/Vitals_DamageProcessHelper_SortedDamageEntry.h>
#include <Modloader/app/structs/Vitals_DamageProcessHelper_SortedDamageEntry__Array.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_Moon_Vitals_DamageProcessHelper_SortedDamageEntry_ {
    IL2CPP_REGISTER_METHOD(
        0x02F77F40,
        void,
        Sort_1,
        app::Vitals_DamageProcessHelper_SortedDamageEntry__Array* keys,
        int32_t index,
        int32_t length,
        app::IComparer_1_Moon_Vitals_DamageProcessHelper_SortedDamageEntry_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02F78260,
        int32_t,
        BinarySearch,
        app::Vitals_DamageProcessHelper_SortedDamageEntry__Array* array,
        int32_t index,
        int32_t length,
        app::Vitals_DamageProcessHelper_SortedDamageEntry value,
        app::IComparer_1_Moon_Vitals_DamageProcessHelper_SortedDamageEntry_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02F78410,
        void,
        Sort_2,
        app::Vitals_DamageProcessHelper_SortedDamageEntry__Array* keys,
        int32_t index,
        int32_t length,
        app::Comparison_1_Moon_Vitals_DamageProcessHelper_SortedDamageEntry_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C8BFB0,
        int32_t,
        InternalBinarySearch,
        app::Vitals_DamageProcessHelper_SortedDamageEntry__Array* array,
        int32_t index,
        int32_t length,
        app::Vitals_DamageProcessHelper_SortedDamageEntry value,
        app::IComparer_1_Moon_Vitals_DamageProcessHelper_SortedDamageEntry_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C8C170,
        void,
        SwapIfGreater,
        app::Vitals_DamageProcessHelper_SortedDamageEntry__Array* keys,
        app::Comparison_1_Moon_Vitals_DamageProcessHelper_SortedDamageEntry_* comparer,
        int32_t a,
        int32_t b
    )
    IL2CPP_REGISTER_METHOD(0x02C8C330, void, Swap, app::Vitals_DamageProcessHelper_SortedDamageEntry__Array* a, int32_t i, int32_t j)
    IL2CPP_REGISTER_METHOD(
        0x02C86EC0,
        void,
        IntrospectiveSort,
        app::Vitals_DamageProcessHelper_SortedDamageEntry__Array* keys,
        int32_t left,
        int32_t length,
        app::Comparison_1_Moon_Vitals_DamageProcessHelper_SortedDamageEntry_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C86FB0,
        void,
        IntroSort,
        app::Vitals_DamageProcessHelper_SortedDamageEntry__Array* keys,
        int32_t lo,
        int32_t hi,
        int32_t depth_limit,
        app::Comparison_1_Moon_Vitals_DamageProcessHelper_SortedDamageEntry_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C8C3D0,
        int32_t,
        PickPivotAndPartition,
        app::Vitals_DamageProcessHelper_SortedDamageEntry__Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_Moon_Vitals_DamageProcessHelper_SortedDamageEntry_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C87750,
        void,
        Heapsort,
        app::Vitals_DamageProcessHelper_SortedDamageEntry__Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_Moon_Vitals_DamageProcessHelper_SortedDamageEntry_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C8C820,
        void,
        DownHeap,
        app::Vitals_DamageProcessHelper_SortedDamageEntry__Array* keys,
        int32_t i,
        int32_t n,
        int32_t lo,
        app::Comparison_1_Moon_Vitals_DamageProcessHelper_SortedDamageEntry_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C8CBA0,
        void,
        InsertionSort,
        app::Vitals_DamageProcessHelper_SortedDamageEntry__Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_Moon_Vitals_DamageProcessHelper_SortedDamageEntry_* comparer
    )
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_Moon_Vitals_DamageProcessHelper_SortedDamageEntry_
