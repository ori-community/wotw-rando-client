#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UInt32__Array.h>
#include <Modloader/app/structs/Comparison_1_UInt32_.h>
#include <Modloader/app/structs/IComparer_1_System_UInt32_.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_System_UInt32_ {
    IL2CPP_REGISTER_METHOD(0x02F80930, void, Sort_1, (app::UInt32__Array * keys, int32_t index, int32_t length, app::IComparer_1_System_UInt32_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F80C50, int32_t, BinarySearch, (app::UInt32__Array * array, int32_t index, int32_t length, uint32_t value, app::IComparer_1_System_UInt32_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F80DF0, void, Sort_2, (app::UInt32__Array * keys, int32_t index, int32_t length, app::Comparison_1_UInt32_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F80F40, int32_t, InternalBinarySearch, (app::UInt32__Array * array, int32_t index, int32_t length, uint32_t value, app::IComparer_1_System_UInt32_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F81060, void, SwapIfGreater, (app::UInt32__Array * keys, app::Comparison_1_UInt32_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02F811E0, void, Swap, (app::UInt32__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::UInt32__Array * keys, int32_t left, int32_t length, app::Comparison_1_UInt32_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::UInt32__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_UInt32_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F81260, int32_t, PickPivotAndPartition, (app::UInt32__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UInt32_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::UInt32__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UInt32_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F81610, void, DownHeap, (app::UInt32__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_UInt32_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F818D0, void, InsertionSort, (app::UInt32__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UInt32_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_System_UInt32_
