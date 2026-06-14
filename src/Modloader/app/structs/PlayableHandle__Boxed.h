#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayableHandle__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayableHandle__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayableHandle__Boxed_DEFINED)
#include <Modloader/app/structs/PlayableHandle.h>
#if defined(IL2CPP_STRUCT_PlayableHandle_DEFINED)
#define IL2CPP_STRUCT_PlayableHandle__Boxed_DEFINED
struct PlayableHandle__Class;
struct PlayableHandle__Boxed {
    struct PlayableHandle__Class* klass;
    MonitorData* monitor;
    struct PlayableHandle fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayableHandle__Boxed_FWDDECL)
#define IL2CPP_STRUCT_PlayableHandle__Boxed_FWDDECL
#include <Modloader/app/structs/PlayableHandle__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayableHandle__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayableHandle__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_PlayableHandle__Boxed_FWDDECL)
#include <Modloader/app/structs/PlayableHandle__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayableHandle__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
