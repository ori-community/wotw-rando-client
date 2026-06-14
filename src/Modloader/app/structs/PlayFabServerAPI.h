#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayFabServerAPI_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayFabServerAPI_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabServerAPI_DEFINED)
#define IL2CPP_STRUCT_PlayFabServerAPI_DEFINED
struct PlayFabServerAPI__Class;
struct PlayFabServerAPI {
    struct PlayFabServerAPI__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_PlayFabServerAPI_FWDDECL)
#define IL2CPP_STRUCT_PlayFabServerAPI_FWDDECL
#include <Modloader/app/structs/PlayFabServerAPI__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayFabServerAPI_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabServerAPI_DEFINED) && !defined(IL2CPP_STRUCT_PlayFabServerAPI_FWDDECL)
#include <Modloader/app/structs/PlayFabServerAPI.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayFabServerAPI.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
