#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Guid__Array.h>
#include <Modloader/app/structs/Comparison_1_Guid_.h>
#include <Modloader/app/structs/Guid.h>
#include <Modloader/app/structs/IComparer_1_System_Guid_.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_System_Guid_ {
    IL2CPP_REGISTER_METHOD(0x02FFF560, void, Sort_1, (app::Guid__Array * keys, int32_t index, int32_t length, app::IComparer_1_System_Guid_* comparer))
    IL2CPP_REGISTER_METHOD(0x02FFF880, int32_t, BinarySearch, (app::Guid__Array * array, int32_t index, int32_t length, app::Guid value, app::IComparer_1_System_Guid_* comparer))
    IL2CPP_REGISTER_METHOD(0x02FFFA30, void, Sort_2, (app::Guid__Array * keys, int32_t index, int32_t length, app::Comparison_1_Guid_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C898B0, int32_t, InternalBinarySearch, (app::Guid__Array * array, int32_t index, int32_t length, app::Guid value, app::IComparer_1_System_Guid_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C89A40, void, SwapIfGreater, (app::Guid__Array * keys, app::Comparison_1_Guid_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02C89BD0, void, Swap, (app::Guid__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::Guid__Array * keys, int32_t left, int32_t length, app::Comparison_1_Guid_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::Guid__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_Guid_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C89C60, int32_t, PickPivotAndPartition, (app::Guid__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Guid_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::Guid__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Guid_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8A050, void, DownHeap, (app::Guid__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_Guid_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8A330, void, InsertionSort, (app::Guid__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Guid_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_System_Guid_
