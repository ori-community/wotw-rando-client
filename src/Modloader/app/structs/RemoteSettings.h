#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RemoteSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RemoteSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemoteSettings_DEFINED)
#define IL2CPP_STRUCT_RemoteSettings_DEFINED
struct RemoteSettings__Class;
struct RemoteSettings {
    struct RemoteSettings__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_RemoteSettings_FWDDECL)
#define IL2CPP_STRUCT_RemoteSettings_FWDDECL
#include <Modloader/app/structs/RemoteSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_RemoteSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemoteSettings_DEFINED) && !defined(IL2CPP_STRUCT_RemoteSettings_FWDDECL)
#include <Modloader/app/structs/RemoteSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RemoteSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
