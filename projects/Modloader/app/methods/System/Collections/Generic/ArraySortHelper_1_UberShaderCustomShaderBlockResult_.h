#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UberShaderCustomShaderBlockResult__Array.h>
#include <Modloader/app/structs/Comparison_1_UberShaderCustomShaderBlockResult_.h>
#include <Modloader/app/structs/IComparer_1_UberShaderCustomShaderBlockResult_.h>
#include <Modloader/app/structs/UberShaderCustomShaderBlockResult.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_UberShaderCustomShaderBlockResult_ {
    IL2CPP_REGISTER_METHOD(0x02F62DF0, void, Sort_1, (app::UberShaderCustomShaderBlockResult__Array * keys, int32_t index, int32_t length, app::IComparer_1_UberShaderCustomShaderBlockResult_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F63110, int32_t, BinarySearch, (app::UberShaderCustomShaderBlockResult__Array * array, int32_t index, int32_t length, app::UberShaderCustomShaderBlockResult value, app::IComparer_1_UberShaderCustomShaderBlockResult_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F632C0, void, Sort_2, (app::UberShaderCustomShaderBlockResult__Array * keys, int32_t index, int32_t length, app::Comparison_1_UberShaderCustomShaderBlockResult_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C898B0, int32_t, InternalBinarySearch, (app::UberShaderCustomShaderBlockResult__Array * array, int32_t index, int32_t length, app::UberShaderCustomShaderBlockResult value, app::IComparer_1_UberShaderCustomShaderBlockResult_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C89A40, void, SwapIfGreater, (app::UberShaderCustomShaderBlockResult__Array * keys, app::Comparison_1_UberShaderCustomShaderBlockResult_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02C89BD0, void, Swap, (app::UberShaderCustomShaderBlockResult__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::UberShaderCustomShaderBlockResult__Array * keys, int32_t left, int32_t length, app::Comparison_1_UberShaderCustomShaderBlockResult_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::UberShaderCustomShaderBlockResult__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_UberShaderCustomShaderBlockResult_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C89C60, int32_t, PickPivotAndPartition, (app::UberShaderCustomShaderBlockResult__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UberShaderCustomShaderBlockResult_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::UberShaderCustomShaderBlockResult__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UberShaderCustomShaderBlockResult_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8A050, void, DownHeap, (app::UberShaderCustomShaderBlockResult__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_UberShaderCustomShaderBlockResult_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8A330, void, InsertionSort, (app::UberShaderCustomShaderBlockResult__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UberShaderCustomShaderBlockResult_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_UberShaderCustomShaderBlockResult_
