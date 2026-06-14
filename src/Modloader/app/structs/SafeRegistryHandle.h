#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SafeRegistryHandle_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SafeRegistryHandle_INITIALIZING
#if !defined(IL2CPP_STRUCT_SafeRegistryHandle_DEFINED)
#include <Modloader/app/structs/SafeRegistryHandle__Fields.h>
#if defined(IL2CPP_STRUCT_SafeRegistryHandle__Fields_DEFINED)
#define IL2CPP_STRUCT_SafeRegistryHandle_DEFINED
struct SafeRegistryHandle__Class;
struct SafeRegistryHandle {
    struct SafeRegistryHandle__Class* klass;
    MonitorData* monitor;
    struct SafeRegistryHandle__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SafeRegistryHandle_FWDDECL)
#define IL2CPP_STRUCT_SafeRegistryHandle_FWDDECL
#include <Modloader/app/structs/SafeRegistryHandle__Class.h>
#endif
#undef IL2CPP_STRUCT_SafeRegistryHandle_INITIALIZING
#if !defined(IL2CPP_STRUCT_SafeRegistryHandle_DEFINED) && !defined(IL2CPP_STRUCT_SafeRegistryHandle_FWDDECL)
#include <Modloader/app/structs/SafeRegistryHandle.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SafeRegistryHandle.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
