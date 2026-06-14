#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StressTestPlaylist_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StressTestPlaylist_INITIALIZING
#if !defined(IL2CPP_STRUCT_StressTestPlaylist_DEFINED)
#include <Modloader/app/structs/StressTestPlaylist__Fields.h>
#if defined(IL2CPP_STRUCT_StressTestPlaylist__Fields_DEFINED)
#define IL2CPP_STRUCT_StressTestPlaylist_DEFINED
struct StressTestPlaylist__Class;
struct StressTestPlaylist {
    struct StressTestPlaylist__Class* klass;
    MonitorData* monitor;
    struct StressTestPlaylist__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StressTestPlaylist_FWDDECL)
#define IL2CPP_STRUCT_StressTestPlaylist_FWDDECL
#include <Modloader/app/structs/StressTestPlaylist__Class.h>
#endif
#undef IL2CPP_STRUCT_StressTestPlaylist_INITIALIZING
#if !defined(IL2CPP_STRUCT_StressTestPlaylist_DEFINED) && !defined(IL2CPP_STRUCT_StressTestPlaylist_FWDDECL)
#include <Modloader/app/structs/StressTestPlaylist.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StressTestPlaylist.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
