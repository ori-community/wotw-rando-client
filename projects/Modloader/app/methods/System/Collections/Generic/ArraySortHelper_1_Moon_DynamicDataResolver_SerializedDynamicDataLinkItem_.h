#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DynamicDataResolver_SerializedDynamicDataLinkItem__Array.h>
#include <Modloader/app/structs/IComparer_1_Moon_DynamicDataResolver_SerializedDynamicDataLinkItem_.h>
#include <Modloader/app/structs/DynamicDataResolver_SerializedDynamicDataLinkItem.h>
#include <Modloader/app/structs/Comparison_1_Moon_DynamicDataResolver_SerializedDynamicDataLinkItem_.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_Moon_DynamicDataResolver_SerializedDynamicDataLinkItem_ {
    IL2CPP_REGISTER_METHOD(0x02F35140, void, Sort_1, (app::DynamicDataResolver_SerializedDynamicDataLinkItem__Array * keys, int32_t index, int32_t length, app::IComparer_1_Moon_DynamicDataResolver_SerializedDynamicDataLinkItem_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x047635C0, ArraySortHelper_1_Moon_DynamicDataResolver_SerializedDynamicDataLinkItem__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F35460, int32_t, BinarySearch, (app::DynamicDataResolver_SerializedDynamicDataLinkItem__Array * array, int32_t index, int32_t length, app::DynamicDataResolver_SerializedDynamicDataLinkItem value, app::IComparer_1_Moon_DynamicDataResolver_SerializedDynamicDataLinkItem_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0472ADE0, ArraySortHelper_1_Moon_DynamicDataResolver_SerializedDynamicDataLinkItem__BinarySearch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F35630, void, Sort_2, (app::DynamicDataResolver_SerializedDynamicDataLinkItem__Array * keys, int32_t index, int32_t length, app::Comparison_1_Moon_DynamicDataResolver_SerializedDynamicDataLinkItem_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0476E970, ArraySortHelper_1_Moon_DynamicDataResolver_SerializedDynamicDataLinkItem__Sort_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F35780, int32_t, InternalBinarySearch, (app::DynamicDataResolver_SerializedDynamicDataLinkItem__Array * array, int32_t index, int32_t length, app::DynamicDataResolver_SerializedDynamicDataLinkItem value, app::IComparer_1_Moon_DynamicDataResolver_SerializedDynamicDataLinkItem_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F358E0, void, SwapIfGreater, (app::DynamicDataResolver_SerializedDynamicDataLinkItem__Array * keys, app::Comparison_1_Moon_DynamicDataResolver_SerializedDynamicDataLinkItem_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02F35AD0, void, Swap, (app::DynamicDataResolver_SerializedDynamicDataLinkItem__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::DynamicDataResolver_SerializedDynamicDataLinkItem__Array * keys, int32_t left, int32_t length, app::Comparison_1_Moon_DynamicDataResolver_SerializedDynamicDataLinkItem_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::DynamicDataResolver_SerializedDynamicDataLinkItem__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_Moon_DynamicDataResolver_SerializedDynamicDataLinkItem_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F35B90, int32_t, PickPivotAndPartition, (app::DynamicDataResolver_SerializedDynamicDataLinkItem__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Moon_DynamicDataResolver_SerializedDynamicDataLinkItem_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::DynamicDataResolver_SerializedDynamicDataLinkItem__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Moon_DynamicDataResolver_SerializedDynamicDataLinkItem_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F36020, void, DownHeap, (app::DynamicDataResolver_SerializedDynamicDataLinkItem__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_Moon_DynamicDataResolver_SerializedDynamicDataLinkItem_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F363F0, void, InsertionSort, (app::DynamicDataResolver_SerializedDynamicDataLinkItem__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Moon_DynamicDataResolver_SerializedDynamicDataLinkItem_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_Moon_DynamicDataResolver_SerializedDynamicDataLinkItem_
