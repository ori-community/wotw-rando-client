#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayFabClientAPI_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayFabClientAPI_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabClientAPI_DEFINED)
#define IL2CPP_STRUCT_PlayFabClientAPI_DEFINED
struct PlayFabClientAPI__Class;
struct PlayFabClientAPI {
    struct PlayFabClientAPI__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_PlayFabClientAPI_FWDDECL)
#define IL2CPP_STRUCT_PlayFabClientAPI_FWDDECL
#include <Modloader/app/structs/PlayFabClientAPI__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayFabClientAPI_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabClientAPI_DEFINED) && !defined(IL2CPP_STRUCT_PlayFabClientAPI_FWDDECL)
#include <Modloader/app/structs/PlayFabClientAPI.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayFabClientAPI.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
