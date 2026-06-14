#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpringVinedController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpringVinedController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpringVinedController__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_SpringVinedController__Fields_DEFINED
struct LegacySpring;
struct Condition_1;
struct MoonTimeline;
struct PlayerInsideZoneChecker;
struct SpringVinedController__Fields {
    struct MonoBehaviour__Fields _;
    struct LegacySpring* Spring;
    struct Condition_1* AllowJumpCondition;
    struct MoonTimeline* VinesRetractingTimeline;
    struct MoonTimeline* VinesComeBackTimeline;
    struct PlayerInsideZoneChecker* RetractionZone;
    float VinesComeBackDelay;
    float m_timeUntilRetraction;
    bool m_prevRetractVines;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpringVinedController__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpringVinedController__Fields_FWDDECL
#include <Modloader/app/structs/Condition_1.h>
#include <Modloader/app/structs/LegacySpring.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/PlayerInsideZoneChecker.h>
#endif
#undef IL2CPP_STRUCT_SpringVinedController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpringVinedController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpringVinedController__Fields_FWDDECL)
#include <Modloader/app/structs/SpringVinedController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpringVinedController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
