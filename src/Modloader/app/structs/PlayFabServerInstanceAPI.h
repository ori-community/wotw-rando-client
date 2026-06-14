#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayFabServerInstanceAPI_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayFabServerInstanceAPI_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabServerInstanceAPI_DEFINED)
#include <Modloader/app/structs/PlayFabServerInstanceAPI__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabServerInstanceAPI__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayFabServerInstanceAPI_DEFINED
struct PlayFabServerInstanceAPI__Class;
struct PlayFabServerInstanceAPI {
    struct PlayFabServerInstanceAPI__Class* klass;
    MonitorData* monitor;
    struct PlayFabServerInstanceAPI__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayFabServerInstanceAPI_FWDDECL)
#define IL2CPP_STRUCT_PlayFabServerInstanceAPI_FWDDECL
#include <Modloader/app/structs/PlayFabServerInstanceAPI__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayFabServerInstanceAPI_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabServerInstanceAPI_DEFINED) && !defined(IL2CPP_STRUCT_PlayFabServerInstanceAPI_FWDDECL)
#include <Modloader/app/structs/PlayFabServerInstanceAPI.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayFabServerInstanceAPI.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
