#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TextureTilingAdjuster_AdjustedTexture__Array.h>
#include <Modloader/app/structs/Comparison_1_TextureTilingAdjuster_AdjustedTexture_.h>
#include <Modloader/app/structs/IComparer_1_TextureTilingAdjuster_AdjustedTexture_.h>
#include <Modloader/app/structs/TextureTilingAdjuster_AdjustedTexture.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_TextureTilingAdjuster_AdjustedTexture_ {
    IL2CPP_REGISTER_METHOD(0x02F84580, void, Sort_1, (app::TextureTilingAdjuster_AdjustedTexture__Array * keys, int32_t index, int32_t length, app::IComparer_1_TextureTilingAdjuster_AdjustedTexture_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F848A0, int32_t, BinarySearch, (app::TextureTilingAdjuster_AdjustedTexture__Array * array, int32_t index, int32_t length, app::TextureTilingAdjuster_AdjustedTexture value, app::IComparer_1_TextureTilingAdjuster_AdjustedTexture_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F84A50, void, Sort_2, (app::TextureTilingAdjuster_AdjustedTexture__Array * keys, int32_t index, int32_t length, app::Comparison_1_TextureTilingAdjuster_AdjustedTexture_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C884A0, int32_t, InternalBinarySearch, (app::TextureTilingAdjuster_AdjustedTexture__Array * array, int32_t index, int32_t length, app::TextureTilingAdjuster_AdjustedTexture value, app::IComparer_1_TextureTilingAdjuster_AdjustedTexture_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C88650, void, SwapIfGreater, (app::TextureTilingAdjuster_AdjustedTexture__Array * keys, app::Comparison_1_TextureTilingAdjuster_AdjustedTexture_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02C88810, void, Swap, (app::TextureTilingAdjuster_AdjustedTexture__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::TextureTilingAdjuster_AdjustedTexture__Array * keys, int32_t left, int32_t length, app::Comparison_1_TextureTilingAdjuster_AdjustedTexture_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::TextureTilingAdjuster_AdjustedTexture__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_TextureTilingAdjuster_AdjustedTexture_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C888B0, int32_t, PickPivotAndPartition, (app::TextureTilingAdjuster_AdjustedTexture__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_TextureTilingAdjuster_AdjustedTexture_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::TextureTilingAdjuster_AdjustedTexture__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_TextureTilingAdjuster_AdjustedTexture_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C88CE0, void, DownHeap, (app::TextureTilingAdjuster_AdjustedTexture__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_TextureTilingAdjuster_AdjustedTexture_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C89050, void, InsertionSort, (app::TextureTilingAdjuster_AdjustedTexture__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_TextureTilingAdjuster_AdjustedTexture_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_TextureTilingAdjuster_AdjustedTexture_
