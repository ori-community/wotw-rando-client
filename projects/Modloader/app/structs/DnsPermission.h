#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DnsPermission_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DnsPermission_INITIALIZING
#if !defined(IL2CPP_STRUCT_DnsPermission_DEFINED)
#define IL2CPP_STRUCT_DnsPermission_DEFINED
struct DnsPermission__Class;
struct DnsPermission {
    struct DnsPermission__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_DnsPermission_FWDDECL)
#define IL2CPP_STRUCT_DnsPermission_FWDDECL
#include <Modloader/app/structs/DnsPermission__Class.h>
#endif
#undef IL2CPP_STRUCT_DnsPermission_INITIALIZING
#if !defined(IL2CPP_STRUCT_DnsPermission_DEFINED) && !defined(IL2CPP_STRUCT_DnsPermission_FWDDECL)
#include <Modloader/app/structs/DnsPermission.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DnsPermission.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
