#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Lease_RenewalDelegate_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Lease_RenewalDelegate_INITIALIZING
#if !defined(IL2CPP_STRUCT_Lease_RenewalDelegate_DEFINED)
#include <Modloader/app/structs/Lease_RenewalDelegate__Fields.h>
#if defined(IL2CPP_STRUCT_Lease_RenewalDelegate__Fields_DEFINED)
#define IL2CPP_STRUCT_Lease_RenewalDelegate_DEFINED
struct Lease_RenewalDelegate__Class;
struct Lease_RenewalDelegate {
    struct Lease_RenewalDelegate__Class* klass;
    MonitorData* monitor;
    struct Lease_RenewalDelegate__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Lease_RenewalDelegate_FWDDECL)
#define IL2CPP_STRUCT_Lease_RenewalDelegate_FWDDECL
#include <Modloader/app/structs/Lease_RenewalDelegate__Class.h>
#endif
#undef IL2CPP_STRUCT_Lease_RenewalDelegate_INITIALIZING
#if !defined(IL2CPP_STRUCT_Lease_RenewalDelegate_DEFINED) && !defined(IL2CPP_STRUCT_Lease_RenewalDelegate_FWDDECL)
#include <Modloader/app/structs/Lease_RenewalDelegate.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Lease_RenewalDelegate.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
