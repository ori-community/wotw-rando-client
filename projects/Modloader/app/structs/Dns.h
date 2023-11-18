#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Dns_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Dns_INITIALIZING
#if !defined(IL2CPP_STRUCT_Dns_DEFINED)
#define IL2CPP_STRUCT_Dns_DEFINED
struct Dns__Class;
struct Dns {
    struct Dns__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_Dns_FWDDECL)
#define IL2CPP_STRUCT_Dns_FWDDECL
#include <Modloader/app/structs/Dns__Class.h>
#endif
#undef IL2CPP_STRUCT_Dns_INITIALIZING
#if !defined(IL2CPP_STRUCT_Dns_DEFINED) && !defined(IL2CPP_STRUCT_Dns_FWDDECL)
#include <Modloader/app/structs/Dns.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Dns.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
