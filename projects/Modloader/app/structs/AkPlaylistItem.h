#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkPlaylistItem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkPlaylistItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkPlaylistItem_DEFINED)
#include <Modloader/app/structs/AkPlaylistItem__Fields.h>
#if defined(IL2CPP_STRUCT_AkPlaylistItem__Fields_DEFINED)
#define IL2CPP_STRUCT_AkPlaylistItem_DEFINED
struct AkPlaylistItem__Class;
struct AkPlaylistItem {
    struct AkPlaylistItem__Class* klass;
    MonitorData* monitor;
    struct AkPlaylistItem__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkPlaylistItem_FWDDECL)
#define IL2CPP_STRUCT_AkPlaylistItem_FWDDECL
#include <Modloader/app/structs/AkPlaylistItem__Class.h>
#endif
#undef IL2CPP_STRUCT_AkPlaylistItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkPlaylistItem_DEFINED) && !defined(IL2CPP_STRUCT_AkPlaylistItem_FWDDECL)
#include <Modloader/app/structs/AkPlaylistItem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkPlaylistItem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
