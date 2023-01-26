#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SpiritShardIconsCollection_Icons__Array.h>
#include <Modloader/app/structs/Comparison_1_SpiritShardIconsCollection_Icons_.h>
#include <Modloader/app/structs/IComparer_1_SpiritShardIconsCollection_Icons_.h>
#include <Modloader/app/structs/SpiritShardIconsCollection_Icons.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_SpiritShardIconsCollection_Icons_ {
    IL2CPP_REGISTER_METHOD(0x02FF2DD0, void, Sort_1, (app::SpiritShardIconsCollection_Icons__Array * keys, int32_t index, int32_t length, app::IComparer_1_SpiritShardIconsCollection_Icons_* comparer))
    IL2CPP_REGISTER_METHOD(0x02FF30F0, int32_t, BinarySearch, (app::SpiritShardIconsCollection_Icons__Array * array, int32_t index, int32_t length, app::SpiritShardIconsCollection_Icons value, app::IComparer_1_SpiritShardIconsCollection_Icons_* comparer))
    IL2CPP_REGISTER_METHOD(0x02FF32A0, void, Sort_2, (app::SpiritShardIconsCollection_Icons__Array * keys, int32_t index, int32_t length, app::Comparison_1_SpiritShardIconsCollection_Icons_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8AB70, int32_t, InternalBinarySearch, (app::SpiritShardIconsCollection_Icons__Array * array, int32_t index, int32_t length, app::SpiritShardIconsCollection_Icons value, app::IComparer_1_SpiritShardIconsCollection_Icons_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8AD30, void, SwapIfGreater, (app::SpiritShardIconsCollection_Icons__Array * keys, app::Comparison_1_SpiritShardIconsCollection_Icons_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02C8AEE0, void, Swap, (app::SpiritShardIconsCollection_Icons__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::SpiritShardIconsCollection_Icons__Array * keys, int32_t left, int32_t length, app::Comparison_1_SpiritShardIconsCollection_Icons_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::SpiritShardIconsCollection_Icons__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_SpiritShardIconsCollection_Icons_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8AF80, int32_t, PickPivotAndPartition, (app::SpiritShardIconsCollection_Icons__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_SpiritShardIconsCollection_Icons_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::SpiritShardIconsCollection_Icons__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_SpiritShardIconsCollection_Icons_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8B3D0, void, DownHeap, (app::SpiritShardIconsCollection_Icons__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_SpiritShardIconsCollection_Icons_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8B740, void, InsertionSort, (app::SpiritShardIconsCollection_Icons__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_SpiritShardIconsCollection_Icons_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_SpiritShardIconsCollection_Icons_
