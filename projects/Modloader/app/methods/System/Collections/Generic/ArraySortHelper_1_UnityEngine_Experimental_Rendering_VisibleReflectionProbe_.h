#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/VisibleReflectionProbe__Array.h>
#include <Modloader/app/structs/IComparer_1_UnityEngine_Experimental_Rendering_VisibleReflectionProbe_.h>
#include <Modloader/app/structs/VisibleReflectionProbe.h>
#include <Modloader/app/structs/Comparison_1_UnityEngine_Experimental_Rendering_VisibleReflectionProbe_.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_UnityEngine_Experimental_Rendering_VisibleReflectionProbe_ {
    IL2CPP_REGISTER_METHOD(0x02F6A310, void, Sort_1, (app::VisibleReflectionProbe__Array * keys, int32_t index, int32_t length, app::IComparer_1_UnityEngine_Experimental_Rendering_VisibleReflectionProbe_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0474D968, ArraySortHelper_1_UnityEngine_Experimental_Rendering_VisibleReflectionProbe__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F6A630, int32_t, BinarySearch, (app::VisibleReflectionProbe__Array * array, int32_t index, int32_t length, app::VisibleReflectionProbe value, app::IComparer_1_UnityEngine_Experimental_Rendering_VisibleReflectionProbe_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0475A5B8, ArraySortHelper_1_UnityEngine_Experimental_Rendering_VisibleReflectionProbe__BinarySearch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F6A840, void, Sort_2, (app::VisibleReflectionProbe__Array * keys, int32_t index, int32_t length, app::Comparison_1_UnityEngine_Experimental_Rendering_VisibleReflectionProbe_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04760498, ArraySortHelper_1_UnityEngine_Experimental_Rendering_VisibleReflectionProbe__Sort_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F6A990, int32_t, InternalBinarySearch, (app::VisibleReflectionProbe__Array * array, int32_t index, int32_t length, app::VisibleReflectionProbe value, app::IComparer_1_UnityEngine_Experimental_Rendering_VisibleReflectionProbe_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F6ABB0, void, SwapIfGreater, (app::VisibleReflectionProbe__Array * keys, app::Comparison_1_UnityEngine_Experimental_Rendering_VisibleReflectionProbe_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02F6AF10, void, Swap, (app::VisibleReflectionProbe__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::VisibleReflectionProbe__Array * keys, int32_t left, int32_t length, app::Comparison_1_UnityEngine_Experimental_Rendering_VisibleReflectionProbe_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::VisibleReflectionProbe__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_UnityEngine_Experimental_Rendering_VisibleReflectionProbe_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F6B0A0, int32_t, PickPivotAndPartition, (app::VisibleReflectionProbe__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UnityEngine_Experimental_Rendering_VisibleReflectionProbe_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::VisibleReflectionProbe__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UnityEngine_Experimental_Rendering_VisibleReflectionProbe_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F6B6C0, void, DownHeap, (app::VisibleReflectionProbe__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_UnityEngine_Experimental_Rendering_VisibleReflectionProbe_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F6BC60, void, InsertionSort, (app::VisibleReflectionProbe__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UnityEngine_Experimental_Rendering_VisibleReflectionProbe_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_UnityEngine_Experimental_Rendering_VisibleReflectionProbe_
