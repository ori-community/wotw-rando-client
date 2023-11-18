#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UberGhostTrailMeshUpdate_TextureUsage__Array.h>
#include <Modloader/app/structs/Comparison_1_UberGhostTrailMeshUpdate_TextureUsage_.h>
#include <Modloader/app/structs/IComparer_1_UberGhostTrailMeshUpdate_TextureUsage_.h>
#include <Modloader/app/structs/UberGhostTrailMeshUpdate_TextureUsage.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_UberGhostTrailMeshUpdate_TextureUsage_ {
    IL2CPP_REGISTER_METHOD(0x02F85E00, void, Sort_1, (app::UberGhostTrailMeshUpdate_TextureUsage__Array * keys, int32_t index, int32_t length, app::IComparer_1_UberGhostTrailMeshUpdate_TextureUsage_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F86120, int32_t, BinarySearch, (app::UberGhostTrailMeshUpdate_TextureUsage__Array * array, int32_t index, int32_t length, app::UberGhostTrailMeshUpdate_TextureUsage value, app::IComparer_1_UberGhostTrailMeshUpdate_TextureUsage_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F862D0, void, Sort_2, (app::UberGhostTrailMeshUpdate_TextureUsage__Array * keys, int32_t index, int32_t length, app::Comparison_1_UberGhostTrailMeshUpdate_TextureUsage_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C898B0, int32_t, InternalBinarySearch, (app::UberGhostTrailMeshUpdate_TextureUsage__Array * array, int32_t index, int32_t length, app::UberGhostTrailMeshUpdate_TextureUsage value, app::IComparer_1_UberGhostTrailMeshUpdate_TextureUsage_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C89A40, void, SwapIfGreater, (app::UberGhostTrailMeshUpdate_TextureUsage__Array * keys, app::Comparison_1_UberGhostTrailMeshUpdate_TextureUsage_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02C89BD0, void, Swap, (app::UberGhostTrailMeshUpdate_TextureUsage__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::UberGhostTrailMeshUpdate_TextureUsage__Array * keys, int32_t left, int32_t length, app::Comparison_1_UberGhostTrailMeshUpdate_TextureUsage_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::UberGhostTrailMeshUpdate_TextureUsage__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_UberGhostTrailMeshUpdate_TextureUsage_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C89C60, int32_t, PickPivotAndPartition, (app::UberGhostTrailMeshUpdate_TextureUsage__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UberGhostTrailMeshUpdate_TextureUsage_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::UberGhostTrailMeshUpdate_TextureUsage__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UberGhostTrailMeshUpdate_TextureUsage_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8A050, void, DownHeap, (app::UberGhostTrailMeshUpdate_TextureUsage__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_UberGhostTrailMeshUpdate_TextureUsage_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8A330, void, InsertionSort, (app::UberGhostTrailMeshUpdate_TextureUsage__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UberGhostTrailMeshUpdate_TextureUsage_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_UberGhostTrailMeshUpdate_TextureUsage_
