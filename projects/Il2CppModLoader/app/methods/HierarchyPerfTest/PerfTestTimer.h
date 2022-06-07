#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::HierarchyPerfTest::PerfTestTimer {
    IL2CPP_REGISTER_METHOD(0x01974370, bool, get_TestFinished, (app::PerfTestTimer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::PerfTestTimer_TestData *, GetTestTimingData, (app::PerfTestTimer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01974380, void, ctor, (app::PerfTestTimer * this_ptr, app::String * name, int32_t num_iterations_to_do, bool take_g_c_unload_timings))
    IL2CPP_REGISTER_METHOD(0x01974760, void, StartTimingTestIteration, (app::PerfTestTimer * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04727988, PerfTestTimer_StartTimingTestIteration__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01974830, void, EndTimingTestIteration, (app::PerfTestTimer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019749D0, void, MarkTestIsInvalid, (app::PerfTestTimer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01974B00, void, FinalizeTest, (app::PerfTestTimer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01974CA0, void, GetGcAndUnloadAssetsTimings, (app::PerfTestTimer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01974E00, void, _runGC, (app::PerfTestTimer * this_ptr))
}
