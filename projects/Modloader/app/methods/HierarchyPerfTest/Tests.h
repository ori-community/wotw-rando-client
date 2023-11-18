#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/List_1_System_Object_.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Quaternion_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Transform_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Tests_CompoentRunnerID__Enum.h>
#include <Modloader/app/structs/Tests_UnityFunctionID__Enum.h>
#include <Modloader/app/structs/Transform.h>

namespace app::classes::HierarchyPerfTest::Tests {
    IL2CPP_REGISTER_METHOD(0x019776A0, app::IEnumerator*, RunTests, (app::String * scene_name))
    IL2CPP_REGISTER_METHOD(0x019777F0, app::List_1_UnityEngine_GameObject_*, GetAllLeafNodes, (app::List_1_UnityEngine_GameObject_ * allnodes))
    IL2CPP_REGISTER_METHOD(0x01977A10, app::List_1_UnityEngine_Transform_*, GetAllChildTransforms, (app::List_1_UnityEngine_Transform_ * transforms))
    IL2CPP_REGISTER_METHOD(0x01977C20, void, PopulateLeafNodesRecursive, (app::Transform * current, app::List_1_UnityEngine_GameObject_* leaf_nodes_list))
    IL2CPP_REGISTER_METHOD(0x01977E40, float, GetRandomPosAwayFromZero, ())
    IL2CPP_REGISTER_METHOD(0x01977F10, app::IEnumerator*, DoLevelLoadUnloadTestTests, (app::String * scene_name))
    IL2CPP_REGISTER_METHOD(0x01978060, app::IEnumerator*, DoBasicFrameTimeTests, (app::List_1_UnityEngine_GameObject_ * root_objects))
    IL2CPP_REGISTER_METHOD(0x019781B0, app::IEnumerator*, DoComponentUpdateTests, ())
    IL2CPP_REGISTER_METHOD(0x019782F0, app::IEnumerator*, DoEnableDisableTest, (app::String * base_test_name, app::List_1_UnityEngine_GameObject_* objects_shuffled))
    IL2CPP_REGISTER_METHOD(0x01978450, app::IEnumerator*, DoMovementTests, (app::String * base_test_name, app::List_1_UnityEngine_Transform_* transforms_to_move, app::List_1_UnityEngine_Vector3_* positions, app::List_1_UnityEngine_Quaternion_* rotations, app::List_1_UnityEngine_Vector3_* scales))
    IL2CPP_REGISTER_METHOD(0x019785D0, app::IEnumerator*, SetupPosition, (app::List_1_UnityEngine_Transform_ * transforms_to_move, app::List_1_UnityEngine_Vector3_* positions, app::List_1_UnityEngine_Quaternion_* rotations, app::List_1_UnityEngine_Vector3_* scales))
    IL2CPP_REGISTER_METHOD(0x01978740, app::IEnumerator*, DoReparentTest, (app::String * base_test_name, app::List_1_UnityEngine_Transform_* transforms_to_reparent, app::List_1_UnityEngine_Transform_* new_parents))
    IL2CPP_REGISTER_METHOD(0x019788B0, app::IEnumerator*, DoReparentAndTransformTest, (app::String * base_test_name, app::List_1_UnityEngine_Transform_* transforms_to_reparent, app::List_1_UnityEngine_Transform_* new_parents, app::List_1_UnityEngine_Vector3_* positions, app::List_1_UnityEngine_Quaternion_* rotations, app::List_1_UnityEngine_Vector3_* scales))
    IL2CPP_REGISTER_METHOD(0x01978A40, app::IEnumerator*, WaitForNSeconds, (float seconds))
    IL2CPP_REGISTER_METHOD(0x01978BA0, void, OnFirstLastRunnerFunctionCalled, (app::Tests_CompoentRunnerID__Enum runner_i_d, app::Tests_UnityFunctionID__Enum function))
    IL2CPP_REGISTER_METHOD(0x01978D10, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x01549CA0, void, ShuffleList_1, (app::List_1_System_Object_ * list))
    IL2CPP_REGISTER_METHOD(0x01549CA0, void, ShuffleList_2, (app::List_1_UnityEngine_GameObject_ * list))
    IL2CPP_REGISTER_METHOD(0x01549CA0, void, ShuffleList_3, (app::List_1_UnityEngine_Transform_ * list))
} // namespace app::classes::HierarchyPerfTest::Tests
