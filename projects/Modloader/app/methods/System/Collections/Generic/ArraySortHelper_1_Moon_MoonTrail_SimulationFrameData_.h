#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MoonTrail_SimulationFrameData__Array.h>
#include <Modloader/app/structs/IComparer_1_Moon_MoonTrail_SimulationFrameData_.h>
#include <Modloader/app/structs/MoonTrail_SimulationFrameData.h>
#include <Modloader/app/structs/Comparison_1_Moon_MoonTrail_SimulationFrameData_.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_Moon_MoonTrail_SimulationFrameData_ {
    IL2CPP_REGISTER_METHOD(0x02F38940, void, Sort_1, (app::MoonTrail_SimulationFrameData__Array * keys, int32_t index, int32_t length, app::IComparer_1_Moon_MoonTrail_SimulationFrameData_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0474D558, ArraySortHelper_1_Moon_MoonTrail_SimulationFrameData__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F38C60, int32_t, BinarySearch, (app::MoonTrail_SimulationFrameData__Array * array, int32_t index, int32_t length, app::MoonTrail_SimulationFrameData value, app::IComparer_1_Moon_MoonTrail_SimulationFrameData_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x047786B8, ArraySortHelper_1_Moon_MoonTrail_SimulationFrameData__BinarySearch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F38E20, void, Sort_2, (app::MoonTrail_SimulationFrameData__Array * keys, int32_t index, int32_t length, app::Comparison_1_Moon_MoonTrail_SimulationFrameData_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04730AC0, ArraySortHelper_1_Moon_MoonTrail_SimulationFrameData__Sort_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F2DD70, int32_t, InternalBinarySearch, (app::MoonTrail_SimulationFrameData__Array * array, int32_t index, int32_t length, app::MoonTrail_SimulationFrameData value, app::IComparer_1_Moon_MoonTrail_SimulationFrameData_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F2DED0, void, SwapIfGreater, (app::MoonTrail_SimulationFrameData__Array * keys, app::Comparison_1_Moon_MoonTrail_SimulationFrameData_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02F2E0A0, void, Swap, (app::MoonTrail_SimulationFrameData__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::MoonTrail_SimulationFrameData__Array * keys, int32_t left, int32_t length, app::Comparison_1_Moon_MoonTrail_SimulationFrameData_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::MoonTrail_SimulationFrameData__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_Moon_MoonTrail_SimulationFrameData_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F2E150, int32_t, PickPivotAndPartition, (app::MoonTrail_SimulationFrameData__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Moon_MoonTrail_SimulationFrameData_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::MoonTrail_SimulationFrameData__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Moon_MoonTrail_SimulationFrameData_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F2E5D0, void, DownHeap, (app::MoonTrail_SimulationFrameData__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_Moon_MoonTrail_SimulationFrameData_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F2E990, void, InsertionSort, (app::MoonTrail_SimulationFrameData__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Moon_MoonTrail_SimulationFrameData_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_Moon_MoonTrail_SimulationFrameData_
