#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UnixRegistryApi_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UnixRegistryApi_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnixRegistryApi_DEFINED)
#define IL2CPP_STRUCT_UnixRegistryApi_DEFINED
struct UnixRegistryApi__Class;
struct UnixRegistryApi {
    struct UnixRegistryApi__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_UnixRegistryApi_FWDDECL)
#define IL2CPP_STRUCT_UnixRegistryApi_FWDDECL
#include <Modloader/app/structs/UnixRegistryApi__Class.h>
#endif
#undef IL2CPP_STRUCT_UnixRegistryApi_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnixRegistryApi_DEFINED) && !defined(IL2CPP_STRUCT_UnixRegistryApi_FWDDECL)
#include <Modloader/app/structs/UnixRegistryApi.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UnixRegistryApi.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
