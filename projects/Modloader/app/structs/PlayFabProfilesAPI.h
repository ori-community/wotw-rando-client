#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayFabProfilesAPI_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayFabProfilesAPI_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabProfilesAPI_DEFINED)
#define IL2CPP_STRUCT_PlayFabProfilesAPI_DEFINED
struct PlayFabProfilesAPI__Class;
struct PlayFabProfilesAPI {
    struct PlayFabProfilesAPI__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_PlayFabProfilesAPI_FWDDECL)
#define IL2CPP_STRUCT_PlayFabProfilesAPI_FWDDECL
#include <Modloader/app/structs/PlayFabProfilesAPI__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayFabProfilesAPI_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabProfilesAPI_DEFINED) && !defined(IL2CPP_STRUCT_PlayFabProfilesAPI_FWDDECL)
#include <Modloader/app/structs/PlayFabProfilesAPI.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayFabProfilesAPI.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
