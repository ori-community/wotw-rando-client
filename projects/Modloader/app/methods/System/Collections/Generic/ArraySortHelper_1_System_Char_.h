#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/IComparer_1_System_Char_.h>
#include <Modloader/app/structs/Comparison_1_Char_.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_System_Char_ {
    IL2CPP_REGISTER_METHOD(0x02FF4C40, void, Sort_1, (app::Char__Array * keys, int32_t index, int32_t length, app::IComparer_1_System_Char_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0472EBE8, ArraySortHelper_1_System_Char__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FF4F60, int32_t, BinarySearch, (app::Char__Array * array, int32_t index, int32_t length, uint16_t value, app::IComparer_1_System_Char_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04755670, ArraySortHelper_1_System_Char__BinarySearch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FF5100, void, Sort_2, (app::Char__Array * keys, int32_t index, int32_t length, app::Comparison_1_Char_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04703368, ArraySortHelper_1_System_Char__Sort_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F7FD80, int32_t, InternalBinarySearch, (app::Char__Array * array, int32_t index, int32_t length, uint16_t value, app::IComparer_1_System_Char_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F7FEA0, void, SwapIfGreater, (app::Char__Array * keys, app::Comparison_1_Char_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02F80030, void, Swap, (app::Char__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::Char__Array * keys, int32_t left, int32_t length, app::Comparison_1_Char_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::Char__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_Char_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F800B0, int32_t, PickPivotAndPartition, (app::Char__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Char_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::Char__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Char_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F80480, void, DownHeap, (app::Char__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_Char_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F80750, void, InsertionSort, (app::Char__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Char_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_System_Char_
