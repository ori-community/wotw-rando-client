#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/HashSet_1_Moon_HierarchyPerformanceTest_HPerfTestResult_.h>
#include <Modloader/app/structs/HierarchyDebugMenu_GameObjectItem.h>
#include <Modloader/app/structs/HierarchyPerformanceTester_Old.h>
#include <Modloader/app/structs/List_1_Moon_HierarchyPerformanceTest_HPerfTestResult_.h>
#include <Modloader/app/structs/SceneRoot.h>
#include <Modloader/app/structs/State__Enum.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Moon::HierarchyPerformanceTest::HierarchyPerformanceTester_Old {
    IL2CPP_REGISTER_METHOD(0x0149BDF0, void, add_OnTestComplete, app::HierarchyPerformanceTester_Old* this_ptr, app::Action* value)
    IL2CPP_REGISTER_METHOD(0x0149BEE0, void, remove_OnTestComplete, app::HierarchyPerformanceTester_Old* this_ptr, app::Action* value)
    IL2CPP_REGISTER_METHOD(0x0149BFD0, void, Scan, app::HierarchyPerformanceTester_Old* this_ptr, app::SceneRoot* scene_root, bool debug_mode)
    IL2CPP_REGISTER_METHOD(
        0x0149C210,
        void,
        AddGameObjectsRecursively,
        app::HierarchyPerformanceTester_Old* this_ptr,
        app::HierarchyDebugMenu_GameObjectItem* item
    )
    IL2CPP_REGISTER_METHOD(0x00DFE800, bool, get_IsRunning, app::HierarchyPerformanceTester_Old* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0149C340, int32_t, get_ObjectsLeft, app::HierarchyPerformanceTester_Old* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0149C3D0, void, ChangeState, app::HierarchyPerformanceTester_Old* this_ptr, app::State__Enum state)
    IL2CPP_REGISTER_METHOD(0x0149C830, void, Update, app::HierarchyPerformanceTester_Old* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0149C8A0, void, UpdateState, app::HierarchyPerformanceTester_Old* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0149CAD0,
        void,
        SaveResultsIntoFile,
        app::HierarchyPerformanceTester_Old* this_ptr,
        app::String* file_name,
        app::String* file_extension
    )
    IL2CPP_REGISTER_METHOD(
        0x0149D370,
        app::List_1_Moon_HierarchyPerformanceTest_HPerfTestResult_*,
        SortResults,
        app::HierarchyPerformanceTester_Old* this_ptr,
        app::HashSet_1_Moon_HierarchyPerformanceTest_HPerfTestResult_* results
    )
    IL2CPP_REGISTER_METHOD(
        0x0149D4E0,
        void,
        AddResultsRecursively,
        app::HierarchyPerformanceTester_Old* this_ptr,
        app::GameObject* root,
        app::List_1_Moon_HierarchyPerformanceTest_HPerfTestResult_* sorted_results
    )
    IL2CPP_REGISTER_METHOD(0x0149DE00, void, StartTest, app::HierarchyPerformanceTester_Old* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0149DE70, void, EndTest, app::HierarchyPerformanceTester_Old* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0149DE90, void, OnEnterIdle, app::HierarchyPerformanceTester_Old* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0149DF40, void, OnEnterMeasureBaseline, app::HierarchyPerformanceTester_Old* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0149DFE0, void, OnEnterPrepare, app::HierarchyPerformanceTester_Old* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0149E110, void, OnEnterProcess, app::HierarchyPerformanceTester_Old* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0149E1B0, void, OnEnterPost, app::HierarchyPerformanceTester_Old* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExitIdle, app::HierarchyPerformanceTester_Old* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0149E680, void, OnExitMeasureBaseline, app::HierarchyPerformanceTester_Old* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExitPrepare, app::HierarchyPerformanceTester_Old* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0149E870, void, OnExitProcess, app::HierarchyPerformanceTester_Old* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExitPost, app::HierarchyPerformanceTester_Old* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0149E910, void, OnIdleUpdate, app::HierarchyPerformanceTester_Old* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0149EA20, void, OnMeasureBaselineUpdate, app::HierarchyPerformanceTester_Old* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0149EA40, void, OnPrepareUpdate, app::HierarchyPerformanceTester_Old* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0149EA60, void, OnProcessUpdate, app::HierarchyPerformanceTester_Old* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPostUpdate, app::HierarchyPerformanceTester_Old* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0149EA80, double, GetCurrentCapturedCPUTime, app::HierarchyPerformanceTester_Old* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0149EB30, double, GetCurrentCapturedGPUTime, app::HierarchyPerformanceTester_Old* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0149EBE0, double, GetCurrentCapturedSRPGameViewTime, app::HierarchyPerformanceTester_Old* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0149EC90, app::String*, GetFullPath, app::HierarchyPerformanceTester_Old* this_ptr, app::GameObject* game_object)
    IL2CPP_REGISTER_METHOD(0x0149EEC0, app::GameObject*, GetArtGroupGameObject, app::HierarchyPerformanceTester_Old* this_ptr, app::SceneRoot* scene_root)
    IL2CPP_REGISTER_METHOD(0x0149F160, void, ctor, app::HierarchyPerformanceTester_Old* this_ptr)
} // namespace app::classes::Moon::HierarchyPerformanceTest::HierarchyPerformanceTester_Old
