#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_Int32_Moon_HierarchyPerformanceTest_HPerfTestResult_.h>
#include <Modloader/app/structs/HierarchyDebugMenu_GameObjectItem.h>
#include <Modloader/app/structs/HierarchyTestOutputBase_1_SceneTestData_.h>
#include <Modloader/app/structs/List_1_Moon_HierarchyPerformanceTest_HPerfTestResult_.h>
#include <Modloader/app/structs/SceneTestData.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Moon::HierarchyPerformanceTest::HierarchyTestOutputBase_1_SceneTestData_ {
    IL2CPP_REGISTER_METHOD(0x0271F050, void, ctor, app::HierarchyTestOutputBase_1_SceneTestData_* this_ptr, app::SceneTestData* data)
    IL2CPP_REGISTER_METHOD(
        0x0271F560,
        app::List_1_Moon_HierarchyPerformanceTest_HPerfTestResult_*,
        SortResults,
        app::HierarchyTestOutputBase_1_SceneTestData_* this_ptr,
        app::HierarchyDebugMenu_GameObjectItem* root,
        app::Dictionary_2_System_Int32_Moon_HierarchyPerformanceTest_HPerfTestResult_* raw_results
    )
    IL2CPP_REGISTER_METHOD(
        0x0271F1B0,
        app::String*,
        Save,
        app::HierarchyTestOutputBase_1_SceneTestData_* this_ptr,
        app::String* file_name,
        app::String* file_extension
    )
} // namespace app::classes::Moon::HierarchyPerformanceTest::HierarchyTestOutputBase_1_SceneTestData_
