#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UnityTls_unitytls_errorstate_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UnityTls_unitytls_errorstate_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnityTls_unitytls_errorstate_DEFINED)
#include <Modloader/app/structs/UnityTls_unitytls_error_code__Enum.h>
#if defined(IL2CPP_STRUCT_UnityTls_unitytls_error_code__Enum_DEFINED)
#define IL2CPP_STRUCT_UnityTls_unitytls_errorstate_DEFINED
struct UnityTls_unitytls_errorstate {
    uint32_t magic;
    UnityTls_unitytls_error_code__Enum code;

    uint64_t reserved;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UnityTls_unitytls_errorstate_FWDDECL)
#define IL2CPP_STRUCT_UnityTls_unitytls_errorstate_FWDDECL
#endif
#undef IL2CPP_STRUCT_UnityTls_unitytls_errorstate_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnityTls_unitytls_errorstate_DEFINED) && !defined(IL2CPP_STRUCT_UnityTls_unitytls_errorstate_FWDDECL)
#include <Modloader/app/structs/UnityTls_unitytls_errorstate.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UnityTls_unitytls_errorstate.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
