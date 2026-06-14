#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayableDirector_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayableDirector_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayableDirector_DEFINED)
#include <Modloader/app/structs/PlayableDirector__Fields.h>
#if defined(IL2CPP_STRUCT_PlayableDirector__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayableDirector_DEFINED
struct PlayableDirector__Class;
struct PlayableDirector {
    struct PlayableDirector__Class* klass;
    MonitorData* monitor;
    struct PlayableDirector__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayableDirector_FWDDECL)
#define IL2CPP_STRUCT_PlayableDirector_FWDDECL
#include <Modloader/app/structs/PlayableDirector__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayableDirector_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayableDirector_DEFINED) && !defined(IL2CPP_STRUCT_PlayableDirector_FWDDECL)
#include <Modloader/app/structs/PlayableDirector.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayableDirector.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
