#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MusicListener_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MusicListener_INITIALIZING
#if !defined(IL2CPP_STRUCT_MusicListener_DEFINED)
#include <Modloader/app/structs/MusicListener__Fields.h>
#if defined(IL2CPP_STRUCT_MusicListener__Fields_DEFINED)
#define IL2CPP_STRUCT_MusicListener_DEFINED
struct MusicListener__Class;
struct MusicListener {
    struct MusicListener__Class* klass;
    MonitorData* monitor;
    struct MusicListener__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MusicListener_FWDDECL)
#define IL2CPP_STRUCT_MusicListener_FWDDECL
#include <Modloader/app/structs/MusicListener__Class.h>
#endif
#undef IL2CPP_STRUCT_MusicListener_INITIALIZING
#if !defined(IL2CPP_STRUCT_MusicListener_DEFINED) && !defined(IL2CPP_STRUCT_MusicListener_FWDDECL)
#include <Modloader/app/structs/MusicListener.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MusicListener.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
