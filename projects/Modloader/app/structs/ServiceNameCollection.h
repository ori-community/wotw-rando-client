#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ServiceNameCollection_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ServiceNameCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServiceNameCollection_DEFINED)
#include <Modloader/app/structs/ServiceNameCollection__Fields.h>
#if defined(IL2CPP_STRUCT_ServiceNameCollection__Fields_DEFINED)
#define IL2CPP_STRUCT_ServiceNameCollection_DEFINED
struct ServiceNameCollection__Class;
struct ServiceNameCollection {
    struct ServiceNameCollection__Class* klass;
    MonitorData* monitor;
    struct ServiceNameCollection__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ServiceNameCollection_FWDDECL)
#define IL2CPP_STRUCT_ServiceNameCollection_FWDDECL
#include <Modloader/app/structs/ServiceNameCollection__Class.h>
#endif
#undef IL2CPP_STRUCT_ServiceNameCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServiceNameCollection_DEFINED) && !defined(IL2CPP_STRUCT_ServiceNameCollection_FWDDECL)
#include <Modloader/app/structs/ServiceNameCollection.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ServiceNameCollection.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
