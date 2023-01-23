#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkPlaylist_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkPlaylist_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkPlaylist_DEFINED)
#include <Modloader/app/structs/AkPlaylist__Fields.h>
#if defined(IL2CPP_STRUCT_AkPlaylist__Fields_DEFINED)
#define IL2CPP_STRUCT_AkPlaylist_DEFINED
struct AkPlaylist__Class;
struct AkPlaylist {
    struct AkPlaylist__Class* klass;
    MonitorData* monitor;
    struct AkPlaylist__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkPlaylist_FWDDECL)
#define IL2CPP_STRUCT_AkPlaylist_FWDDECL
#include <Modloader/app/structs/AkPlaylist__Class.h>
#endif
#undef IL2CPP_STRUCT_AkPlaylist_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkPlaylist_DEFINED) && !defined(IL2CPP_STRUCT_AkPlaylist_FWDDECL)
#include <Modloader/app/structs/AkPlaylist.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkPlaylist.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
