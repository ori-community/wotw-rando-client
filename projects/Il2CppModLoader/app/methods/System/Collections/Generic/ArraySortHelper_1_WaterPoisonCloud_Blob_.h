#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_WaterPoisonCloud_Blob_ {
    IL2CPP_REGISTER_METHOD(0x02C8B990, void, Sort_1, (app::WaterPoisonCloud_Blob__Array * keys, int32_t index, int32_t length, app::IComparer_1_WaterPoisonCloud_Blob_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04705BB8, ArraySortHelper_1_WaterPoisonCloud_Blob__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C8BCB0, int32_t, BinarySearch, (app::WaterPoisonCloud_Blob__Array * array, int32_t index, int32_t length, app::WaterPoisonCloud_Blob value, app::IComparer_1_WaterPoisonCloud_Blob_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0472B198, ArraySortHelper_1_WaterPoisonCloud_Blob__BinarySearch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C8BE60, void, Sort_2, (app::WaterPoisonCloud_Blob__Array * keys, int32_t index, int32_t length, app::Comparison_1_WaterPoisonCloud_Blob_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04733618, ArraySortHelper_1_WaterPoisonCloud_Blob__Sort_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C8BFB0, int32_t, InternalBinarySearch, (app::WaterPoisonCloud_Blob__Array * array, int32_t index, int32_t length, app::WaterPoisonCloud_Blob value, app::IComparer_1_WaterPoisonCloud_Blob_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8C170, void, SwapIfGreater, (app::WaterPoisonCloud_Blob__Array * keys, app::Comparison_1_WaterPoisonCloud_Blob_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02C8C330, void, Swap, (app::WaterPoisonCloud_Blob__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::WaterPoisonCloud_Blob__Array * keys, int32_t left, int32_t length, app::Comparison_1_WaterPoisonCloud_Blob_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::WaterPoisonCloud_Blob__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_WaterPoisonCloud_Blob_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8C3D0, int32_t, PickPivotAndPartition, (app::WaterPoisonCloud_Blob__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_WaterPoisonCloud_Blob_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::WaterPoisonCloud_Blob__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_WaterPoisonCloud_Blob_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8C820, void, DownHeap, (app::WaterPoisonCloud_Blob__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_WaterPoisonCloud_Blob_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8CBA0, void, InsertionSort, (app::WaterPoisonCloud_Blob__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_WaterPoisonCloud_Blob_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_WaterPoisonCloud_Blob_
