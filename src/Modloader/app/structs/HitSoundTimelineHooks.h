#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HitSoundTimelineHooks_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HitSoundTimelineHooks_INITIALIZING
#if !defined(IL2CPP_STRUCT_HitSoundTimelineHooks_DEFINED)
#include <Modloader/app/structs/HitSoundTimelineHooks__Fields.h>
#if defined(IL2CPP_STRUCT_HitSoundTimelineHooks__Fields_DEFINED)
#define IL2CPP_STRUCT_HitSoundTimelineHooks_DEFINED
struct HitSoundTimelineHooks__Class;
struct HitSoundTimelineHooks {
    struct HitSoundTimelineHooks__Class* klass;
    MonitorData* monitor;
    struct HitSoundTimelineHooks__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HitSoundTimelineHooks_FWDDECL)
#define IL2CPP_STRUCT_HitSoundTimelineHooks_FWDDECL
#include <Modloader/app/structs/HitSoundTimelineHooks__Class.h>
#endif
#undef IL2CPP_STRUCT_HitSoundTimelineHooks_INITIALIZING
#if !defined(IL2CPP_STRUCT_HitSoundTimelineHooks_DEFINED) && !defined(IL2CPP_STRUCT_HitSoundTimelineHooks_FWDDECL)
#include <Modloader/app/structs/HitSoundTimelineHooks.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HitSoundTimelineHooks.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
