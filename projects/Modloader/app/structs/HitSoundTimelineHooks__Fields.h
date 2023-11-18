#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HitSoundTimelineHooks__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HitSoundTimelineHooks__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HitSoundTimelineHooks__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_HitSoundTimelineHooks__Fields_DEFINED
struct Entity;
struct MoonTimeline;
struct Vitals;
struct HitSoundTimelineHooks__Fields {
    struct MonoBehaviour__Fields _;
    struct Entity* Entity;
    struct MoonTimeline* Hit;
    struct MoonTimeline* BlockedHit;
    struct MoonTimeline* DeathHit;
    struct Vitals* m_vitals;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HitSoundTimelineHooks__Fields_FWDDECL)
#define IL2CPP_STRUCT_HitSoundTimelineHooks__Fields_FWDDECL
#include <Modloader/app/structs/Entity.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/Vitals.h>
#endif
#undef IL2CPP_STRUCT_HitSoundTimelineHooks__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HitSoundTimelineHooks__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HitSoundTimelineHooks__Fields_FWDDECL)
#include <Modloader/app/structs/HitSoundTimelineHooks__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HitSoundTimelineHooks__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
