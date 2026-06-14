#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ClientIdentity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ClientIdentity_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClientIdentity_DEFINED)
#include <Modloader/app/structs/ClientIdentity__Fields.h>
#if defined(IL2CPP_STRUCT_ClientIdentity__Fields_DEFINED)
#define IL2CPP_STRUCT_ClientIdentity_DEFINED
struct ClientIdentity__Class;
struct ClientIdentity {
    struct ClientIdentity__Class* klass;
    MonitorData* monitor;
    struct ClientIdentity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ClientIdentity_FWDDECL)
#define IL2CPP_STRUCT_ClientIdentity_FWDDECL
#include <Modloader/app/structs/ClientIdentity__Class.h>
#endif
#undef IL2CPP_STRUCT_ClientIdentity_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClientIdentity_DEFINED) && !defined(IL2CPP_STRUCT_ClientIdentity_FWDDECL)
#include <Modloader/app/structs/ClientIdentity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ClientIdentity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
