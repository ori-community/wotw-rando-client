#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UIVertex__Array.h>
#include <Modloader/app/structs/Comparison_1_UnityEngine_UIVertex_.h>
#include <Modloader/app/structs/IComparer_1_UnityEngine_UIVertex_.h>
#include <Modloader/app/structs/UIVertex.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_UnityEngine_UIVertex_ {
    IL2CPP_REGISTER_METHOD(0x02F6FB20, void, Sort_1, (app::UIVertex__Array * keys, int32_t index, int32_t length, app::IComparer_1_UnityEngine_UIVertex_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F6FE40, int32_t, BinarySearch, (app::UIVertex__Array * array, int32_t index, int32_t length, app::UIVertex value, app::IComparer_1_UnityEngine_UIVertex_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F70030, void, Sort_2, (app::UIVertex__Array * keys, int32_t index, int32_t length, app::Comparison_1_UnityEngine_UIVertex_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F70180, int32_t, InternalBinarySearch, (app::UIVertex__Array * array, int32_t index, int32_t length, app::UIVertex value, app::IComparer_1_UnityEngine_UIVertex_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F70330, void, SwapIfGreater, (app::UIVertex__Array * keys, app::Comparison_1_UnityEngine_UIVertex_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02F705A0, void, Swap, (app::UIVertex__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::UIVertex__Array * keys, int32_t left, int32_t length, app::Comparison_1_UnityEngine_UIVertex_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::UIVertex__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_UnityEngine_UIVertex_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F70690, int32_t, PickPivotAndPartition, (app::UIVertex__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UnityEngine_UIVertex_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::UIVertex__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UnityEngine_UIVertex_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F70BA0, void, DownHeap, (app::UIVertex__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_UnityEngine_UIVertex_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F71030, void, InsertionSort, (app::UIVertex__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UnityEngine_UIVertex_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_UnityEngine_UIVertex_
