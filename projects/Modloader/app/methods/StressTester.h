#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/CageStructureTool.h>
#include <Modloader/app/structs/CageStructureTool_Vertex.h>
#include <Modloader/app/structs/DebugTeleportSettings.h>
#include <Modloader/app/structs/GravityPlatformMovementSettings.h>
#include <Modloader/app/structs/HashSet_1_CageStructureTool_Vertex_.h>
#include <Modloader/app/structs/HorizontalPlatformMovementSettings.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IStressTest.h>
#include <Modloader/app/structs/List_1_SceneMetaData_.h>
#include <Modloader/app/structs/List_1_StressTester_SceneIdentifier_.h>
#include <Modloader/app/structs/List_1_StressTester_StressTestPoint_.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/SceneMetaData.h>
#include <Modloader/app/structs/StressTester.h>
#include <Modloader/app/structs/StressTester_SceneIdentifier.h>
#include <Modloader/app/structs/StressTester_ScreenshotMethod__Enum.h>
#include <Modloader/app/structs/StressTester_TesterState__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::StressTester {
    IL2CPP_REGISTER_METHOD(0x0065F850, bool, get_StartingTest, )
    IL2CPP_REGISTER_METHOD(0x0065F8F0, void, set_StartingTest, bool value)
    IL2CPP_REGISTER_METHOD(0x0065F9A0, bool, get_AlwaysDrawDebugInfo, )
    IL2CPP_REGISTER_METHOD(0x0065FA40, void, set_AlwaysDrawDebugInfo, bool value)
    IL2CPP_REGISTER_METHOD(0x0065FBA0, app::String*, get_Message, app::StressTester* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0065FBB0, void, set_Message, app::StressTester* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0065FBC0, app::String*, get_ScreenshotFilename, app::StressTester* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0065FBD0, void, set_ScreenshotFilename, app::StressTester* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0065FBE0, app::String*, get_ScreenshotFilenameTemplate, app::StressTester* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0065FBF0, void, set_ScreenshotFilenameTemplate, app::StressTester* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0065FC00, bool, IsRunning, )
    IL2CPP_REGISTER_METHOD(0x0065FD90, app::String*, get_TestID, app::StressTester* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBA0, app::List_1_StressTester_StressTestPoint_*, get_OrderedPoints, app::StressTester* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBB0, void, set_OrderedPoints, app::StressTester* this_ptr, app::List_1_StressTester_StressTestPoint_* value)
    IL2CPP_REGISTER_METHOD(0x0065FDF0, void, UpdateTestID, app::StressTester* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0065FE30, int32_t, get_IsolatedTestSceneIdx, app::StressTester* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FF2C0, void, set_IsolatedTestSceneIdx, app::StressTester* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x0065FF00, app::StressTester_SceneIdentifier*, get_SceneToStartTestFrom, app::StressTester* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0065FFD0, bool, get_TestModeOn, )
    IL2CPP_REGISTER_METHOD(0x00660070, void, set_TestModeOn, bool value)
    IL2CPP_REGISTER_METHOD(0x00660120, app::IStressTest*, get_CurrentTest, app::StressTester* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00660200, int32_t, get_TestIndex, app::StressTester* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00660210, void, set_TestIndex, app::StressTester* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x002FBD40, app::Action*, get_OnTestSetupBegin, app::StressTester* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBD50, void, set_OnTestSetupBegin, app::StressTester* this_ptr, app::Action* value)
    IL2CPP_REGISTER_METHOD(0x002FBD60, app::Action*, get_OnTestStarted, app::StressTester* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBD70, void, set_OnTestStarted, app::StressTester* this_ptr, app::Action* value)
    IL2CPP_REGISTER_METHOD(0x006602E0, app::Action*, get_OnConsecutiveTestsFinished, )
    IL2CPP_REGISTER_METHOD(0x00660380, void, set_OnConsecutiveTestsFinished, app::Action* value)
    IL2CPP_REGISTER_METHOD(0x00660430, app::Action*, get_OnTestFinished, app::StressTester* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00660440, void, set_OnTestFinished, app::StressTester* this_ptr, app::Action* value)
    IL2CPP_REGISTER_METHOD(0x0065FD90, app::String*, GetTestID, app::StressTester* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00660450, app::Vector2, get_CurrentWaypoint, app::StressTester* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00660510, app::Vector2, get_PreviousWaypoint, app::StressTester* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006605D0, app::Vector2, get_CurentPathDirection, app::StressTester* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006606A0, app::CageStructureTool*, get_Cage, app::StressTester* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBC0, app::List_1_StressTester_SceneIdentifier_*, get_OverlapingScenes, app::StressTester* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00660770, void, TerminateEarly, app::StressTester* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00660780, void, OnEnable, app::StressTester* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00660900, void, OnDisable, app::StressTester* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006609E0, void, Update, app::StressTester* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00660AE0, app::IEnumerator*, StartTestFromScene, app::String* scene_names)
    IL2CPP_REGISTER_METHOD(0x00660C30, void, StartTest, app::StressTester* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, RegisterTester, app::IStressTest* test, bool verify_every_frame)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UnregisterTester, app::IStressTest* test)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, RefreshOrderedPoints, app::StressTester* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00660C40, app::List_1_SceneMetaData_*, GetAllScenesThatIntersectsWithBounds, app::StressTester* this_ptr, app::Rect path_bounds)
    IL2CPP_REGISTER_METHOD(0x00660D90, void, CalculatePathBounds, app::StressTester* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x002FA000,
        void,
        BuildOrderedPointsVector,
        app::StressTester* this_ptr,
        app::CageStructureTool_Vertex* current_vertex,
        app::HashSet_1_CageStructureTool_Vertex_** analyzed_vertices,
        app::List_1_SceneMetaData_* overlaping_scenes
    )
    IL2CPP_REGISTER_METHOD(
        0x006610B0,
        app::SceneMetaData*,
        GetSceneAt,
        app::StressTester* this_ptr,
        app::Vector3 point,
        app::List_1_SceneMetaData_* overlaping_scenes
    )
    IL2CPP_REGISTER_METHOD(0x006611C0, void, FlipPathDirection, app::StressTester* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00661380, void, ToogleFlipDirection, app::StressTester* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006613A0, void, SetUpTest, app::StressTester* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00662130, void, DoTeleport, app::StressTester* this_ptr, app::DebugTeleportSettings* setting)
    IL2CPP_REGISTER_METHOD(0x006623B0, bool, LoadSave, app::StressTester* this_ptr, app::String* path)
    IL2CPP_REGISTER_METHOD(0x00662740, void, ChangeState, app::StressTester* this_ptr, app::StressTester_TesterState__Enum new_state)
    IL2CPP_REGISTER_METHOD(0x00662970, void, OnEnterRunningConfigTests, app::StressTester* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00662980, void, OnEnterTakingScreenshot, app::StressTester* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00662B80, void, OnExitTakingScreenshot, app::StressTester* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00662CC0, void, SetScreenshotOverlays, app::StressTester* this_ptr, bool enable, bool complicated)
    IL2CPP_REGISTER_METHOD(0x00662EC0, void, OnEnterGettingReady, app::StressTester* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00663020, void, OnEnterDone, app::StressTester* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00663A10, void, OnEnterMoving, app::StressTester* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006640E0, void, ThrowAndWait, app::StressTester* this_ptr, float time)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnterResting, app::StressTester* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006645C0, void, OnEnterLoadingNextPath, app::StressTester* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006609E0, void, UpdateState, app::StressTester* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00664620, void, UpdateRunningConfigTests, app::StressTester* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006647F0, app::String*, GetCurrentSceneFromSceneManager, )
    IL2CPP_REGISTER_METHOD(0x00664B70, void, UpdateScreenshotFilenameTemplate, app::StressTester* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00665410, void, TakeScreenshot, app::StressTester* this_ptr, app::String* identifier)
    IL2CPP_REGISTER_METHOD(
        0x00665740,
        void,
        CaptureScreenshot,
        app::StressTester* this_ptr,
        app::String* path,
        app::StressTester_ScreenshotMethod__Enum method_1
    )
    IL2CPP_REGISTER_METHOD(0x00665980, app::IEnumerator*, RecordScreenshot, app::StressTester* this_ptr, app::String* path)
    IL2CPP_REGISTER_METHOD(0x00665AD0, void, UpdateTakingScreenshot, app::StressTester* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00665FF0, void, UpdateGettingReady, app::StressTester* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006661A0, void, UpdateLoadingNextPath, app::StressTester* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00666440, void, SetupPlayer, app::StressTester* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006670A0, void, UpdateDone, app::StressTester* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00667460, void, UpdateMoving, app::StressTester* this_ptr, float delta_time)
    IL2CPP_REGISTER_METHOD(0x00668250, float, GetPauseTime, )
    IL2CPP_REGISTER_METHOD(0x00668330, void, HandleMoving, app::StressTester* this_ptr, float delta_time)
    IL2CPP_REGISTER_METHOD(0x00668670, void, HandleStressTests, app::StressTester* this_ptr, float delta_time)
    IL2CPP_REGISTER_METHOD(0x006689D0, void, SearchForNextTest, app::StressTester* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateResting, app::StressTester* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00668BA0, void, CreateFile, app::StressTester* this_ptr, app::String* path, app::String* text)
    IL2CPP_REGISTER_METHOD(0x00668BC0, void, MovePlayerTo, app::StressTester* this_ptr, app::Vector2 position)
    IL2CPP_REGISTER_METHOD(0x00668E10, void, SetNextWaypoint, app::StressTester* this_ptr, bool keepalive)
    IL2CPP_REGISTER_METHOD(0x00669460, void, UpdateKeepalive, app::StressTester* this_ptr, bool force)
    IL2CPP_REGISTER_METHOD(0x00669600, void, SkipWaypoint, app::StressTester* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006699E0, void, OutputPointPositions, app::StressTester* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00669F40, app::IStressTest*, GetValidInteractionTester, app::StressTester* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0066A1B0, void, ModifyGravityPlatformMovementSettings, app::StressTester* this_ptr, app::GravityPlatformMovementSettings* settings)
    IL2CPP_REGISTER_METHOD(
        0x0066A1F0,
        void,
        ModifyHorizontalPlatformMovementSettings,
        app::StressTester* this_ptr,
        app::HorizontalPlatformMovementSettings* settings
    )
    IL2CPP_REGISTER_METHOD(0x0066A240, void, SetSingleFixedUpdate, app::StressTester* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0066A290, void, OnGUI, app::StressTester* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0066B1A0, app::String*, GetInputFilePath, )
    IL2CPP_REGISTER_METHOD(0x0066B270, app::String*, GetDoneFilePath, )
    IL2CPP_REGISTER_METHOD(0x0066B340, app::String*, GetKeepaliveFilePath, )
    IL2CPP_REGISTER_METHOD(0x0066B410, app::String*, GetPlatformIdentifier, )
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldDisable, app::StressTester* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldEnable, app::StressTester* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldChildrenEnable, app::StressTester* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ShouldSetMoonReady, app::StressTester* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0066B490, void, SuspendGameplay, )
    IL2CPP_REGISTER_METHOD(0x0066B520, void, ResumeGameplay, )
    IL2CPP_REGISTER_METHOD(0x0066B5B0, void, ctor, app::StressTester* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0066BCE0, void, cctor, )
} // namespace app::classes::StressTester
