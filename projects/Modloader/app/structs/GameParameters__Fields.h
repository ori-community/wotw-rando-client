#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameParameters__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameParameters__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameParameters__Fields_DEFINED)
#include <Modloader/app/structs/StressTester_ScreenshotMethod__Enum.h>
#if defined(IL2CPP_STRUCT_StressTester_ScreenshotMethod__Enum_DEFINED)
#define IL2CPP_STRUCT_GameParameters__Fields_DEFINED
struct String;
struct __declspec(align(8)) GameParameters__Fields {
    struct String* StartInScene;
    struct String* RacesSuffix;
    bool DisableRaces;
    bool AllowTelemetry;
    bool ThreadedUpdateDelegator;
    struct String* BuildTag;
    bool InstantEnableFrustumObjectsOnTeleport;
    bool DebugSceneRoots;
    bool DebugTimeline;
    bool DebugPhysicsIgnoreCalls;
    bool BreakGameOnNonZeroCharacterPosition;
    int32_t MinimumRevision;
    bool DisableMotionBlur;
    bool SimpleBugReporter;
    bool runSceneLoadTest;
    bool runPoolPerfTest;
    bool runPerfTest;
    bool runExceptionsTest;
    struct String* runStressTestFromScene;
    struct String* startStressTestAtScene;
    struct String* endStressTestAtScene;
    float stressTestSpeed;
    bool collectPerfTestData;
    struct String* builderName;
    bool consecutiveStressTests;
    struct String* stressTestPlaylist;
    int32_t stressTestIndex;
    int32_t stressTestWaypoint;
    int32_t StressTestDelay;
    bool StressTestScreenshots;
    bool SkipToScreenshots;
    struct String* StressTestConfigs;
    bool LoadStressTestSaves;
    bool TakeMemorySnapshots;
    struct String* LogFile;
    bool debugEnabled;
    bool runSrpAsTask;
    bool DoRecording;
    struct String* RecordingServer;
    bool EnableExceptionReports;
    bool DisableBugReporter;
    bool DisableHDR;
    bool ChinaRegion;
    bool SetResoultionFromGameSettings;
    StressTester_ScreenshotMethod__Enum ScreenshotMethod;

    bool PauseOnAnyLoad;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GameParameters__Fields_FWDDECL)
#define IL2CPP_STRUCT_GameParameters__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_GameParameters__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameParameters__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GameParameters__Fields_FWDDECL)
#include <Modloader/app/structs/GameParameters__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameParameters__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
