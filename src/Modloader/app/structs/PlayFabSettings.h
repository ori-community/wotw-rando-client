#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayFabSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayFabSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabSettings_DEFINED)
#define IL2CPP_STRUCT_PlayFabSettings_DEFINED
struct PlayFabSettings__Class;
struct PlayFabSettings {
    struct PlayFabSettings__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_PlayFabSettings_FWDDECL)
#define IL2CPP_STRUCT_PlayFabSettings_FWDDECL
#include <Modloader/app/structs/PlayFabSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayFabSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabSettings_DEFINED) && !defined(IL2CPP_STRUCT_PlayFabSettings_FWDDECL)
#include <Modloader/app/structs/PlayFabSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayFabSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
