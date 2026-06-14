#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UnixNoLibCIPGlobalProperties_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UnixNoLibCIPGlobalProperties_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnixNoLibCIPGlobalProperties_DEFINED)
#define IL2CPP_STRUCT_UnixNoLibCIPGlobalProperties_DEFINED
struct UnixNoLibCIPGlobalProperties__Class;
struct UnixNoLibCIPGlobalProperties {
    struct UnixNoLibCIPGlobalProperties__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_UnixNoLibCIPGlobalProperties_FWDDECL)
#define IL2CPP_STRUCT_UnixNoLibCIPGlobalProperties_FWDDECL
#include <Modloader/app/structs/UnixNoLibCIPGlobalProperties__Class.h>
#endif
#undef IL2CPP_STRUCT_UnixNoLibCIPGlobalProperties_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnixNoLibCIPGlobalProperties_DEFINED) && !defined(IL2CPP_STRUCT_UnixNoLibCIPGlobalProperties_FWDDECL)
#include <Modloader/app/structs/UnixNoLibCIPGlobalProperties.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UnixNoLibCIPGlobalProperties.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
