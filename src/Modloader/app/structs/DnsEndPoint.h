#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DnsEndPoint_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DnsEndPoint_INITIALIZING
#if !defined(IL2CPP_STRUCT_DnsEndPoint_DEFINED)
#include <Modloader/app/structs/DnsEndPoint__Fields.h>
#if defined(IL2CPP_STRUCT_DnsEndPoint__Fields_DEFINED)
#define IL2CPP_STRUCT_DnsEndPoint_DEFINED
struct DnsEndPoint__Class;
struct DnsEndPoint {
    struct DnsEndPoint__Class* klass;
    MonitorData* monitor;
    struct DnsEndPoint__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DnsEndPoint_FWDDECL)
#define IL2CPP_STRUCT_DnsEndPoint_FWDDECL
#include <Modloader/app/structs/DnsEndPoint__Class.h>
#endif
#undef IL2CPP_STRUCT_DnsEndPoint_INITIALIZING
#if !defined(IL2CPP_STRUCT_DnsEndPoint_DEFINED) && !defined(IL2CPP_STRUCT_DnsEndPoint_FWDDECL)
#include <Modloader/app/structs/DnsEndPoint.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DnsEndPoint.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
