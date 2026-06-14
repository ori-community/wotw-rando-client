#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IPAddress_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IPAddress_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPAddress_DEFINED)
#include <Modloader/app/structs/IPAddress__Fields.h>
#if defined(IL2CPP_STRUCT_IPAddress__Fields_DEFINED)
#define IL2CPP_STRUCT_IPAddress_DEFINED
struct IPAddress__Class;
struct IPAddress {
    struct IPAddress__Class* klass;
    MonitorData* monitor;
    struct IPAddress__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IPAddress_FWDDECL)
#define IL2CPP_STRUCT_IPAddress_FWDDECL
#include <Modloader/app/structs/IPAddress__Class.h>
#endif
#undef IL2CPP_STRUCT_IPAddress_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPAddress_DEFINED) && !defined(IL2CPP_STRUCT_IPAddress_FWDDECL)
#include <Modloader/app/structs/IPAddress.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IPAddress.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
