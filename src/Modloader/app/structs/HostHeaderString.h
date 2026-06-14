#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HostHeaderString_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HostHeaderString_INITIALIZING
#if !defined(IL2CPP_STRUCT_HostHeaderString_DEFINED)
#include <Modloader/app/structs/HostHeaderString__Fields.h>
#if defined(IL2CPP_STRUCT_HostHeaderString__Fields_DEFINED)
#define IL2CPP_STRUCT_HostHeaderString_DEFINED
struct HostHeaderString__Class;
struct HostHeaderString {
    struct HostHeaderString__Class* klass;
    MonitorData* monitor;
    struct HostHeaderString__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HostHeaderString_FWDDECL)
#define IL2CPP_STRUCT_HostHeaderString_FWDDECL
#include <Modloader/app/structs/HostHeaderString__Class.h>
#endif
#undef IL2CPP_STRUCT_HostHeaderString_INITIALIZING
#if !defined(IL2CPP_STRUCT_HostHeaderString_DEFINED) && !defined(IL2CPP_STRUCT_HostHeaderString_FWDDECL)
#include <Modloader/app/structs/HostHeaderString.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HostHeaderString.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
