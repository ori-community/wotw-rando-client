#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Substr__Array.h>
#include <Modloader/app/structs/IComparer_1_Moon_Substr_.h>
#include <Modloader/app/structs/Substr.h>
#include <Modloader/app/structs/Comparison_1_Moon_Substr_.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_Moon_Substr_ {
    IL2CPP_REGISTER_METHOD(0x02F39BB0, void, Sort_1, (app::Substr__Array * keys, int32_t index, int32_t length, app::IComparer_1_Moon_Substr_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04759780, ArraySortHelper_1_Moon_Substr__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F39ED0, int32_t, BinarySearch, (app::Substr__Array * array, int32_t index, int32_t length, app::Substr value, app::IComparer_1_Moon_Substr_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0478EF38, ArraySortHelper_1_Moon_Substr__BinarySearch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F3A070, void, Sort_2, (app::Substr__Array * keys, int32_t index, int32_t length, app::Comparison_1_Moon_Substr_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04713628, ArraySortHelper_1_Moon_Substr__Sort_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F2B330, int32_t, InternalBinarySearch, (app::Substr__Array * array, int32_t index, int32_t length, app::Substr value, app::IComparer_1_Moon_Substr_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F2B450, void, SwapIfGreater, (app::Substr__Array * keys, app::Comparison_1_Moon_Substr_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02F2B5E0, void, Swap, (app::Substr__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::Substr__Array * keys, int32_t left, int32_t length, app::Comparison_1_Moon_Substr_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::Substr__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_Moon_Substr_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F2B660, int32_t, PickPivotAndPartition, (app::Substr__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Moon_Substr_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::Substr__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Moon_Substr_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F2BA30, void, DownHeap, (app::Substr__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_Moon_Substr_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F2BCF0, void, InsertionSort, (app::Substr__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Moon_Substr_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_Moon_Substr_
