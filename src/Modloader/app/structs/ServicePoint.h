#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ServicePoint_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ServicePoint_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServicePoint_DEFINED)
#include <Modloader/app/structs/ServicePoint__Fields.h>
#if defined(IL2CPP_STRUCT_ServicePoint__Fields_DEFINED)
#define IL2CPP_STRUCT_ServicePoint_DEFINED
struct ServicePoint__Class;
struct ServicePoint {
    struct ServicePoint__Class* klass;
    MonitorData* monitor;
    struct ServicePoint__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ServicePoint_FWDDECL)
#define IL2CPP_STRUCT_ServicePoint_FWDDECL
#include <Modloader/app/structs/ServicePoint__Class.h>
#endif
#undef IL2CPP_STRUCT_ServicePoint_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServicePoint_DEFINED) && !defined(IL2CPP_STRUCT_ServicePoint_FWDDECL)
#include <Modloader/app/structs/ServicePoint.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ServicePoint.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
