#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Registry__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Registry__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Registry__StaticFields_DEFINED)
#define IL2CPP_STRUCT_Registry__StaticFields_DEFINED
struct RegistryKey;
struct Registry__StaticFields {
    struct RegistryKey* ClassesRoot;
    struct RegistryKey* CurrentConfig;
    struct RegistryKey* CurrentUser;
    struct RegistryKey* DynData;
    struct RegistryKey* LocalMachine;
    struct RegistryKey* PerformanceData;
    struct RegistryKey* Users;
};
#endif
#if !defined(IL2CPP_STRUCT_Registry__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_Registry__StaticFields_FWDDECL
#include <Modloader/app/structs/RegistryKey.h>
#endif
#undef IL2CPP_STRUCT_Registry__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Registry__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_Registry__StaticFields_FWDDECL)
#include <Modloader/app/structs/Registry__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Registry__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
