#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SocketAddress__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SocketAddress__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SocketAddress__Fields_DEFINED)
#define IL2CPP_STRUCT_SocketAddress__Fields_DEFINED
struct Byte__Array;
struct __declspec(align(8)) SocketAddress__Fields {
    int32_t m_Size;
    struct Byte__Array* m_Buffer;
    bool m_changed;
    int32_t m_hash;
};
#endif
#if !defined(IL2CPP_STRUCT_SocketAddress__Fields_FWDDECL)
#define IL2CPP_STRUCT_SocketAddress__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#endif
#undef IL2CPP_STRUCT_SocketAddress__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SocketAddress__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SocketAddress__Fields_FWDDECL)
#include <Modloader/app/structs/SocketAddress__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SocketAddress__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
