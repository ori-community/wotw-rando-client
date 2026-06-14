#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DnsPermissionAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DnsPermissionAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_DnsPermissionAttribute_DEFINED)
#include <Modloader/app/structs/DnsPermissionAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_DnsPermissionAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_DnsPermissionAttribute_DEFINED
struct DnsPermissionAttribute__Class;
struct DnsPermissionAttribute {
    struct DnsPermissionAttribute__Class* klass;
    MonitorData* monitor;
    struct DnsPermissionAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DnsPermissionAttribute_FWDDECL)
#define IL2CPP_STRUCT_DnsPermissionAttribute_FWDDECL
#include <Modloader/app/structs/DnsPermissionAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_DnsPermissionAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_DnsPermissionAttribute_DEFINED) && !defined(IL2CPP_STRUCT_DnsPermissionAttribute_FWDDECL)
#include <Modloader/app/structs/DnsPermissionAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DnsPermissionAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
