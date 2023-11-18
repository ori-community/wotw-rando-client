#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CommonUnixIPGlobalProperties_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CommonUnixIPGlobalProperties_INITIALIZING
#if !defined(IL2CPP_STRUCT_CommonUnixIPGlobalProperties_DEFINED)
#define IL2CPP_STRUCT_CommonUnixIPGlobalProperties_DEFINED
struct CommonUnixIPGlobalProperties__Class;
struct CommonUnixIPGlobalProperties {
    struct CommonUnixIPGlobalProperties__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_CommonUnixIPGlobalProperties_FWDDECL)
#define IL2CPP_STRUCT_CommonUnixIPGlobalProperties_FWDDECL
#include <Modloader/app/structs/CommonUnixIPGlobalProperties__Class.h>
#endif
#undef IL2CPP_STRUCT_CommonUnixIPGlobalProperties_INITIALIZING
#if !defined(IL2CPP_STRUCT_CommonUnixIPGlobalProperties_DEFINED) && !defined(IL2CPP_STRUCT_CommonUnixIPGlobalProperties_FWDDECL)
#include <Modloader/app/structs/CommonUnixIPGlobalProperties.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CommonUnixIPGlobalProperties.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
