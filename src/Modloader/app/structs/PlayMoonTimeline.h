#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayMoonTimeline_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayMoonTimeline_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayMoonTimeline_DEFINED)
#include <Modloader/app/structs/PlayMoonTimeline__Fields.h>
#if defined(IL2CPP_STRUCT_PlayMoonTimeline__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayMoonTimeline_DEFINED
struct PlayMoonTimeline__Class;
struct PlayMoonTimeline {
    struct PlayMoonTimeline__Class* klass;
    MonitorData* monitor;
    struct PlayMoonTimeline__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayMoonTimeline_FWDDECL)
#define IL2CPP_STRUCT_PlayMoonTimeline_FWDDECL
#include <Modloader/app/structs/PlayMoonTimeline__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayMoonTimeline_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayMoonTimeline_DEFINED) && !defined(IL2CPP_STRUCT_PlayMoonTimeline_FWDDECL)
#include <Modloader/app/structs/PlayMoonTimeline.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayMoonTimeline.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
