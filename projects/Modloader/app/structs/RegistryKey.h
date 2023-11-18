#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RegistryKey_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RegistryKey_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegistryKey_DEFINED)
#include <Modloader/app/structs/RegistryKey__Fields.h>
#if defined(IL2CPP_STRUCT_RegistryKey__Fields_DEFINED)
#define IL2CPP_STRUCT_RegistryKey_DEFINED
struct RegistryKey__Class;
struct RegistryKey {
    struct RegistryKey__Class* klass;
    MonitorData* monitor;
    struct RegistryKey__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RegistryKey_FWDDECL)
#define IL2CPP_STRUCT_RegistryKey_FWDDECL
#include <Modloader/app/structs/RegistryKey__Class.h>
#endif
#undef IL2CPP_STRUCT_RegistryKey_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegistryKey_DEFINED) && !defined(IL2CPP_STRUCT_RegistryKey_FWDDECL)
#include <Modloader/app/structs/RegistryKey.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RegistryKey.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
