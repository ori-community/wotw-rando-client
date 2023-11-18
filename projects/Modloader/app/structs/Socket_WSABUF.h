#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Socket_WSABUF_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Socket_WSABUF_INITIALIZING
#if !defined(IL2CPP_STRUCT_Socket_WSABUF_DEFINED)
#define IL2CPP_STRUCT_Socket_WSABUF_DEFINED
struct Socket_WSABUF {
    int32_t len;
    void* buf;
};
#endif
#if !defined(IL2CPP_STRUCT_Socket_WSABUF_FWDDECL)
#define IL2CPP_STRUCT_Socket_WSABUF_FWDDECL
#endif
#undef IL2CPP_STRUCT_Socket_WSABUF_INITIALIZING
#if !defined(IL2CPP_STRUCT_Socket_WSABUF_DEFINED) && !defined(IL2CPP_STRUCT_Socket_WSABUF_FWDDECL)
#include <Modloader/app/structs/Socket_WSABUF.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Socket_WSABUF.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
