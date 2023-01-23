#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DictionaryEntry__Array.h>
#include <Modloader/app/structs/IComparer_1_System_Collections_DictionaryEntry_.h>
#include <Modloader/app/structs/DictionaryEntry.h>
#include <Modloader/app/structs/Comparison_1_System_Collections_DictionaryEntry_.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_System_Collections_DictionaryEntry_ {
    IL2CPP_REGISTER_METHOD(0x02FF5250, void, Sort_1, (app::DictionaryEntry__Array * keys, int32_t index, int32_t length, app::IComparer_1_System_Collections_DictionaryEntry_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04795940, ArraySortHelper_1_System_Collections_DictionaryEntry__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FF5570, int32_t, BinarySearch, (app::DictionaryEntry__Array * array, int32_t index, int32_t length, app::DictionaryEntry value, app::IComparer_1_System_Collections_DictionaryEntry_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0478C140, ArraySortHelper_1_System_Collections_DictionaryEntry__BinarySearch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FF5720, void, Sort_2, (app::DictionaryEntry__Array * keys, int32_t index, int32_t length, app::Comparison_1_System_Collections_DictionaryEntry_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04756A28, ArraySortHelper_1_System_Collections_DictionaryEntry__Sort_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C898B0, int32_t, InternalBinarySearch, (app::DictionaryEntry__Array * array, int32_t index, int32_t length, app::DictionaryEntry value, app::IComparer_1_System_Collections_DictionaryEntry_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C89A40, void, SwapIfGreater, (app::DictionaryEntry__Array * keys, app::Comparison_1_System_Collections_DictionaryEntry_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02C89BD0, void, Swap, (app::DictionaryEntry__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::DictionaryEntry__Array * keys, int32_t left, int32_t length, app::Comparison_1_System_Collections_DictionaryEntry_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::DictionaryEntry__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_System_Collections_DictionaryEntry_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C89C60, int32_t, PickPivotAndPartition, (app::DictionaryEntry__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_System_Collections_DictionaryEntry_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::DictionaryEntry__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_System_Collections_DictionaryEntry_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8A050, void, DownHeap, (app::DictionaryEntry__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_System_Collections_DictionaryEntry_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8A330, void, InsertionSort, (app::DictionaryEntry__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_System_Collections_DictionaryEntry_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_System_Collections_DictionaryEntry_
