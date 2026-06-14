#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IRegistryApi_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IRegistryApi_INITIALIZING
#if !defined(IL2CPP_STRUCT_IRegistryApi_DEFINED)
#define IL2CPP_STRUCT_IRegistryApi_DEFINED
struct IRegistryApi__Class;
struct IRegistryApi {
    struct IRegistryApi__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IRegistryApi_FWDDECL)
#define IL2CPP_STRUCT_IRegistryApi_FWDDECL
#include <Modloader/app/structs/IRegistryApi__Class.h>
#endif
#undef IL2CPP_STRUCT_IRegistryApi_INITIALIZING
#if !defined(IL2CPP_STRUCT_IRegistryApi_DEFINED) && !defined(IL2CPP_STRUCT_IRegistryApi_FWDDECL)
#include <Modloader/app/structs/IRegistryApi.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IRegistryApi.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
