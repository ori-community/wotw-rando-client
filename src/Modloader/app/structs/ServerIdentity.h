#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ServerIdentity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ServerIdentity_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerIdentity_DEFINED)
#include <Modloader/app/structs/ServerIdentity__Fields.h>
#if defined(IL2CPP_STRUCT_ServerIdentity__Fields_DEFINED)
#define IL2CPP_STRUCT_ServerIdentity_DEFINED
struct ServerIdentity__Class;
struct ServerIdentity {
    struct ServerIdentity__Class* klass;
    MonitorData* monitor;
    struct ServerIdentity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ServerIdentity_FWDDECL)
#define IL2CPP_STRUCT_ServerIdentity_FWDDECL
#include <Modloader/app/structs/ServerIdentity__Class.h>
#endif
#undef IL2CPP_STRUCT_ServerIdentity_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerIdentity_DEFINED) && !defined(IL2CPP_STRUCT_ServerIdentity_FWDDECL)
#include <Modloader/app/structs/ServerIdentity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ServerIdentity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
