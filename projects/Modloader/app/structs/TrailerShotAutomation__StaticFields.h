#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TrailerShotAutomation__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TrailerShotAutomation__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TrailerShotAutomation__StaticFields_DEFINED)
#define IL2CPP_STRUCT_TrailerShotAutomation__StaticFields_DEFINED
struct String;
struct List_1_TrailerShot_;
struct TrailerShotAutomation__StaticFields {
    bool ShotAutomationActive;
    struct String* ScreendumpPath;
    int32_t m_forceScreenDump;
    struct List_1_TrailerShot_* m_trailerShots;
    int32_t m_frameCount;
    int32_t CumulativeFrameCount;
    int32_t m_currentShotIndex;
    struct String* m_replayPath;
    bool m_enableShots;
};
#endif
#if !defined(IL2CPP_STRUCT_TrailerShotAutomation__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_TrailerShotAutomation__StaticFields_FWDDECL
#include <Modloader/app/structs/List_1_TrailerShot_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_TrailerShotAutomation__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TrailerShotAutomation__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_TrailerShotAutomation__StaticFields_FWDDECL)
#include <Modloader/app/structs/TrailerShotAutomation__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TrailerShotAutomation__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
