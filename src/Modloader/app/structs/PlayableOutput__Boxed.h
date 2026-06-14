#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayableOutput__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayableOutput__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayableOutput__Boxed_DEFINED)
#include <Modloader/app/structs/PlayableOutput.h>
#if defined(IL2CPP_STRUCT_PlayableOutput_DEFINED)
#define IL2CPP_STRUCT_PlayableOutput__Boxed_DEFINED
struct PlayableOutput__Class;
struct PlayableOutput__Boxed {
    struct PlayableOutput__Class* klass;
    MonitorData* monitor;
    struct PlayableOutput fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayableOutput__Boxed_FWDDECL)
#define IL2CPP_STRUCT_PlayableOutput__Boxed_FWDDECL
#include <Modloader/app/structs/PlayableOutput__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayableOutput__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayableOutput__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_PlayableOutput__Boxed_FWDDECL)
#include <Modloader/app/structs/PlayableOutput__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayableOutput__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
