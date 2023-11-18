#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayFabProfilesInstanceAPI_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayFabProfilesInstanceAPI_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabProfilesInstanceAPI_DEFINED)
#include <Modloader/app/structs/PlayFabProfilesInstanceAPI__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabProfilesInstanceAPI__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayFabProfilesInstanceAPI_DEFINED
struct PlayFabProfilesInstanceAPI__Class;
struct PlayFabProfilesInstanceAPI {
    struct PlayFabProfilesInstanceAPI__Class* klass;
    MonitorData* monitor;
    struct PlayFabProfilesInstanceAPI__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayFabProfilesInstanceAPI_FWDDECL)
#define IL2CPP_STRUCT_PlayFabProfilesInstanceAPI_FWDDECL
#include <Modloader/app/structs/PlayFabProfilesInstanceAPI__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayFabProfilesInstanceAPI_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabProfilesInstanceAPI_DEFINED) && !defined(IL2CPP_STRUCT_PlayFabProfilesInstanceAPI_FWDDECL)
#include <Modloader/app/structs/PlayFabProfilesInstanceAPI.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayFabProfilesInstanceAPI.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
