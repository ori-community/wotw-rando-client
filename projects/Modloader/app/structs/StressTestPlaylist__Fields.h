#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StressTestPlaylist__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StressTestPlaylist__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StressTestPlaylist__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_StressTestPlaylist__Fields_DEFINED
struct List_1_StressTester_;
struct List_1_System_Tuple_2__5;
struct FrameCaptureTester;
struct Action;
struct String;
struct StressTestPlaylist__Fields {
    struct MonoBehaviour__Fields _;
    struct List_1_StressTester_* Tests;
    int32_t m_testIndex;
    int32_t m_playOnAwakeIndex;
    int32_t m_waypoint;
    int32_t m_speed;
    bool m_screenshots;
    struct List_1_System_Tuple_2__5* m_staticConfigs;
    int32_t m_configIndex;
    struct FrameCaptureTester* m_defaultTester;
    bool m_resumeQueued;
    float m_queueTime;
    struct Action* m_resumeAction;
    struct String* m_testID;
    struct Action* _OnTestSetupBegin_k__BackingField;
    struct Action* _OnTestStarted_k__BackingField;
    struct Action* _OnTestFinished_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StressTestPlaylist__Fields_FWDDECL)
#define IL2CPP_STRUCT_StressTestPlaylist__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/FrameCaptureTester.h>
#include <Modloader/app/structs/List_1_StressTester_.h>
#include <Modloader/app/structs/List_1_System_Tuple_2__5.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_StressTestPlaylist__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StressTestPlaylist__Fields_DEFINED) && !defined(IL2CPP_STRUCT_StressTestPlaylist__Fields_FWDDECL)
#include <Modloader/app/structs/StressTestPlaylist__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StressTestPlaylist__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
