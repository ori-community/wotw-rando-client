#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TcpClient__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TcpClient__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TcpClient__Fields_DEFINED)
#include <Modloader/app/structs/AddressFamily__Enum.h>
#if defined(IL2CPP_STRUCT_AddressFamily__Enum_DEFINED)
#define IL2CPP_STRUCT_TcpClient__Fields_DEFINED
struct Socket;
struct NetworkStream;
struct __declspec(align(8)) TcpClient__Fields {
    struct Socket* m_ClientSocket;
    bool m_Active;
    struct NetworkStream* m_DataStream;
    AddressFamily__Enum m_Family;

    bool m_CleanedUp;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TcpClient__Fields_FWDDECL)
#define IL2CPP_STRUCT_TcpClient__Fields_FWDDECL
#include <Modloader/app/structs/NetworkStream.h>
#include <Modloader/app/structs/Socket.h>
#endif
#undef IL2CPP_STRUCT_TcpClient__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TcpClient__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TcpClient__Fields_FWDDECL)
#include <Modloader/app/structs/TcpClient__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TcpClient__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
