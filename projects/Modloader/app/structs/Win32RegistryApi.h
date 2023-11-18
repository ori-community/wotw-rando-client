#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Win32RegistryApi_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Win32RegistryApi_INITIALIZING
#if !defined(IL2CPP_STRUCT_Win32RegistryApi_DEFINED)
#include <Modloader/app/structs/Win32RegistryApi__Fields.h>
#if defined(IL2CPP_STRUCT_Win32RegistryApi__Fields_DEFINED)
#define IL2CPP_STRUCT_Win32RegistryApi_DEFINED
struct Win32RegistryApi__Class;
struct Win32RegistryApi {
    struct Win32RegistryApi__Class* klass;
    MonitorData* monitor;
    struct Win32RegistryApi__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Win32RegistryApi_FWDDECL)
#define IL2CPP_STRUCT_Win32RegistryApi_FWDDECL
#include <Modloader/app/structs/Win32RegistryApi__Class.h>
#endif
#undef IL2CPP_STRUCT_Win32RegistryApi_INITIALIZING
#if !defined(IL2CPP_STRUCT_Win32RegistryApi_DEFINED) && !defined(IL2CPP_STRUCT_Win32RegistryApi_FWDDECL)
#include <Modloader/app/structs/Win32RegistryApi.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Win32RegistryApi.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
