#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneFPSTest__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneFPSTest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneFPSTest__Fields_DEFINED)
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SceneFPSTest_State__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_SceneFPSTest_State__Enum_DEFINED) && defined(IL2CPP_STRUCT_DateTime_DEFINED)
#define IL2CPP_STRUCT_SceneFPSTest__Fields_DEFINED
struct String;
struct DroppedFrameMonitor;
struct FpsTcTestOutput;
struct FPSTestOutput;
struct FPSTestResult;
struct FPSSampleData;
struct IProfilingDataProvider;
struct LogCallbackHandler;
struct JUnitReporter_TestSuite;
struct JUnitReporter_Failure;
struct SceneFPSTest_TestEntry__Array;
struct Dictionary_2_SceneFPSTest_State_List_1_System_Int32_;
struct Dictionary_2_System_Type_System_String_;
struct List_1_RuntimeSceneMetaData_;
struct List_1_System_String_;
struct WorldEvents;
struct Dictionary_2_System_Int32_List_1_UnityEngine_Vector3_;
struct Texture2D;
struct SceneFPSTest__Fields {
    struct MonoBehaviour__Fields _;
    bool ShouldCreateScreenshot;
    bool ShouldCreateMemoryReport;
    bool ShouldRunSample;
    bool ShouldRunCPUSample;
    bool ShouldRunCPUBSample;
    bool ShouldSkipCutcenes;
    struct String* OutputFilePath;
    SceneFPSTest_State__Enum m_currentState;

    float m_currentStateTime;
    float m_currentStateTimeNoLoading;
    int32_t m_currentSampleIndex;
    struct DroppedFrameMonitor* m_droppedFrameMonitor;
    float m_sceneLoadingStartTime;
    float m_sceneUnladingStartTime;
    float m_sceneLoadingGraceTime;
    float m_sampleSwitchingGraceTime;
    float m_sampleDuration;
    float m_CPUSampleDuration;
    float m_CPUBSampleDuration;
    struct String* m_emptyTestSceneName;
    struct FpsTcTestOutput* m_fpsTcTestOutput;
    struct FPSTestOutput* m_fpsTestOutput;
    struct FPSTestResult* m_fpsTestResult;
    struct FPSSampleData* m_fpsSampleData;
    struct IProfilingDataProvider* m_dataProvider;
    int32_t m_startFrame;
    struct DateTime m_dateTime;
    struct String* m_workspace;
    struct LogCallbackHandler* m_logCallbackHandler;
    struct JUnitReporter_TestSuite* m_testSuite;
    struct JUnitReporter_Failure* m_failure;
    int32_t m_exceptionCount;
    bool m_shouldDisplayFinishedMesage;
    struct String* m_currentException;
    struct SceneFPSTest_TestEntry__Array* m_additionalTests;
    struct Dictionary_2_SceneFPSTest_State_List_1_System_Int32_* m_additionalTestsBeginStateToIndx;
    struct Dictionary_2_SceneFPSTest_State_List_1_System_Int32_* m_additionalTestsEndStateToIndx;
    struct Dictionary_2_System_Type_System_String_* m_additionalTestsDataByType;
    struct List_1_RuntimeSceneMetaData_* m_editorScenes;
    struct List_1_System_String_* FPSTestData;
    bool m_memorySnapshotFinished;
    struct WorldEvents* m_mistyWoodsWorldEvents;
    int32_t m_oldScreenWidth;
    int32_t m_oldScreenHeight;
    struct Dictionary_2_System_Int32_List_1_UnityEngine_Vector3_* m_sceneSamplesCache;
    struct Texture2D* m_backgroundTexture;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SceneFPSTest__Fields_FWDDECL)
#define IL2CPP_STRUCT_SceneFPSTest__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_SceneFPSTest_State_List_1_System_Int32_.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32_List_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/Dictionary_2_System_Type_System_String_.h>
#include <Modloader/app/structs/DroppedFrameMonitor.h>
#include <Modloader/app/structs/FPSSampleData.h>
#include <Modloader/app/structs/FPSTestOutput.h>
#include <Modloader/app/structs/FPSTestResult.h>
#include <Modloader/app/structs/FpsTcTestOutput.h>
#include <Modloader/app/structs/IProfilingDataProvider.h>
#include <Modloader/app/structs/JUnitReporter_Failure.h>
#include <Modloader/app/structs/JUnitReporter_TestSuite.h>
#include <Modloader/app/structs/List_1_RuntimeSceneMetaData_.h>
#include <Modloader/app/structs/List_1_System_String_.h>
#include <Modloader/app/structs/LogCallbackHandler.h>
#include <Modloader/app/structs/SceneFPSTest_TestEntry__Array.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Texture2D.h>
#include <Modloader/app/structs/WorldEvents.h>
#endif
#undef IL2CPP_STRUCT_SceneFPSTest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneFPSTest__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SceneFPSTest__Fields_FWDDECL)
#include <Modloader/app/structs/SceneFPSTest__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneFPSTest__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
