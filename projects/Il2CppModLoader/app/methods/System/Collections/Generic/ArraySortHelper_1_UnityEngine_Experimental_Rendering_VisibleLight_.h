#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_UnityEngine_Experimental_Rendering_VisibleLight_ {
    IL2CPP_REGISTER_METHOD(0x02F68850, void, Sort_1, (app::VisibleLight__Array * keys, int32_t index, int32_t length, app::IComparer_1_UnityEngine_Experimental_Rendering_VisibleLight_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04787030, ArraySortHelper_1_UnityEngine_Experimental_Rendering_VisibleLight__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F68B70, int32_t, BinarySearch, (app::VisibleLight__Array * array, int32_t index, int32_t length, app::VisibleLight value, app::IComparer_1_UnityEngine_Experimental_Rendering_VisibleLight_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04780080, ArraySortHelper_1_UnityEngine_Experimental_Rendering_VisibleLight__BinarySearch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F68D70, void, Sort_2, (app::VisibleLight__Array * keys, int32_t index, int32_t length, app::Comparison_1_UnityEngine_Experimental_Rendering_VisibleLight_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0471ED30, ArraySortHelper_1_UnityEngine_Experimental_Rendering_VisibleLight__Sort_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F68EC0, int32_t, InternalBinarySearch, (app::VisibleLight__Array * array, int32_t index, int32_t length, app::VisibleLight value, app::IComparer_1_UnityEngine_Experimental_Rendering_VisibleLight_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F690B0, void, SwapIfGreater, (app::VisibleLight__Array * keys, app::Comparison_1_UnityEngine_Experimental_Rendering_VisibleLight_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02F693B0, void, Swap, (app::VisibleLight__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::VisibleLight__Array * keys, int32_t left, int32_t length, app::Comparison_1_UnityEngine_Experimental_Rendering_VisibleLight_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::VisibleLight__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_UnityEngine_Experimental_Rendering_VisibleLight_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F694F0, int32_t, PickPivotAndPartition, (app::VisibleLight__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UnityEngine_Experimental_Rendering_VisibleLight_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::VisibleLight__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UnityEngine_Experimental_Rendering_VisibleLight_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F69AB0, void, DownHeap, (app::VisibleLight__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_UnityEngine_Experimental_Rendering_VisibleLight_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F69FC0, void, InsertionSort, (app::VisibleLight__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UnityEngine_Experimental_Rendering_VisibleLight_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_UnityEngine_Experimental_Rendering_VisibleLight_
