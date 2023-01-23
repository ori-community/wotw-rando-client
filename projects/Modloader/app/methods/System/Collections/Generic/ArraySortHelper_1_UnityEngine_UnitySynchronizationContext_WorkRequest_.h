#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UnitySynchronizationContext_WorkRequest__Array.h>
#include <Modloader/app/structs/IComparer_1_UnityEngine_UnitySynchronizationContext_WorkRequest_.h>
#include <Modloader/app/structs/UnitySynchronizationContext_WorkRequest.h>
#include <Modloader/app/structs/Comparison_1_UnityEngine_UnitySynchronizationContext_WorkRequest_.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ {
    IL2CPP_REGISTER_METHOD(0x02F71370, void, Sort_1, (app::UnitySynchronizationContext_WorkRequest__Array * keys, int32_t index, int32_t length, app::IComparer_1_UnityEngine_UnitySynchronizationContext_WorkRequest_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04745BE0, ArraySortHelper_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F71690, int32_t, BinarySearch, (app::UnitySynchronizationContext_WorkRequest__Array * array, int32_t index, int32_t length, app::UnitySynchronizationContext_WorkRequest value, app::IComparer_1_UnityEngine_UnitySynchronizationContext_WorkRequest_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04760A10, ArraySortHelper_1_UnityEngine_UnitySynchronizationContext_WorkRequest__BinarySearch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F71840, void, Sort_2, (app::UnitySynchronizationContext_WorkRequest__Array * keys, int32_t index, int32_t length, app::Comparison_1_UnityEngine_UnitySynchronizationContext_WorkRequest_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04784B58, ArraySortHelper_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Sort_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C8BFB0, int32_t, InternalBinarySearch, (app::UnitySynchronizationContext_WorkRequest__Array * array, int32_t index, int32_t length, app::UnitySynchronizationContext_WorkRequest value, app::IComparer_1_UnityEngine_UnitySynchronizationContext_WorkRequest_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8C170, void, SwapIfGreater, (app::UnitySynchronizationContext_WorkRequest__Array * keys, app::Comparison_1_UnityEngine_UnitySynchronizationContext_WorkRequest_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02C8C330, void, Swap, (app::UnitySynchronizationContext_WorkRequest__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::UnitySynchronizationContext_WorkRequest__Array * keys, int32_t left, int32_t length, app::Comparison_1_UnityEngine_UnitySynchronizationContext_WorkRequest_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::UnitySynchronizationContext_WorkRequest__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_UnityEngine_UnitySynchronizationContext_WorkRequest_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8C3D0, int32_t, PickPivotAndPartition, (app::UnitySynchronizationContext_WorkRequest__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UnityEngine_UnitySynchronizationContext_WorkRequest_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::UnitySynchronizationContext_WorkRequest__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UnityEngine_UnitySynchronizationContext_WorkRequest_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8C820, void, DownHeap, (app::UnitySynchronizationContext_WorkRequest__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_UnityEngine_UnitySynchronizationContext_WorkRequest_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8CBA0, void, InsertionSort, (app::UnitySynchronizationContext_WorkRequest__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UnityEngine_UnitySynchronizationContext_WorkRequest_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_UnityEngine_UnitySynchronizationContext_WorkRequest_
