#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UnityTls__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UnityTls__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnityTls__StaticFields_DEFINED)
#define IL2CPP_STRUCT_UnityTls__StaticFields_DEFINED
struct UnityTls_unitytls_interface_struct;
struct UnityTls__StaticFields {
    struct UnityTls_unitytls_interface_struct* marshalledInterface;
};
#endif
#if !defined(IL2CPP_STRUCT_UnityTls__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_UnityTls__StaticFields_FWDDECL
#include <Modloader/app/structs/UnityTls_unitytls_interface_struct.h>
#endif
#undef IL2CPP_STRUCT_UnityTls__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnityTls__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_UnityTls__StaticFields_FWDDECL)
#include <Modloader/app/structs/UnityTls__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UnityTls__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
