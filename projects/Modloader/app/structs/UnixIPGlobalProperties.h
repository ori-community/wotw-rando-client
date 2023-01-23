#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UnixIPGlobalProperties_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UnixIPGlobalProperties_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnixIPGlobalProperties_DEFINED)
#define IL2CPP_STRUCT_UnixIPGlobalProperties_DEFINED
struct UnixIPGlobalProperties__Class;
struct UnixIPGlobalProperties {
    struct UnixIPGlobalProperties__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_UnixIPGlobalProperties_FWDDECL)
#define IL2CPP_STRUCT_UnixIPGlobalProperties_FWDDECL
#include <Modloader/app/structs/UnixIPGlobalProperties__Class.h>
#endif
#undef IL2CPP_STRUCT_UnixIPGlobalProperties_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnixIPGlobalProperties_DEFINED) && !defined(IL2CPP_STRUCT_UnixIPGlobalProperties_FWDDECL)
#include <Modloader/app/structs/UnixIPGlobalProperties.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UnixIPGlobalProperties.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
