#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RemoteSettings_UpdatedEventHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RemoteSettings_UpdatedEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemoteSettings_UpdatedEventHandler_DEFINED)
#include <Modloader/app/structs/RemoteSettings_UpdatedEventHandler__Fields.h>
#if defined(IL2CPP_STRUCT_RemoteSettings_UpdatedEventHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_RemoteSettings_UpdatedEventHandler_DEFINED
struct RemoteSettings_UpdatedEventHandler__Class;
struct RemoteSettings_UpdatedEventHandler {
    struct RemoteSettings_UpdatedEventHandler__Class* klass;
    MonitorData* monitor;
    struct RemoteSettings_UpdatedEventHandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RemoteSettings_UpdatedEventHandler_FWDDECL)
#define IL2CPP_STRUCT_RemoteSettings_UpdatedEventHandler_FWDDECL
#include <Modloader/app/structs/RemoteSettings_UpdatedEventHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_RemoteSettings_UpdatedEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemoteSettings_UpdatedEventHandler_DEFINED) && !defined(IL2CPP_STRUCT_RemoteSettings_UpdatedEventHandler_FWDDECL)
#include <Modloader/app/structs/RemoteSettings_UpdatedEventHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RemoteSettings_UpdatedEventHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
