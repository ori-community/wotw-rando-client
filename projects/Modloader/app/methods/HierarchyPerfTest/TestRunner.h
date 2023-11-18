#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TestRunner.h>
#include <Modloader/app/structs/AsyncOperation_1.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/List_1_HierarchyPerfTest_PerfTestTimer_TestData_.h>
#include <Modloader/app/structs/PerfTestTimer.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::HierarchyPerfTest::TestRunner {
    IL2CPP_REGISTER_METHOD(0x019753C0, bool, Run, ())
    IL2CPP_REGISTER_METHOD(0x019753E0, void, Awake, (app::TestRunner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01975470, void, SpawnTestRunnerAndStart, ())
    IL2CPP_REGISTER_METHOD(0x01975630, void, RecordTest, (app::TestRunner * this_ptr, app::PerfTestTimer* test))
    IL2CPP_REGISTER_METHOD(0x01975700, void, DumpData, (app::TestRunner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01975870, void, StartTestCoroutine, (app::TestRunner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01975A30, void, StopTestCoroutine, (app::TestRunner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01975AE0, app::IEnumerator*, TestCoroutine, (app::TestRunner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01975C20, app::IEnumerator*, RunScenesThroughTests, (app::TestRunner * this_ptr, app::String* test_prefix))
    IL2CPP_REGISTER_METHOD(0x01975D80, void, DumpDataForScene, (app::String * scene_name, app::List_1_HierarchyPerfTest_PerfTestTimer_TestData_* value))
    IL2CPP_REGISTER_METHOD(0x01976190, void, StartScene, (app::TestRunner * this_ptr, app::String* scene_name))
    IL2CPP_REGISTER_METHOD(0x01976320, app::AsyncOperation_1*, CallGcAndUnload, (app::TestRunner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01976450, void, Update, (app::TestRunner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01976460, void, UpdateTestCoroutines, (app::TestRunner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019765D0, void, OnGUI, (app::TestRunner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019766E0, void, UpdateTestProgress, (app::String * current_test))
    IL2CPP_REGISTER_METHOD(0x019767F0, void, ctor, (app::TestRunner * this_ptr))
} // namespace app::classes::HierarchyPerfTest::TestRunner
