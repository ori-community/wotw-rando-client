#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ServiceNameStore_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ServiceNameStore_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServiceNameStore_DEFINED)
#include <Modloader/app/structs/ServiceNameStore__Fields.h>
#if defined(IL2CPP_STRUCT_ServiceNameStore__Fields_DEFINED)
#define IL2CPP_STRUCT_ServiceNameStore_DEFINED
struct ServiceNameStore__Class;
struct ServiceNameStore {
    struct ServiceNameStore__Class* klass;
    MonitorData* monitor;
    struct ServiceNameStore__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ServiceNameStore_FWDDECL)
#define IL2CPP_STRUCT_ServiceNameStore_FWDDECL
#include <Modloader/app/structs/ServiceNameStore__Class.h>
#endif
#undef IL2CPP_STRUCT_ServiceNameStore_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServiceNameStore_DEFINED) && !defined(IL2CPP_STRUCT_ServiceNameStore_FWDDECL)
#include <Modloader/app/structs/ServiceNameStore.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ServiceNameStore.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
