#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TcpListener__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TcpListener__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TcpListener__Fields_DEFINED)
#define IL2CPP_STRUCT_TcpListener__Fields_DEFINED
struct IPEndPoint;
struct Socket;
struct __declspec(align(8)) TcpListener__Fields {
    struct IPEndPoint* m_ServerSocketEP;
    struct Socket* m_ServerSocket;
    bool m_Active;
    bool m_ExclusiveAddressUse;
};
#endif
#if !defined(IL2CPP_STRUCT_TcpListener__Fields_FWDDECL)
#define IL2CPP_STRUCT_TcpListener__Fields_FWDDECL
#include <Modloader/app/structs/IPEndPoint.h>
#include <Modloader/app/structs/Socket.h>
#endif
#undef IL2CPP_STRUCT_TcpListener__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TcpListener__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TcpListener__Fields_FWDDECL)
#include <Modloader/app/structs/TcpListener__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TcpListener__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
