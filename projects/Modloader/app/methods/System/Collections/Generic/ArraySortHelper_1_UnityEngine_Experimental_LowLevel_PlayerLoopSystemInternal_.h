#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayerLoopSystemInternal__Array.h>
#include <Modloader/app/structs/Comparison_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystemInternal_.h>
#include <Modloader/app/structs/IComparer_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystemInternal_.h>
#include <Modloader/app/structs/PlayerLoopSystemInternal.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystemInternal_ {
    IL2CPP_REGISTER_METHOD(0x02F68210, void, Sort_1, (app::PlayerLoopSystemInternal__Array * keys, int32_t index, int32_t length, app::IComparer_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystemInternal_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F68530, int32_t, BinarySearch, (app::PlayerLoopSystemInternal__Array * array, int32_t index, int32_t length, app::PlayerLoopSystemInternal value, app::IComparer_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystemInternal_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F68700, void, Sort_2, (app::PlayerLoopSystemInternal__Array * keys, int32_t index, int32_t length, app::Comparison_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystemInternal_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F31D30, int32_t, InternalBinarySearch, (app::PlayerLoopSystemInternal__Array * array, int32_t index, int32_t length, app::PlayerLoopSystemInternal value, app::IComparer_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystemInternal_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F31EA0, void, SwapIfGreater, (app::PlayerLoopSystemInternal__Array * keys, app::Comparison_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystemInternal_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02F32090, void, Swap, (app::PlayerLoopSystemInternal__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::PlayerLoopSystemInternal__Array * keys, int32_t left, int32_t length, app::Comparison_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystemInternal_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::PlayerLoopSystemInternal__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystemInternal_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F32150, int32_t, PickPivotAndPartition, (app::PlayerLoopSystemInternal__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystemInternal_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::PlayerLoopSystemInternal__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystemInternal_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F325F0, void, DownHeap, (app::PlayerLoopSystemInternal__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystemInternal_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F329C0, void, InsertionSort, (app::PlayerLoopSystemInternal__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystemInternal_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystemInternal_
