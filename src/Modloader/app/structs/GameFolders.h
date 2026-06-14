#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameFolders_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameFolders_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameFolders_DEFINED)
#define IL2CPP_STRUCT_GameFolders_DEFINED
struct GameFolders__Class;
struct GameFolders {
    struct GameFolders__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_GameFolders_FWDDECL)
#define IL2CPP_STRUCT_GameFolders_FWDDECL
#include <Modloader/app/structs/GameFolders__Class.h>
#endif
#undef IL2CPP_STRUCT_GameFolders_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameFolders_DEFINED) && !defined(IL2CPP_STRUCT_GameFolders_FWDDECL)
#include <Modloader/app/structs/GameFolders.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameFolders.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
