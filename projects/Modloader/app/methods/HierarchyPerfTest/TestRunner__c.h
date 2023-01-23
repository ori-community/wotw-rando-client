#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/TestRunner_c.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/PerfTestTimer_TestData.h>

namespace app::classes::HierarchyPerfTest::TestRunner___c {
    IL2CPP_REGISTER_METHOD(0x01976ED0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::TestRunner_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01977010, app::String*, _DumpDataForScene_b__15_0, (app::TestRunner_c * this_ptr, app::PerfTestTimer_TestData* data))
    IL2CPP_REGISTER_METHODINFO(0x0471EF18, TestRunner_c__DumpDataForScene_b__15_0__MethodInfo)
} // namespace app::classes::HierarchyPerfTest::TestRunner___c
