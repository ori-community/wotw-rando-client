#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SocketPermissionAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SocketPermissionAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_SocketPermissionAttribute_DEFINED)
#include <Modloader/app/structs/SocketPermissionAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_SocketPermissionAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_SocketPermissionAttribute_DEFINED
struct SocketPermissionAttribute__Class;
struct SocketPermissionAttribute {
    struct SocketPermissionAttribute__Class* klass;
    MonitorData* monitor;
    struct SocketPermissionAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SocketPermissionAttribute_FWDDECL)
#define IL2CPP_STRUCT_SocketPermissionAttribute_FWDDECL
#include <Modloader/app/structs/SocketPermissionAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_SocketPermissionAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_SocketPermissionAttribute_DEFINED) && !defined(IL2CPP_STRUCT_SocketPermissionAttribute_FWDDECL)
#include <Modloader/app/structs/SocketPermissionAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SocketPermissionAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
