#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UberPoolGroupWarmer_PrewarmItem__Array.h>
#include <Modloader/app/structs/Comparison_1_UberPoolGroupWarmer_PrewarmItem_.h>
#include <Modloader/app/structs/IComparer_1_UberPoolGroupWarmer_PrewarmItem_.h>
#include <Modloader/app/structs/UberPoolGroupWarmer_PrewarmItem.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_UberPoolGroupWarmer_PrewarmItem_ {
    IL2CPP_REGISTER_METHOD(0x02F87080, void, Sort_1, (app::UberPoolGroupWarmer_PrewarmItem__Array * keys, int32_t index, int32_t length, app::IComparer_1_UberPoolGroupWarmer_PrewarmItem_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F873A0, int32_t, BinarySearch, (app::UberPoolGroupWarmer_PrewarmItem__Array * array, int32_t index, int32_t length, app::UberPoolGroupWarmer_PrewarmItem value, app::IComparer_1_UberPoolGroupWarmer_PrewarmItem_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F87550, void, Sort_2, (app::UberPoolGroupWarmer_PrewarmItem__Array * keys, int32_t index, int32_t length, app::Comparison_1_UberPoolGroupWarmer_PrewarmItem_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C898B0, int32_t, InternalBinarySearch, (app::UberPoolGroupWarmer_PrewarmItem__Array * array, int32_t index, int32_t length, app::UberPoolGroupWarmer_PrewarmItem value, app::IComparer_1_UberPoolGroupWarmer_PrewarmItem_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C89A40, void, SwapIfGreater, (app::UberPoolGroupWarmer_PrewarmItem__Array * keys, app::Comparison_1_UberPoolGroupWarmer_PrewarmItem_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02C89BD0, void, Swap, (app::UberPoolGroupWarmer_PrewarmItem__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::UberPoolGroupWarmer_PrewarmItem__Array * keys, int32_t left, int32_t length, app::Comparison_1_UberPoolGroupWarmer_PrewarmItem_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::UberPoolGroupWarmer_PrewarmItem__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_UberPoolGroupWarmer_PrewarmItem_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C89C60, int32_t, PickPivotAndPartition, (app::UberPoolGroupWarmer_PrewarmItem__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UberPoolGroupWarmer_PrewarmItem_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::UberPoolGroupWarmer_PrewarmItem__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UberPoolGroupWarmer_PrewarmItem_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8A050, void, DownHeap, (app::UberPoolGroupWarmer_PrewarmItem__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_UberPoolGroupWarmer_PrewarmItem_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8A330, void, InsertionSort, (app::UberPoolGroupWarmer_PrewarmItem__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UberPoolGroupWarmer_PrewarmItem_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_UberPoolGroupWarmer_PrewarmItem_
