#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::HierarchyPerformanceTest::HierarchyTestOutputBase_1_SceneTestData_ {
    IL2CPP_REGISTER_METHOD(0x0271F050, void, ctor, (app::HierarchyTestOutputBase_1_SceneTestData_ * this_ptr, app::SceneTestData * data))
    IL2CPP_REGISTER_METHODINFO(0x047079C0, HierarchyTestOutputBase_1_SceneTestData___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0271F560, app::List_1_Moon_HierarchyPerformanceTest_HPerfTestResult_ *, SortResults, (app::HierarchyTestOutputBase_1_SceneTestData_ * this_ptr, app::HierarchyDebugMenu_GameObjectItem * root, app::Dictionary_2_System_Int32_Moon_HierarchyPerformanceTest_HPerfTestResult_ * raw_results))
    IL2CPP_REGISTER_METHODINFO(0x04770198, HierarchyTestOutputBase_1_SceneTestData__SortResults__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0271F1B0, app::String *, Save, (app::HierarchyTestOutputBase_1_SceneTestData_ * this_ptr, app::String * file_name, app::String * file_extension))
}
