#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerPrefStorageEventHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerPrefStorageEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerPrefStorageEventHandler_DEFINED)
#define IL2CPP_STRUCT_PlayerPrefStorageEventHandler_DEFINED
struct PlayerPrefStorageEventHandler__Class;
struct PlayerPrefStorageEventHandler {
    struct PlayerPrefStorageEventHandler__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_PlayerPrefStorageEventHandler_FWDDECL)
#define IL2CPP_STRUCT_PlayerPrefStorageEventHandler_FWDDECL
#include <Modloader/app/structs/PlayerPrefStorageEventHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerPrefStorageEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerPrefStorageEventHandler_DEFINED) && !defined(IL2CPP_STRUCT_PlayerPrefStorageEventHandler_FWDDECL)
#include <Modloader/app/structs/PlayerPrefStorageEventHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerPrefStorageEventHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
