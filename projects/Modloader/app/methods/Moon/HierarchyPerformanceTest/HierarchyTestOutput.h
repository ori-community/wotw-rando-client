#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::HierarchyPerformanceTest::HierarchyTestOutput {
    IL2CPP_REGISTER_METHOD(0x014A35B0, void, ctor, (app::HierarchyTestOutput * this_ptr, app::SceneTestData* data))
    IL2CPP_REGISTER_METHOD(0x014A3710, void, AppendResults, (app::HierarchyTestOutput * this_ptr, app::List_1_Moon_HierarchyPerformanceTest_HPerfTestResult_* sorted_results, app::String* tag, app::StringBuilder* sb, bool check_error))
    IL2CPP_REGISTER_METHOD(0x014A38B0, app::String*, FormatResult, (app::HierarchyTestOutput * this_ptr, app::String* tag, app::HPerfTestResult* result))
    IL2CPP_REGISTER_METHOD(0x014A3C40, void, BuildContent, (app::HierarchyTestOutput * this_ptr, app::StringBuilder* sb))
} // namespace app::classes::Moon::HierarchyPerformanceTest::HierarchyTestOutput
