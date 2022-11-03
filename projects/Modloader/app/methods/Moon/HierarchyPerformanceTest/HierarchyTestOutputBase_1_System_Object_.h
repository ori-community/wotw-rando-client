#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::HierarchyPerformanceTest::HierarchyTestOutputBase_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x0271F050, void, ctor, (app::HierarchyTestOutputBase_1_System_Object_ * this_ptr, app::Object* data))
    IL2CPP_REGISTER_METHOD(0x0271F1B0, app::String*, Save, (app::HierarchyTestOutputBase_1_System_Object_ * this_ptr, app::String* file_name, app::String* file_extension))
    IL2CPP_REGISTER_METHOD(0x0271F560, app::List_1_Moon_HierarchyPerformanceTest_HPerfTestResult_*, SortResults, (app::HierarchyTestOutputBase_1_System_Object_ * this_ptr, app::HierarchyDebugMenu_GameObjectItem* root, app::Dictionary_2_System_Int32_Moon_HierarchyPerformanceTest_HPerfTestResult_* raw_results))
    IL2CPP_REGISTER_METHOD(0x0271F710, void, AddResultsRecursively, (app::HierarchyTestOutputBase_1_System_Object_ * this_ptr, app::GameObject* root, app::List_1_Moon_HierarchyPerformanceTest_HPerfTestResult_* sorted_results, app::Dictionary_2_System_Int32_Moon_HierarchyPerformanceTest_HPerfTestResult_* raw_results))
} // namespace app::classes::Moon::HierarchyPerformanceTest::HierarchyTestOutputBase_1_System_Object_
