#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Comparison_1_Decimal_.h>
#include <Modloader/app/structs/Decimal.h>
#include <Modloader/app/structs/Decimal__Array.h>
#include <Modloader/app/structs/IComparer_1_System_Decimal_.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_System_Decimal_ {
    IL2CPP_REGISTER_METHOD(0x02FFD760, void, Sort_1, app::Decimal__Array* keys, int32_t index, int32_t length, app::IComparer_1_System_Decimal_* comparer)
    IL2CPP_REGISTER_METHOD(
        0x02FFDA80,
        int32_t,
        BinarySearch,
        app::Decimal__Array* array,
        int32_t index,
        int32_t length,
        app::Decimal value,
        app::IComparer_1_System_Decimal_* comparer
    )
    IL2CPP_REGISTER_METHOD(0x02FFDC30, void, Sort_2, app::Decimal__Array* keys, int32_t index, int32_t length, app::Comparison_1_Decimal_* comparer)
    IL2CPP_REGISTER_METHOD(
        0x02C898B0,
        int32_t,
        InternalBinarySearch,
        app::Decimal__Array* array,
        int32_t index,
        int32_t length,
        app::Decimal value,
        app::IComparer_1_System_Decimal_* comparer
    )
    IL2CPP_REGISTER_METHOD(0x02C89A40, void, SwapIfGreater, app::Decimal__Array* keys, app::Comparison_1_Decimal_* comparer, int32_t a, int32_t b)
    IL2CPP_REGISTER_METHOD(0x02C89BD0, void, Swap, app::Decimal__Array* a, int32_t i, int32_t j)
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, app::Decimal__Array* keys, int32_t left, int32_t length, app::Comparison_1_Decimal_* comparer)
    IL2CPP_REGISTER_METHOD(
        0x02C86FB0,
        void,
        IntroSort,
        app::Decimal__Array* keys,
        int32_t lo,
        int32_t hi,
        int32_t depth_limit,
        app::Comparison_1_Decimal_* comparer
    )
    IL2CPP_REGISTER_METHOD(0x02C89C60, int32_t, PickPivotAndPartition, app::Decimal__Array* keys, int32_t lo, int32_t hi, app::Comparison_1_Decimal_* comparer)
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, app::Decimal__Array* keys, int32_t lo, int32_t hi, app::Comparison_1_Decimal_* comparer)
    IL2CPP_REGISTER_METHOD(0x02C8A050, void, DownHeap, app::Decimal__Array* keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_Decimal_* comparer)
    IL2CPP_REGISTER_METHOD(0x02C8A330, void, InsertionSort, app::Decimal__Array* keys, int32_t lo, int32_t hi, app::Comparison_1_Decimal_* comparer)
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_System_Decimal_
