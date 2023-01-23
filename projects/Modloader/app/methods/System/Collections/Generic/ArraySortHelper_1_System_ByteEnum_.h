#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ByteEnum__Enum__Array.h>
#include <Modloader/app/structs/IComparer_1_System_ByteEnum_.h>
#include <Modloader/app/structs/ByteEnum__Enum.h>
#include <Modloader/app/structs/Comparison_1_ByteEnum_.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_System_ByteEnum_ {
    IL2CPP_REGISTER_METHOD(0x02FF4630, void, Sort_1, (app::ByteEnum__Enum__Array * keys, int32_t index, int32_t length, app::IComparer_1_System_ByteEnum_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x047634E8, ArraySortHelper_1_System_ByteEnum__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FF4950, int32_t, BinarySearch, (app::ByteEnum__Enum__Array * array, int32_t index, int32_t length, app::ByteEnum__Enum value, app::IComparer_1_System_ByteEnum_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04708100, ArraySortHelper_1_System_ByteEnum__BinarySearch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FF4AF0, void, Sort_2, (app::ByteEnum__Enum__Array * keys, int32_t index, int32_t length, app::Comparison_1_ByteEnum_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0472D598, ArraySortHelper_1_System_ByteEnum__Sort_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F7D410, int32_t, InternalBinarySearch, (app::ByteEnum__Enum__Array * array, int32_t index, int32_t length, app::ByteEnum__Enum value, app::IComparer_1_System_ByteEnum_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F7D530, void, SwapIfGreater, (app::ByteEnum__Enum__Array * keys, app::Comparison_1_ByteEnum_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02F7D6B0, void, Swap, (app::ByteEnum__Enum__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::ByteEnum__Enum__Array * keys, int32_t left, int32_t length, app::Comparison_1_ByteEnum_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::ByteEnum__Enum__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_ByteEnum_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F7D730, int32_t, PickPivotAndPartition, (app::ByteEnum__Enum__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_ByteEnum_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::ByteEnum__Enum__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_ByteEnum_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F7DAF0, void, DownHeap, (app::ByteEnum__Enum__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_ByteEnum_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F7DDB0, void, InsertionSort, (app::ByteEnum__Enum__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_ByteEnum_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_System_ByteEnum_
