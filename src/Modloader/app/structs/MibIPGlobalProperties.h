#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MibIPGlobalProperties_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MibIPGlobalProperties_INITIALIZING
#if !defined(IL2CPP_STRUCT_MibIPGlobalProperties_DEFINED)
#include <Modloader/app/structs/MibIPGlobalProperties__Fields.h>
#if defined(IL2CPP_STRUCT_MibIPGlobalProperties__Fields_DEFINED)
#define IL2CPP_STRUCT_MibIPGlobalProperties_DEFINED
struct MibIPGlobalProperties__Class;
struct MibIPGlobalProperties {
    struct MibIPGlobalProperties__Class* klass;
    MonitorData* monitor;
    struct MibIPGlobalProperties__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MibIPGlobalProperties_FWDDECL)
#define IL2CPP_STRUCT_MibIPGlobalProperties_FWDDECL
#include <Modloader/app/structs/MibIPGlobalProperties__Class.h>
#endif
#undef IL2CPP_STRUCT_MibIPGlobalProperties_INITIALIZING
#if !defined(IL2CPP_STRUCT_MibIPGlobalProperties_DEFINED) && !defined(IL2CPP_STRUCT_MibIPGlobalProperties_FWDDECL)
#include <Modloader/app/structs/MibIPGlobalProperties.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MibIPGlobalProperties.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
