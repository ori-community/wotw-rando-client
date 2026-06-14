#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UnityTls_unitytls_tlsctx_callbacks_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UnityTls_unitytls_tlsctx_callbacks_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnityTls_unitytls_tlsctx_callbacks_DEFINED)
#define IL2CPP_STRUCT_UnityTls_unitytls_tlsctx_callbacks_DEFINED
struct UnityTls_unitytls_tlsctx_read_callback;
struct UnityTls_unitytls_tlsctx_write_callback;
struct Void;
struct UnityTls_unitytls_tlsctx_callbacks {
    struct UnityTls_unitytls_tlsctx_read_callback* read;
    struct UnityTls_unitytls_tlsctx_write_callback* write;
    struct Void* data;
};
#endif
#if !defined(IL2CPP_STRUCT_UnityTls_unitytls_tlsctx_callbacks_FWDDECL)
#define IL2CPP_STRUCT_UnityTls_unitytls_tlsctx_callbacks_FWDDECL
#include <Modloader/app/structs/UnityTls_unitytls_tlsctx_read_callback.h>
#include <Modloader/app/structs/UnityTls_unitytls_tlsctx_write_callback.h>
#include <Modloader/app/structs/Void.h>
#endif
#undef IL2CPP_STRUCT_UnityTls_unitytls_tlsctx_callbacks_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnityTls_unitytls_tlsctx_callbacks_DEFINED) && !defined(IL2CPP_STRUCT_UnityTls_unitytls_tlsctx_callbacks_FWDDECL)
#include <Modloader/app/structs/UnityTls_unitytls_tlsctx_callbacks.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UnityTls_unitytls_tlsctx_callbacks.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
