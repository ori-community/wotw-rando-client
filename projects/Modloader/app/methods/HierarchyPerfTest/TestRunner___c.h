#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PerfTestTimer_TestData.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TestRunner_c.h>

namespace app::classes::HierarchyPerfTest::TestRunner___c {
    IL2CPP_REGISTER_METHOD(0x01976ED0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::TestRunner_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01977010, app::String*, _DumpDataForScene_b__15_0, app::TestRunner_c* this_ptr, app::PerfTestTimer_TestData* data)
} // namespace app::classes::HierarchyPerfTest::TestRunner___c
