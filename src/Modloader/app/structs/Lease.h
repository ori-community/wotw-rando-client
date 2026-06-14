#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Lease_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Lease_INITIALIZING
#if !defined(IL2CPP_STRUCT_Lease_DEFINED)
#include <Modloader/app/structs/Lease__Fields.h>
#if defined(IL2CPP_STRUCT_Lease__Fields_DEFINED)
#define IL2CPP_STRUCT_Lease_DEFINED
struct Lease__Class;
struct Lease {
    struct Lease__Class* klass;
    MonitorData* monitor;
    struct Lease__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Lease_FWDDECL)
#define IL2CPP_STRUCT_Lease_FWDDECL
#include <Modloader/app/structs/Lease__Class.h>
#endif
#undef IL2CPP_STRUCT_Lease_INITIALIZING
#if !defined(IL2CPP_STRUCT_Lease_DEFINED) && !defined(IL2CPP_STRUCT_Lease_FWDDECL)
#include <Modloader/app/structs/Lease.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Lease.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
