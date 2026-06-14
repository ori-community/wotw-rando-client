#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RegistryKeyComparer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RegistryKeyComparer_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegistryKeyComparer_DEFINED)
#define IL2CPP_STRUCT_RegistryKeyComparer_DEFINED
struct RegistryKeyComparer__Class;
struct RegistryKeyComparer {
    struct RegistryKeyComparer__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_RegistryKeyComparer_FWDDECL)
#define IL2CPP_STRUCT_RegistryKeyComparer_FWDDECL
#include <Modloader/app/structs/RegistryKeyComparer__Class.h>
#endif
#undef IL2CPP_STRUCT_RegistryKeyComparer_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegistryKeyComparer_DEFINED) && !defined(IL2CPP_STRUCT_RegistryKeyComparer_FWDDECL)
#include <Modloader/app/structs/RegistryKeyComparer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RegistryKeyComparer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
