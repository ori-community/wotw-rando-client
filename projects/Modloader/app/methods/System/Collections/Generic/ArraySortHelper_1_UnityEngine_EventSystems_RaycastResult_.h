#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/RaycastResult__Array.h>
#include <Modloader/app/structs/IComparer_1_UnityEngine_EventSystems_RaycastResult_.h>
#include <Modloader/app/structs/RaycastResult.h>
#include <Modloader/app/structs/Comparison_1_UnityEngine_EventSystems_RaycastResult_.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_UnityEngine_EventSystems_RaycastResult_ {
    IL2CPP_REGISTER_METHOD(0x02F66450, void, Sort_1, (app::RaycastResult__Array * keys, int32_t index, int32_t length, app::IComparer_1_UnityEngine_EventSystems_RaycastResult_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04758D30, ArraySortHelper_1_UnityEngine_EventSystems_RaycastResult__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F66770, int32_t, BinarySearch, (app::RaycastResult__Array * array, int32_t index, int32_t length, app::RaycastResult value, app::IComparer_1_UnityEngine_EventSystems_RaycastResult_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x047774A0, ArraySortHelper_1_UnityEngine_EventSystems_RaycastResult__BinarySearch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F66950, void, Sort_2, (app::RaycastResult__Array * keys, int32_t index, int32_t length, app::Comparison_1_UnityEngine_EventSystems_RaycastResult_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04762FC0, ArraySortHelper_1_UnityEngine_EventSystems_RaycastResult__Sort_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F66AA0, int32_t, InternalBinarySearch, (app::RaycastResult__Array * array, int32_t index, int32_t length, app::RaycastResult value, app::IComparer_1_UnityEngine_EventSystems_RaycastResult_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F66C40, void, SwapIfGreater, (app::RaycastResult__Array * keys, app::Comparison_1_UnityEngine_EventSystems_RaycastResult_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02F66E90, void, Swap, (app::RaycastResult__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::RaycastResult__Array * keys, int32_t left, int32_t length, app::Comparison_1_UnityEngine_EventSystems_RaycastResult_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::RaycastResult__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_UnityEngine_EventSystems_RaycastResult_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F66F80, int32_t, PickPivotAndPartition, (app::RaycastResult__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UnityEngine_EventSystems_RaycastResult_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::RaycastResult__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UnityEngine_EventSystems_RaycastResult_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F67470, void, DownHeap, (app::RaycastResult__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_UnityEngine_EventSystems_RaycastResult_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F678C0, void, InsertionSort, (app::RaycastResult__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UnityEngine_EventSystems_RaycastResult_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_UnityEngine_EventSystems_RaycastResult_
