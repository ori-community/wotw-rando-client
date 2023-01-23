#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Vector4__Array.h>
#include <Modloader/app/structs/IComparer_1_UnityEngine_Vector4_.h>
#include <Modloader/app/structs/Vector4.h>
#include <Modloader/app/structs/Comparison_1_UnityEngine_Vector4_.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_UnityEngine_Vector4_ {
    IL2CPP_REGISTER_METHOD(0x02C89290, void, Sort_1, (app::Vector4__Array * keys, int32_t index, int32_t length, app::IComparer_1_UnityEngine_Vector4_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x047762B0, ArraySortHelper_1_UnityEngine_Vector4__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C895B0, int32_t, BinarySearch, (app::Vector4__Array * array, int32_t index, int32_t length, app::Vector4 value, app::IComparer_1_UnityEngine_Vector4_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04742658, ArraySortHelper_1_UnityEngine_Vector4__BinarySearch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C89760, void, Sort_2, (app::Vector4__Array * keys, int32_t index, int32_t length, app::Comparison_1_UnityEngine_Vector4_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0475B580, ArraySortHelper_1_UnityEngine_Vector4__Sort_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C898B0, int32_t, InternalBinarySearch, (app::Vector4__Array * array, int32_t index, int32_t length, app::Vector4 value, app::IComparer_1_UnityEngine_Vector4_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C89A40, void, SwapIfGreater, (app::Vector4__Array * keys, app::Comparison_1_UnityEngine_Vector4_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02C89BD0, void, Swap, (app::Vector4__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::Vector4__Array * keys, int32_t left, int32_t length, app::Comparison_1_UnityEngine_Vector4_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::Vector4__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_UnityEngine_Vector4_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C89C60, int32_t, PickPivotAndPartition, (app::Vector4__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UnityEngine_Vector4_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::Vector4__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UnityEngine_Vector4_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8A050, void, DownHeap, (app::Vector4__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_UnityEngine_Vector4_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8A330, void, InsertionSort, (app::Vector4__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UnityEngine_Vector4_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_UnityEngine_Vector4_
