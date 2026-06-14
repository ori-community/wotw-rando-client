#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayableGraph__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayableGraph__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayableGraph__Boxed_DEFINED)
#include <Modloader/app/structs/PlayableGraph.h>
#if defined(IL2CPP_STRUCT_PlayableGraph_DEFINED)
#define IL2CPP_STRUCT_PlayableGraph__Boxed_DEFINED
struct PlayableGraph__Class;
struct PlayableGraph__Boxed {
    struct PlayableGraph__Class* klass;
    MonitorData* monitor;
    struct PlayableGraph fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayableGraph__Boxed_FWDDECL)
#define IL2CPP_STRUCT_PlayableGraph__Boxed_FWDDECL
#include <Modloader/app/structs/PlayableGraph__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayableGraph__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayableGraph__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_PlayableGraph__Boxed_FWDDECL)
#include <Modloader/app/structs/PlayableGraph__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayableGraph__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
