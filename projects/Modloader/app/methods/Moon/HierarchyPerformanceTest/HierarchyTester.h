#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HierarchyTester.h>
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/CompositeTask.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/HierarchyDebugMenu_GameObjectItem.h>
#include <Modloader/app/structs/HierarchyTester_State__Enum.h>
#include <Modloader/app/structs/SceneRoot.h>
#include <Modloader/app/structs/SceneSample.h>
#include <Modloader/app/structs/SceneTestData.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Moon::HierarchyPerformanceTest::HierarchyTester {
    IL2CPP_REGISTER_METHOD(0x014A4E90, void, add_OnStarted, (app::HierarchyTester * this_ptr, app::Action* value))
    IL2CPP_REGISTER_METHOD(0x014A4F80, void, remove_OnStarted, (app::HierarchyTester * this_ptr, app::Action* value))
    IL2CPP_REGISTER_METHOD(0x014A5070, void, add_OnFinished, (app::HierarchyTester * this_ptr, app::Action* value))
    IL2CPP_REGISTER_METHOD(0x014A5160, void, remove_OnFinished, (app::HierarchyTester * this_ptr, app::Action* value))
    IL2CPP_REGISTER_METHOD(0x014A5250, bool, get_IsStopped, ())
    IL2CPP_REGISTER_METHOD(0x014A52F0, void, set_IsStopped, (bool value))
    IL2CPP_REGISTER_METHOD(0x014A53A0, bool, get_IsRunning, ())
    IL2CPP_REGISTER_METHOD(0x003FD740, float, get_Progress, (app::HierarchyTester * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014A54C0, void, set_Progress, (app::HierarchyTester * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x003FDAA0, float, get_EstimateTime, (app::HierarchyTester * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A47A00, void, set_EstimateTime, (app::HierarchyTester * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x002FBC40, app::SceneTestData*, get_Data, (app::HierarchyTester * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014A55C0, void, Scan_1, ())
    IL2CPP_REGISTER_METHOD(0x014A5710, void, Scan_2, (int32_t max_objects_to_scan))
    IL2CPP_REGISTER_METHOD(0x014A5870, void, Stop, ())
    IL2CPP_REGISTER_METHOD(0x014A5910, app::HierarchyTester*, CreateInstance, ())
    IL2CPP_REGISTER_METHOD(0x014A5A70, void, Scan_3, (app::HierarchyTester * this_ptr, app::SceneRoot* scene, int32_t max_objects_to_scan, bool use_prepare_and_finish_tasks))
    IL2CPP_REGISTER_METHOD(0x014A5D40, void, Update, (app::HierarchyTester * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014A5E30, void, OnGUI, (app::HierarchyTester * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014A6030, void, UpdateState, (app::HierarchyTester * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014A6270, void, ChangeState, (app::HierarchyTester * this_ptr, app::HierarchyTester_State__Enum new_state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateIdle, (app::HierarchyTester * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014A65C0, void, UpdateGettingReady, (app::HierarchyTester * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014A6C90, void, UpdateProcessing, (app::HierarchyTester * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014A6E00, void, UpdateDone, (app::HierarchyTester * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014A70C0, app::CompositeTask*, CreateProcessingTask, (app::HierarchyTester * this_ptr, app::SceneTestData* data))
    IL2CPP_REGISTER_METHOD(0x014A7A90, void, AddObjectMeasureTaskRecursively, (app::HierarchyTester * this_ptr, app::HierarchyDebugMenu_GameObjectItem* item, app::SceneSample* scene_sample, app::CompositeTask* root_task))
    IL2CPP_REGISTER_METHOD(0x014A7F30, app::GameObject*, GetArtGroupGameObject, (app::HierarchyTester * this_ptr, app::SceneRoot* scene_root))
    IL2CPP_REGISTER_METHOD(0x014A81D0, app::SceneRoot*, GetCurrentScene, ())
    IL2CPP_REGISTER_METHOD(0x014A8270, app::String*, FormatEstimateTime, (app::HierarchyTester * this_ptr, int32_t total_seconds))
    IL2CPP_REGISTER_METHOD(0x014A83A0, void, OnBaselineMeasureTaskFailed, (app::HierarchyTester * this_ptr, app::String* message))
    IL2CPP_REGISTER_METHOD(0x014A83B0, void, ctor, (app::HierarchyTester * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014A8740, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x014A87C0, void, _AddObjectMeasureTaskRecursively_b__54_0, (app::HierarchyTester * this_ptr))
} // namespace app::classes::Moon::HierarchyPerformanceTest::HierarchyTester
