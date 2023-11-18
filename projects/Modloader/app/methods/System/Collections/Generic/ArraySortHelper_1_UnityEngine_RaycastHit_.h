#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RaycastHit__Array.h>
#include <Modloader/app/structs/Comparison_1_UnityEngine_RaycastHit_.h>
#include <Modloader/app/structs/IComparer_1_UnityEngine_RaycastHit_.h>
#include <Modloader/app/structs/RaycastHit.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_UnityEngine_RaycastHit_ {
    IL2CPP_REGISTER_METHOD(0x02F6CC60, void, Sort_1, (app::RaycastHit__Array * keys, int32_t index, int32_t length, app::IComparer_1_UnityEngine_RaycastHit_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F6CF80, int32_t, BinarySearch, (app::RaycastHit__Array * array, int32_t index, int32_t length, app::RaycastHit value, app::IComparer_1_UnityEngine_RaycastHit_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F6D150, void, Sort_2, (app::RaycastHit__Array * keys, int32_t index, int32_t length, app::Comparison_1_UnityEngine_RaycastHit_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F6D2A0, int32_t, InternalBinarySearch, (app::RaycastHit__Array * array, int32_t index, int32_t length, app::RaycastHit value, app::IComparer_1_UnityEngine_RaycastHit_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F6D420, void, SwapIfGreater, (app::RaycastHit__Array * keys, app::Comparison_1_UnityEngine_RaycastHit_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02F6D630, void, Swap, (app::RaycastHit__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::RaycastHit__Array * keys, int32_t left, int32_t length, app::Comparison_1_UnityEngine_RaycastHit_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::RaycastHit__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_UnityEngine_RaycastHit_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F6D6F0, int32_t, PickPivotAndPartition, (app::RaycastHit__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UnityEngine_RaycastHit_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::RaycastHit__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UnityEngine_RaycastHit_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F6DBC0, void, DownHeap, (app::RaycastHit__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_UnityEngine_RaycastHit_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F6DFF0, void, InsertionSort, (app::RaycastHit__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UnityEngine_RaycastHit_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_UnityEngine_RaycastHit_
