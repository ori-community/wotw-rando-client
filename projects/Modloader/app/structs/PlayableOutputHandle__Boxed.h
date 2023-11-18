#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayableOutputHandle__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayableOutputHandle__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayableOutputHandle__Boxed_DEFINED)
#include <Modloader/app/structs/PlayableOutputHandle.h>
#if defined(IL2CPP_STRUCT_PlayableOutputHandle_DEFINED)
#define IL2CPP_STRUCT_PlayableOutputHandle__Boxed_DEFINED
struct PlayableOutputHandle__Class;
struct PlayableOutputHandle__Boxed {
    struct PlayableOutputHandle__Class* klass;
    MonitorData* monitor;
    struct PlayableOutputHandle fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayableOutputHandle__Boxed_FWDDECL)
#define IL2CPP_STRUCT_PlayableOutputHandle__Boxed_FWDDECL
#include <Modloader/app/structs/PlayableOutputHandle__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayableOutputHandle__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayableOutputHandle__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_PlayableOutputHandle__Boxed_FWDDECL)
#include <Modloader/app/structs/PlayableOutputHandle__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayableOutputHandle__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
