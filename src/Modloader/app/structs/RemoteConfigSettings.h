#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RemoteConfigSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RemoteConfigSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemoteConfigSettings_DEFINED)
#include <Modloader/app/structs/RemoteConfigSettings__Fields.h>
#if defined(IL2CPP_STRUCT_RemoteConfigSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_RemoteConfigSettings_DEFINED
struct RemoteConfigSettings__Class;
struct RemoteConfigSettings {
    struct RemoteConfigSettings__Class* klass;
    MonitorData* monitor;
    struct RemoteConfigSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RemoteConfigSettings_FWDDECL)
#define IL2CPP_STRUCT_RemoteConfigSettings_FWDDECL
#include <Modloader/app/structs/RemoteConfigSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_RemoteConfigSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemoteConfigSettings_DEFINED) && !defined(IL2CPP_STRUCT_RemoteConfigSettings_FWDDECL)
#include <Modloader/app/structs/RemoteConfigSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RemoteConfigSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
