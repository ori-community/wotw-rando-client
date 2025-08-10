#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IMoonTest.h>
#include <Modloader/app/structs/List_1_RuntimeSceneMetaData_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/LogType__Enum.h>
#include <Modloader/app/structs/MoonProfilerFrame.h>
#include <Modloader/app/structs/RuntimeSceneMetaData.h>
#include <Modloader/app/structs/SceneFPSTest.h>
#include <Modloader/app/structs/SceneFPSTest_State__Enum.h>
#include <Modloader/app/structs/SceneRoot.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Texture2D.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::SceneFPSTest {
    IL2CPP_REGISTER_METHOD(0x00939BC0, app::List_1_RuntimeSceneMetaData_*, get_SceneList, app::SceneFPSTest* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00939C50, app::String*, GetInputFilePath, )
    IL2CPP_REGISTER_METHOD(0x00939D20, app::String*, GetDoneFilePath, )
    IL2CPP_REGISTER_METHOD(0x00939DF0, bool, IsRunning, )
    IL2CPP_REGISTER_METHOD(0x00939EC0, void, SetupTheTest, )
    IL2CPP_REGISTER_METHOD(0x0093A350, void, ReadSettingsAndStartTest, )
    IL2CPP_REGISTER_METHOD(0x0093AB50, void, Start, app::SceneFPSTest* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0093AE90, void, OnDestroy, app::SceneFPSTest* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, BuildEditorRuntimeSceneMetadata, app::SceneFPSTest* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0093AF70, void, BuildAdditionalTestsDictionaries, app::SceneFPSTest* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0093B850, void, FixedUpdate, app::SceneFPSTest* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0093C720, app::String*, GetKeepaliveFilePath, )
    IL2CPP_REGISTER_METHOD(0x0093C7F0, void, ChangeState, app::SceneFPSTest* this_ptr, app::SceneFPSTest_State__Enum state)
    IL2CPP_REGISTER_METHOD(0x0093E740, app::MoonProfilerFrame, MoonProfilerFrameFromDataProvider, app::SceneFPSTest* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0093E970, void, OnMemorySnapshotFinished, app::SceneFPSTest* this_ptr, app::String* arg1, bool arg2)
    IL2CPP_REGISTER_METHOD(
        0x0093E980,
        void,
        OnLogMessageReceived,
        app::SceneFPSTest* this_ptr,
        app::String* condition,
        app::String* stacktrace,
        app::LogType__Enum type
    )
    IL2CPP_REGISTER_METHOD(0x0093EA70, void, WriteAdditionalTestsData, app::SceneFPSTest* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0093EDC0, void, StartTestsThatBeginsOn, app::SceneFPSTest* this_ptr, app::SceneFPSTest_State__Enum current_state)
    IL2CPP_REGISTER_METHOD(0x0093EFD0, void, StopTestThatEndOn, app::SceneFPSTest* this_ptr, app::SceneFPSTest_State__Enum current_state)
    IL2CPP_REGISTER_METHOD(0x0093F250, void, CollectDataOnAdditionalTest, app::SceneFPSTest* this_ptr, app::IMoonTest* moon_test)
    IL2CPP_REGISTER_METHOD(0x0093F380, void, UpdateActiveAdditionalTests, app::SceneFPSTest* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0093F4A0, void, HandleLastTestFinished, app::SceneFPSTest* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0093FEB0, void, AdvanceMetaDataIndexToNextGoodScene, app::SceneFPSTest* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00940270, bool, IsCutscene, app::SceneFPSTest* this_ptr, app::String* scene)
    IL2CPP_REGISTER_METHOD(0x00940470, app::List_1_UnityEngine_Vector3_*, GetSceneSamples, app::SceneFPSTest* this_ptr, int32_t meta_data_index)
    IL2CPP_REGISTER_METHOD(0x00940A10, app::RuntimeSceneMetaData*, GetMetaData, app::SceneFPSTest* this_ptr, int32_t meta_data_index)
    IL2CPP_REGISTER_METHOD(0x00940AC0, bool, SceneHasSamples, app::SceneFPSTest* this_ptr, int32_t meta_data_index)
    IL2CPP_REGISTER_METHOD(0x00940B60, app::Vector3, GetSamplePosition, app::SceneFPSTest* this_ptr, int32_t meta_data_index, int32_t sample_index)
    IL2CPP_REGISTER_METHOD(0x00940C40, bool, isLastSample, app::SceneFPSTest* this_ptr, int32_t sample_index)
    IL2CPP_REGISTER_METHOD(0x00940D10, bool, IsLastLevel, app::SceneFPSTest* this_ptr, int32_t meta_data_index)
    IL2CPP_REGISTER_METHOD(0x00940DB0, void, LoadLevel, app::SceneFPSTest* this_ptr, int32_t meta_data_index)
    IL2CPP_REGISTER_METHOD(0x00940EC0, void, LoadEmptyLevel, app::SceneFPSTest* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00940FC0, void, MoveToSamplePosition, app::SceneFPSTest* this_ptr, int32_t meta_data_index, int32_t sample_index)
    IL2CPP_REGISTER_METHOD(0x00941230, float, GetTexturesMBytes, app::SceneFPSTest* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009417D0, float, GetAudioMBytes, app::SceneFPSTest* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00941990, app::Texture2D*, GetBackgroundTexture, app::SceneFPSTest* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00941C70, void, OnGUI, app::SceneFPSTest* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00941DF0, void, OnWindowUi, app::SceneFPSTest* this_ptr, int32_t window_id)
    IL2CPP_REGISTER_METHOD(0x00942040, void, OnSceneRootLoadEarlyStart, app::SceneFPSTest* this_ptr, app::SceneRoot* scene_root)
    IL2CPP_REGISTER_METHOD(0x009421E0, app::String*, GetSampleID_1, float x_position, float y_position, app::String* scene_name)
    IL2CPP_REGISTER_METHOD(0x00942320, app::String*, GetSampleID_2, int32_t meta_data_index, int32_t sample_index, app::String* scene_name)
    IL2CPP_REGISTER_METHOD(0x00942470, void, ctor, app::SceneFPSTest* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00942DD0, void, cctor, )
} // namespace app::classes::SceneFPSTest
