#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::HierarchySuspensionTest_PerfTestResult {
    IL2CPP_REGISTER_METHOD(0x00B55DF0, void, ctor, (app::HierarchySuspensionTest_PerfTestResult * this_ptr, double cpu_time, double gpu_time))
    IL2CPP_REGISTER_METHOD(0x00B55E00, app::String *, ToString, (app::HierarchySuspensionTest_PerfTestResult * this_ptr))
}
