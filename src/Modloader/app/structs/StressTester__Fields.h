#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StressTester__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StressTester__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StressTester__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/StressTester_ScreenshotState__Enum.h>
#include <Modloader/app/structs/StressTester_TesterState__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Rect_DEFINED) && defined(IL2CPP_STRUCT_StressTester_TesterState__Enum_DEFINED) && defined(IL2CPP_STRUCT_StressTester_ScreenshotState__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_StressTester__Fields_DEFINED
struct StressTester;
struct AbilitySetAsset;
struct CageStructureTool;
struct List_1_StressTester_StressTestPoint_;
struct List_1_StressTester_SceneIdentifier_;
struct Dictionary_2_SceneMetaData_System_Int32_;
struct String;
struct Action;
struct XboxRecorder;
struct IStressTest;
struct DebugTeleportSettings;
struct List_1_UnityEngine_ScriptableObject_;
struct StressTester__Fields {
    struct MonoBehaviour__Fields _;
    struct StressTester* NextPath;
    bool ConsecutivePath;
    bool InvertPath;
    bool m_screenshotReady;
    float Speed;
    float m_defaultSpeed;
    float StressTestCooldown;
    struct AbilitySetAsset* AbilitiesToEnable;
    bool StartTestOnAwake;
    bool DrawDebugInfo;
    bool SetSingleFixUpdate;
    bool VSyncOff;
    bool SkipStressTests;
    bool GiveSpells;
    float m_loadNextPathStartTime;
    int32_t m_isolatedTestSceneIdx;
    struct CageStructureTool* m_cageStructure;
    struct List_1_StressTester_StressTestPoint_* m_orderedPoints;
    struct List_1_StressTester_SceneIdentifier_* m_overlapingScenes;
    struct Dictionary_2_SceneMetaData_System_Int32_* m_metaToSceneIdentifierIdx;
    struct Rect m_pathBounds;
    StressTester_TesterState__Enum m_currentState;

    StressTester_ScreenshotState__Enum m_currentScreenshotState;

    struct String* m_testID;
    float m_testCoolDown;
    float m_timer;
    int32_t m_waypointIndex;
    float m_timeBetweenWaypoints;
    int32_t m_lastWaypointIndex;
    int32_t m_lastWaypointScreenshot;
    struct String* m_lastScreenshotScene;
    float m_screenshotTimer;
    float m_screenshotPauseDuration;
    struct Vector2 m_targetPosition;
    struct Action* m_onTestSetupBegin;
    struct Action* m_onTestStarted;
    struct Action* m_onTestFinished;
    int32_t m_currentTestIndx;
    struct XboxRecorder* m_recorder;
    struct IStressTest* m_currentInteractionTest;
    int32_t m_originalVSyncCount;
    float m_originalDelta;
    struct String* _Message_k__BackingField;
    struct String* _ScreenshotFilename_k__BackingField;
    struct String* _ScreenshotFilenameTemplate_k__BackingField;
    float m_currentWaypointTime;
    float m_currentConfigTestTime;
    bool MashX;
    bool KeepKu;
    struct DebugTeleportSettings* Teleport;
    struct List_1_UnityEngine_ScriptableObject_* UberStates;
    struct String* SavePath;
    bool m_terminateEarly;
    bool m_resumeMoving;
    float m_waitTime;
    struct Vector3 m_throwVector;
    float m_roundFactor;
    bool m_wasPaused;
    float m_lockTime;
    float m_keepaliveCountdown;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StressTester__Fields_FWDDECL)
#define IL2CPP_STRUCT_StressTester__Fields_FWDDECL
#include <Modloader/app/structs/AbilitySetAsset.h>
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/CageStructureTool.h>
#include <Modloader/app/structs/DebugTeleportSettings.h>
#include <Modloader/app/structs/Dictionary_2_SceneMetaData_System_Int32_.h>
#include <Modloader/app/structs/IStressTest.h>
#include <Modloader/app/structs/List_1_StressTester_SceneIdentifier_.h>
#include <Modloader/app/structs/List_1_StressTester_StressTestPoint_.h>
#include <Modloader/app/structs/List_1_UnityEngine_ScriptableObject_.h>
#include <Modloader/app/structs/StressTester.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XboxRecorder.h>
#endif
#undef IL2CPP_STRUCT_StressTester__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StressTester__Fields_DEFINED) && !defined(IL2CPP_STRUCT_StressTester__Fields_FWDDECL)
#include <Modloader/app/structs/StressTester__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StressTester__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
