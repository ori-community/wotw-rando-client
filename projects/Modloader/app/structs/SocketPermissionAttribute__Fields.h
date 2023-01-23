#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SocketPermissionAttribute__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SocketPermissionAttribute__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SocketPermissionAttribute__Fields_DEFINED)
#include <Modloader/app/structs/CodeAccessSecurityAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_CodeAccessSecurityAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_SocketPermissionAttribute__Fields_DEFINED
struct String;
struct SocketPermissionAttribute__Fields {
    struct CodeAccessSecurityAttribute__Fields _;
    struct String* m_access;
    struct String* m_host;
    struct String* m_port;
    struct String* m_transport;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SocketPermissionAttribute__Fields_FWDDECL)
#define IL2CPP_STRUCT_SocketPermissionAttribute__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_SocketPermissionAttribute__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SocketPermissionAttribute__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SocketPermissionAttribute__Fields_FWDDECL)
#include <Modloader/app/structs/SocketPermissionAttribute__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SocketPermissionAttribute__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
