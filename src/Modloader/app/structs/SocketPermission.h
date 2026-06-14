#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SocketPermission_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SocketPermission_INITIALIZING
#if !defined(IL2CPP_STRUCT_SocketPermission_DEFINED)
#include <Modloader/app/structs/SocketPermission__Fields.h>
#if defined(IL2CPP_STRUCT_SocketPermission__Fields_DEFINED)
#define IL2CPP_STRUCT_SocketPermission_DEFINED
struct SocketPermission__Class;
struct SocketPermission {
    struct SocketPermission__Class* klass;
    MonitorData* monitor;
    struct SocketPermission__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SocketPermission_FWDDECL)
#define IL2CPP_STRUCT_SocketPermission_FWDDECL
#include <Modloader/app/structs/SocketPermission__Class.h>
#endif
#undef IL2CPP_STRUCT_SocketPermission_INITIALIZING
#if !defined(IL2CPP_STRUCT_SocketPermission_DEFINED) && !defined(IL2CPP_STRUCT_SocketPermission_FWDDECL)
#include <Modloader/app/structs/SocketPermission.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SocketPermission.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
