#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayFabSharedSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayFabSharedSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabSharedSettings_DEFINED)
#include <Modloader/app/structs/PlayFabSharedSettings__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabSharedSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayFabSharedSettings_DEFINED
struct PlayFabSharedSettings__Class;
struct PlayFabSharedSettings {
    struct PlayFabSharedSettings__Class* klass;
    MonitorData* monitor;
    struct PlayFabSharedSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayFabSharedSettings_FWDDECL)
#define IL2CPP_STRUCT_PlayFabSharedSettings_FWDDECL
#include <Modloader/app/structs/PlayFabSharedSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayFabSharedSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabSharedSettings_DEFINED) && !defined(IL2CPP_STRUCT_PlayFabSharedSettings_FWDDECL)
#include <Modloader/app/structs/PlayFabSharedSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayFabSharedSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
