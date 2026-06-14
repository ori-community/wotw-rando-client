#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayFabGroupsInstanceAPI_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayFabGroupsInstanceAPI_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabGroupsInstanceAPI_DEFINED)
#include <Modloader/app/structs/PlayFabGroupsInstanceAPI__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabGroupsInstanceAPI__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayFabGroupsInstanceAPI_DEFINED
struct PlayFabGroupsInstanceAPI__Class;
struct PlayFabGroupsInstanceAPI {
    struct PlayFabGroupsInstanceAPI__Class* klass;
    MonitorData* monitor;
    struct PlayFabGroupsInstanceAPI__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayFabGroupsInstanceAPI_FWDDECL)
#define IL2CPP_STRUCT_PlayFabGroupsInstanceAPI_FWDDECL
#include <Modloader/app/structs/PlayFabGroupsInstanceAPI__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayFabGroupsInstanceAPI_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabGroupsInstanceAPI_DEFINED) && !defined(IL2CPP_STRUCT_PlayFabGroupsInstanceAPI_FWDDECL)
#include <Modloader/app/structs/PlayFabGroupsInstanceAPI.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayFabGroupsInstanceAPI.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
