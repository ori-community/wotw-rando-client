#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GenericCastManager_1_Command_NativeArrays_UnityEngine_CapsulecastCommand___Array.h>
#include <Modloader/app/structs/IComparer_1_GenericCastManager_1_NativeArrays_.h>
#include <Modloader/app/structs/GenericCastManager_1_Command_NativeArrays_UnityEngine_CapsulecastCommand_.h>
#include <Modloader/app/structs/Comparison_1_GenericCastManager_1_NativeArrays_.h>
#include <Modloader/app/structs/GenericCastManager_1_Command_NativeArrays_UnityEngine_RaycastCommand___Array.h>
#include <Modloader/app/structs/IComparer_1_GenericCastManager_1_NativeArrays__1.h>
#include <Modloader/app/structs/GenericCastManager_1_Command_NativeArrays_UnityEngine_RaycastCommand_.h>
#include <Modloader/app/structs/Comparison_1_GenericCastManager_1_NativeArrays__1.h>
#include <Modloader/app/structs/GenericCastManager_1_Command_NativeArrays_UnityEngine_SpherecastCommand___Array.h>
#include <Modloader/app/structs/IComparer_1_GenericCastManager_1_NativeArrays__2.h>
#include <Modloader/app/structs/GenericCastManager_1_Command_NativeArrays_UnityEngine_SpherecastCommand_.h>
#include <Modloader/app/structs/Comparison_1_GenericCastManager_1_NativeArrays__2.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_GenericCastManager_1_NativeArrays_ {
    IL2CPP_REGISTER_METHOD(0x02F5CB70, void, Sort_1, (app::GenericCastManager_1_Command_NativeArrays_UnityEngine_CapsulecastCommand___Array * keys, int32_t index, int32_t length, app::IComparer_1_GenericCastManager_1_NativeArrays_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04745040, ArraySortHelper_1_GenericCastManager_1_NativeArrays__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F5CE90, int32_t, BinarySearch_1, (app::GenericCastManager_1_Command_NativeArrays_UnityEngine_CapsulecastCommand___Array * array, int32_t index, int32_t length, app::GenericCastManager_1_Command_NativeArrays_UnityEngine_CapsulecastCommand_ value, app::IComparer_1_GenericCastManager_1_NativeArrays_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04792A28, ArraySortHelper_1_GenericCastManager_1_NativeArrays__BinarySearch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F5D060, void, Sort_2, (app::GenericCastManager_1_Command_NativeArrays_UnityEngine_CapsulecastCommand___Array * keys, int32_t index, int32_t length, app::Comparison_1_GenericCastManager_1_NativeArrays_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0473A870, ArraySortHelper_1_GenericCastManager_1_NativeArrays__Sort_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F31D30, int32_t, InternalBinarySearch_1, (app::GenericCastManager_1_Command_NativeArrays_UnityEngine_CapsulecastCommand___Array * array, int32_t index, int32_t length, app::GenericCastManager_1_Command_NativeArrays_UnityEngine_CapsulecastCommand_ value, app::IComparer_1_GenericCastManager_1_NativeArrays_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F31EA0, void, SwapIfGreater_1, (app::GenericCastManager_1_Command_NativeArrays_UnityEngine_CapsulecastCommand___Array * keys, app::Comparison_1_GenericCastManager_1_NativeArrays_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02F32090, void, Swap_1, (app::GenericCastManager_1_Command_NativeArrays_UnityEngine_CapsulecastCommand___Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort_1, (app::GenericCastManager_1_Command_NativeArrays_UnityEngine_CapsulecastCommand___Array * keys, int32_t left, int32_t length, app::Comparison_1_GenericCastManager_1_NativeArrays_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort_1, (app::GenericCastManager_1_Command_NativeArrays_UnityEngine_CapsulecastCommand___Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_GenericCastManager_1_NativeArrays_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F32150, int32_t, PickPivotAndPartition_1, (app::GenericCastManager_1_Command_NativeArrays_UnityEngine_CapsulecastCommand___Array * keys, int32_t lo, int32_t hi, app::Comparison_1_GenericCastManager_1_NativeArrays_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort_1, (app::GenericCastManager_1_Command_NativeArrays_UnityEngine_CapsulecastCommand___Array * keys, int32_t lo, int32_t hi, app::Comparison_1_GenericCastManager_1_NativeArrays_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F325F0, void, DownHeap_1, (app::GenericCastManager_1_Command_NativeArrays_UnityEngine_CapsulecastCommand___Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_GenericCastManager_1_NativeArrays_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F329C0, void, InsertionSort_1, (app::GenericCastManager_1_Command_NativeArrays_UnityEngine_CapsulecastCommand___Array * keys, int32_t lo, int32_t hi, app::Comparison_1_GenericCastManager_1_NativeArrays_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F5D1B0, void, Sort_3, (app::GenericCastManager_1_Command_NativeArrays_UnityEngine_RaycastCommand___Array * keys, int32_t index, int32_t length, app::IComparer_1_GenericCastManager_1_NativeArrays__1* comparer))
    IL2CPP_REGISTER_METHODINFO(0x047087F8, ArraySortHelper_1_GenericCastManager_1_NativeArrays__1_Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F5D4D0, int32_t, BinarySearch_2, (app::GenericCastManager_1_Command_NativeArrays_UnityEngine_RaycastCommand___Array * array, int32_t index, int32_t length, app::GenericCastManager_1_Command_NativeArrays_UnityEngine_RaycastCommand_ value, app::IComparer_1_GenericCastManager_1_NativeArrays__1* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04755E00, ArraySortHelper_1_GenericCastManager_1_NativeArrays__1_BinarySearch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F5D6A0, void, Sort_4, (app::GenericCastManager_1_Command_NativeArrays_UnityEngine_RaycastCommand___Array * keys, int32_t index, int32_t length, app::Comparison_1_GenericCastManager_1_NativeArrays__1* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04789370, ArraySortHelper_1_GenericCastManager_1_NativeArrays__1_Sort_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F31D30, int32_t, InternalBinarySearch_2, (app::GenericCastManager_1_Command_NativeArrays_UnityEngine_RaycastCommand___Array * array, int32_t index, int32_t length, app::GenericCastManager_1_Command_NativeArrays_UnityEngine_RaycastCommand_ value, app::IComparer_1_GenericCastManager_1_NativeArrays__1* comparer))
    IL2CPP_REGISTER_METHOD(0x02F31EA0, void, SwapIfGreater_2, (app::GenericCastManager_1_Command_NativeArrays_UnityEngine_RaycastCommand___Array * keys, app::Comparison_1_GenericCastManager_1_NativeArrays__1* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02F32090, void, Swap_2, (app::GenericCastManager_1_Command_NativeArrays_UnityEngine_RaycastCommand___Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort_2, (app::GenericCastManager_1_Command_NativeArrays_UnityEngine_RaycastCommand___Array * keys, int32_t left, int32_t length, app::Comparison_1_GenericCastManager_1_NativeArrays__1* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort_2, (app::GenericCastManager_1_Command_NativeArrays_UnityEngine_RaycastCommand___Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_GenericCastManager_1_NativeArrays__1* comparer))
    IL2CPP_REGISTER_METHOD(0x02F32150, int32_t, PickPivotAndPartition_2, (app::GenericCastManager_1_Command_NativeArrays_UnityEngine_RaycastCommand___Array * keys, int32_t lo, int32_t hi, app::Comparison_1_GenericCastManager_1_NativeArrays__1* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort_2, (app::GenericCastManager_1_Command_NativeArrays_UnityEngine_RaycastCommand___Array * keys, int32_t lo, int32_t hi, app::Comparison_1_GenericCastManager_1_NativeArrays__1* comparer))
    IL2CPP_REGISTER_METHOD(0x02F325F0, void, DownHeap_2, (app::GenericCastManager_1_Command_NativeArrays_UnityEngine_RaycastCommand___Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_GenericCastManager_1_NativeArrays__1* comparer))
    IL2CPP_REGISTER_METHOD(0x02F329C0, void, InsertionSort_2, (app::GenericCastManager_1_Command_NativeArrays_UnityEngine_RaycastCommand___Array * keys, int32_t lo, int32_t hi, app::Comparison_1_GenericCastManager_1_NativeArrays__1* comparer))
    IL2CPP_REGISTER_METHOD(0x02F5D7F0, void, Sort_5, (app::GenericCastManager_1_Command_NativeArrays_UnityEngine_SpherecastCommand___Array * keys, int32_t index, int32_t length, app::IComparer_1_GenericCastManager_1_NativeArrays__2* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04706160, ArraySortHelper_1_GenericCastManager_1_NativeArrays__2_Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F5DB10, int32_t, BinarySearch_3, (app::GenericCastManager_1_Command_NativeArrays_UnityEngine_SpherecastCommand___Array * array, int32_t index, int32_t length, app::GenericCastManager_1_Command_NativeArrays_UnityEngine_SpherecastCommand_ value, app::IComparer_1_GenericCastManager_1_NativeArrays__2* comparer))
    IL2CPP_REGISTER_METHODINFO(0x047682A0, ArraySortHelper_1_GenericCastManager_1_NativeArrays__2_BinarySearch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F5DCE0, void, Sort_6, (app::GenericCastManager_1_Command_NativeArrays_UnityEngine_SpherecastCommand___Array * keys, int32_t index, int32_t length, app::Comparison_1_GenericCastManager_1_NativeArrays__2* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0470E2D0, ArraySortHelper_1_GenericCastManager_1_NativeArrays__2_Sort_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F31D30, int32_t, InternalBinarySearch_3, (app::GenericCastManager_1_Command_NativeArrays_UnityEngine_SpherecastCommand___Array * array, int32_t index, int32_t length, app::GenericCastManager_1_Command_NativeArrays_UnityEngine_SpherecastCommand_ value, app::IComparer_1_GenericCastManager_1_NativeArrays__2* comparer))
    IL2CPP_REGISTER_METHOD(0x02F31EA0, void, SwapIfGreater_3, (app::GenericCastManager_1_Command_NativeArrays_UnityEngine_SpherecastCommand___Array * keys, app::Comparison_1_GenericCastManager_1_NativeArrays__2* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02F32090, void, Swap_3, (app::GenericCastManager_1_Command_NativeArrays_UnityEngine_SpherecastCommand___Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort_3, (app::GenericCastManager_1_Command_NativeArrays_UnityEngine_SpherecastCommand___Array * keys, int32_t left, int32_t length, app::Comparison_1_GenericCastManager_1_NativeArrays__2* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort_3, (app::GenericCastManager_1_Command_NativeArrays_UnityEngine_SpherecastCommand___Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_GenericCastManager_1_NativeArrays__2* comparer))
    IL2CPP_REGISTER_METHOD(0x02F32150, int32_t, PickPivotAndPartition_3, (app::GenericCastManager_1_Command_NativeArrays_UnityEngine_SpherecastCommand___Array * keys, int32_t lo, int32_t hi, app::Comparison_1_GenericCastManager_1_NativeArrays__2* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort_3, (app::GenericCastManager_1_Command_NativeArrays_UnityEngine_SpherecastCommand___Array * keys, int32_t lo, int32_t hi, app::Comparison_1_GenericCastManager_1_NativeArrays__2* comparer))
    IL2CPP_REGISTER_METHOD(0x02F325F0, void, DownHeap_3, (app::GenericCastManager_1_Command_NativeArrays_UnityEngine_SpherecastCommand___Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_GenericCastManager_1_NativeArrays__2* comparer))
    IL2CPP_REGISTER_METHOD(0x02F329C0, void, InsertionSort_3, (app::GenericCastManager_1_Command_NativeArrays_UnityEngine_SpherecastCommand___Array * keys, int32_t lo, int32_t hi, app::Comparison_1_GenericCastManager_1_NativeArrays__2* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_GenericCastManager_1_NativeArrays_
