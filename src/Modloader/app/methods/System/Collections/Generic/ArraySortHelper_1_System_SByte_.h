#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Comparison_1_SByte_.h>
#include <Modloader/app/structs/IComparer_1_System_SByte_.h>
#include <Modloader/app/structs/SByte__Array.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_System_SByte_ {
    IL2CPP_REGISTER_METHOD(0x02F7CE00, void, Sort_1, app::SByte__Array* keys, int32_t index, int32_t length, app::IComparer_1_System_SByte_* comparer)
    IL2CPP_REGISTER_METHOD(
        0x02F7D120,
        int32_t,
        BinarySearch,
        app::SByte__Array* array,
        int32_t index,
        int32_t length,
        int8_t value,
        app::IComparer_1_System_SByte_* comparer
    )
    IL2CPP_REGISTER_METHOD(0x02F7D2C0, void, Sort_2, app::SByte__Array* keys, int32_t index, int32_t length, app::Comparison_1_SByte_* comparer)
    IL2CPP_REGISTER_METHOD(
        0x02F7D410,
        int32_t,
        InternalBinarySearch,
        app::SByte__Array* array,
        int32_t index,
        int32_t length,
        int8_t value,
        app::IComparer_1_System_SByte_* comparer
    )
    IL2CPP_REGISTER_METHOD(0x02F7D530, void, SwapIfGreater, app::SByte__Array* keys, app::Comparison_1_SByte_* comparer, int32_t a, int32_t b)
    IL2CPP_REGISTER_METHOD(0x02F7D6B0, void, Swap, app::SByte__Array* a, int32_t i, int32_t j)
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, app::SByte__Array* keys, int32_t left, int32_t length, app::Comparison_1_SByte_* comparer)
    IL2CPP_REGISTER_METHOD(
        0x02C86FB0,
        void,
        IntroSort,
        app::SByte__Array* keys,
        int32_t lo,
        int32_t hi,
        int32_t depth_limit,
        app::Comparison_1_SByte_* comparer
    )
    IL2CPP_REGISTER_METHOD(0x02F7D730, int32_t, PickPivotAndPartition, app::SByte__Array* keys, int32_t lo, int32_t hi, app::Comparison_1_SByte_* comparer)
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, app::SByte__Array* keys, int32_t lo, int32_t hi, app::Comparison_1_SByte_* comparer)
    IL2CPP_REGISTER_METHOD(0x02F7DAF0, void, DownHeap, app::SByte__Array* keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_SByte_* comparer)
    IL2CPP_REGISTER_METHOD(0x02F7DDB0, void, InsertionSort, app::SByte__Array* keys, int32_t lo, int32_t hi, app::Comparison_1_SByte_* comparer)
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_System_SByte_
