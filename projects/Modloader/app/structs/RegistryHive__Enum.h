#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RegistryHive__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RegistryHive__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegistryHive__Enum_DEFINED)
#define IL2CPP_STRUCT_RegistryHive__Enum_DEFINED
enum class RegistryHive__Enum : int32_t {
    ClassesRoot = -2147483648,
    CurrentConfig = -2147483643,
    CurrentUser = -2147483647,
    DynData = -2147483642,
    LocalMachine = -2147483646,
    PerformanceData = -2147483644,
    Users = -2147483645,
};
#endif
#if !defined(IL2CPP_STRUCT_RegistryHive__Enum_FWDDECL)
#define IL2CPP_STRUCT_RegistryHive__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_RegistryHive__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegistryHive__Enum_DEFINED) && !defined(IL2CPP_STRUCT_RegistryHive__Enum_FWDDECL)
#include <Modloader/app/structs/RegistryHive__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RegistryHive__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
