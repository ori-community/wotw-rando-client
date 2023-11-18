#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PerfTestResult.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Moon::HierarchyPerformanceTest::PerfTestResult {
    IL2CPP_REGISTER_METHOD(0x00B55DF0, void, ctor, (app::PerfTestResult * this_ptr, double cpu_time, double gpu_time))
    IL2CPP_REGISTER_METHOD(0x014A9990, app::String*, ToString, (app::PerfTestResult * this_ptr))
} // namespace app::classes::Moon::HierarchyPerformanceTest::PerfTestResult
