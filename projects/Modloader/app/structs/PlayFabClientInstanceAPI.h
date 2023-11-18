#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayFabClientInstanceAPI_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayFabClientInstanceAPI_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabClientInstanceAPI_DEFINED)
#include <Modloader/app/structs/PlayFabClientInstanceAPI__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabClientInstanceAPI__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayFabClientInstanceAPI_DEFINED
struct PlayFabClientInstanceAPI__Class;
struct PlayFabClientInstanceAPI {
    struct PlayFabClientInstanceAPI__Class* klass;
    MonitorData* monitor;
    struct PlayFabClientInstanceAPI__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayFabClientInstanceAPI_FWDDECL)
#define IL2CPP_STRUCT_PlayFabClientInstanceAPI_FWDDECL
#include <Modloader/app/structs/PlayFabClientInstanceAPI__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayFabClientInstanceAPI_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabClientInstanceAPI_DEFINED) && !defined(IL2CPP_STRUCT_PlayFabClientInstanceAPI_FWDDECL)
#include <Modloader/app/structs/PlayFabClientInstanceAPI.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayFabClientInstanceAPI.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
