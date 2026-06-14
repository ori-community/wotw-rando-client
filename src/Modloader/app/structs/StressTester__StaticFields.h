#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StressTester__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StressTester__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StressTester__StaticFields_DEFINED)
#include <Modloader/app/structs/StressTester_DoStressTestsOverrideMode__Enum.h>
#if defined(IL2CPP_STRUCT_StressTester_DoStressTestsOverrideMode__Enum_DEFINED)
#define IL2CPP_STRUCT_StressTester__StaticFields_DEFINED
struct StressTester;
struct Action;
struct List_1_IStressTest_;
struct List_1_System_String_;
struct ProfilingSettings_SettingType__Enum__Array;
struct HashSet_1_Moon_ISuspendable_;
struct StressTester__StaticFields {
    struct StressTester* Instance;
    bool _StartingTest_k__BackingField;
    StressTester_DoStressTestsOverrideMode__Enum DoStressTestsOverride;

    bool m_alwaysDrawDebugInfo;
    bool TakeScreenshots;
    struct Action* m_onConsecutiveTestsFinished;
    struct List_1_IStressTest_* s_stressTesters;
    struct List_1_IStressTest_* s_interactionTesters;
    struct List_1_System_String_* m_scenesWithScreenshotsTaken;
    bool ShowDebugUI;
    bool _TestModeOn_k__BackingField;
    struct ProfilingSettings_SettingType__Enum__Array* s_simpleOverlays;
    struct ProfilingSettings_SettingType__Enum__Array* s_complicatedOverlays;
    float s_pauseTime;
    struct HashSet_1_Moon_ISuspendable_* SuspendablesToIgnoreForGameplay;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StressTester__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_StressTester__StaticFields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/HashSet_1_Moon_ISuspendable_.h>
#include <Modloader/app/structs/List_1_IStressTest_.h>
#include <Modloader/app/structs/List_1_System_String_.h>
#include <Modloader/app/structs/ProfilingSettings_SettingType__Enum__Array.h>
#include <Modloader/app/structs/StressTester.h>
#endif
#undef IL2CPP_STRUCT_StressTester__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StressTester__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_StressTester__StaticFields_FWDDECL)
#include <Modloader/app/structs/StressTester__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StressTester__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
