#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayFabApiSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayFabApiSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabApiSettings_DEFINED)
#include <Modloader/app/structs/PlayFabApiSettings__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabApiSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayFabApiSettings_DEFINED
struct PlayFabApiSettings__Class;
struct PlayFabApiSettings {
    struct PlayFabApiSettings__Class* klass;
    MonitorData* monitor;
    struct PlayFabApiSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayFabApiSettings_FWDDECL)
#define IL2CPP_STRUCT_PlayFabApiSettings_FWDDECL
#include <Modloader/app/structs/PlayFabApiSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayFabApiSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabApiSettings_DEFINED) && !defined(IL2CPP_STRUCT_PlayFabApiSettings_FWDDECL)
#include <Modloader/app/structs/PlayFabApiSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayFabApiSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
