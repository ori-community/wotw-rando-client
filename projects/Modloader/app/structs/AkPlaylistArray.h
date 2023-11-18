#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkPlaylistArray_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkPlaylistArray_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkPlaylistArray_DEFINED)
#include <Modloader/app/structs/AkPlaylistArray__Fields.h>
#if defined(IL2CPP_STRUCT_AkPlaylistArray__Fields_DEFINED)
#define IL2CPP_STRUCT_AkPlaylistArray_DEFINED
struct AkPlaylistArray__Class;
struct AkPlaylistArray {
    struct AkPlaylistArray__Class* klass;
    MonitorData* monitor;
    struct AkPlaylistArray__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkPlaylistArray_FWDDECL)
#define IL2CPP_STRUCT_AkPlaylistArray_FWDDECL
#include <Modloader/app/structs/AkPlaylistArray__Class.h>
#endif
#undef IL2CPP_STRUCT_AkPlaylistArray_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkPlaylistArray_DEFINED) && !defined(IL2CPP_STRUCT_AkPlaylistArray_FWDDECL)
#include <Modloader/app/structs/AkPlaylistArray.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkPlaylistArray.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
