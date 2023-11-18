#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayerLoopSystem__Array.h>
#include <Modloader/app/structs/Comparison_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystem_.h>
#include <Modloader/app/structs/IComparer_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystem_.h>
#include <Modloader/app/structs/PlayerLoopSystem.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystem_ {
    IL2CPP_REGISTER_METHOD(0x02F67BD0, void, Sort_1, (app::PlayerLoopSystem__Array * keys, int32_t index, int32_t length, app::IComparer_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystem_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F67EF0, int32_t, BinarySearch, (app::PlayerLoopSystem__Array * array, int32_t index, int32_t length, app::PlayerLoopSystem value, app::IComparer_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystem_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F680C0, void, Sort_2, (app::PlayerLoopSystem__Array * keys, int32_t index, int32_t length, app::Comparison_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystem_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F31D30, int32_t, InternalBinarySearch, (app::PlayerLoopSystem__Array * array, int32_t index, int32_t length, app::PlayerLoopSystem value, app::IComparer_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystem_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F31EA0, void, SwapIfGreater, (app::PlayerLoopSystem__Array * keys, app::Comparison_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystem_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02F32090, void, Swap, (app::PlayerLoopSystem__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::PlayerLoopSystem__Array * keys, int32_t left, int32_t length, app::Comparison_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystem_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::PlayerLoopSystem__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystem_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F32150, int32_t, PickPivotAndPartition, (app::PlayerLoopSystem__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystem_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::PlayerLoopSystem__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystem_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F325F0, void, DownHeap, (app::PlayerLoopSystem__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystem_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F329C0, void, InsertionSort, (app::PlayerLoopSystem__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystem_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystem_
