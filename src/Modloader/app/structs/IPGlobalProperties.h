#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IPGlobalProperties_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IPGlobalProperties_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPGlobalProperties_DEFINED)
#define IL2CPP_STRUCT_IPGlobalProperties_DEFINED
struct IPGlobalProperties__Class;
struct IPGlobalProperties {
    struct IPGlobalProperties__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IPGlobalProperties_FWDDECL)
#define IL2CPP_STRUCT_IPGlobalProperties_FWDDECL
#include <Modloader/app/structs/IPGlobalProperties__Class.h>
#endif
#undef IL2CPP_STRUCT_IPGlobalProperties_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPGlobalProperties_DEFINED) && !defined(IL2CPP_STRUCT_IPGlobalProperties_FWDDECL)
#include <Modloader/app/structs/IPGlobalProperties.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IPGlobalProperties.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
