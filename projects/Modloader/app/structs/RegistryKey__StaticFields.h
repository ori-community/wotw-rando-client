#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RegistryKey__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RegistryKey__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegistryKey__StaticFields_DEFINED)
#define IL2CPP_STRUCT_RegistryKey__StaticFields_DEFINED
struct IRegistryApi;
struct RegistryKey__StaticFields {
    struct IRegistryApi* RegistryApi;
};
#endif
#if !defined(IL2CPP_STRUCT_RegistryKey__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_RegistryKey__StaticFields_FWDDECL
#include <Modloader/app/structs/IRegistryApi.h>
#endif
#undef IL2CPP_STRUCT_RegistryKey__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegistryKey__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_RegistryKey__StaticFields_FWDDECL)
#include <Modloader/app/structs/RegistryKey__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RegistryKey__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
