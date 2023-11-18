#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ClientActivatedIdentity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ClientActivatedIdentity_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClientActivatedIdentity_DEFINED)
#include <Modloader/app/structs/ClientActivatedIdentity__Fields.h>
#if defined(IL2CPP_STRUCT_ClientActivatedIdentity__Fields_DEFINED)
#define IL2CPP_STRUCT_ClientActivatedIdentity_DEFINED
struct ClientActivatedIdentity__Class;
struct ClientActivatedIdentity {
    struct ClientActivatedIdentity__Class* klass;
    MonitorData* monitor;
    struct ClientActivatedIdentity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ClientActivatedIdentity_FWDDECL)
#define IL2CPP_STRUCT_ClientActivatedIdentity_FWDDECL
#include <Modloader/app/structs/ClientActivatedIdentity__Class.h>
#endif
#undef IL2CPP_STRUCT_ClientActivatedIdentity_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClientActivatedIdentity_DEFINED) && !defined(IL2CPP_STRUCT_ClientActivatedIdentity_FWDDECL)
#include <Modloader/app/structs/ClientActivatedIdentity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ClientActivatedIdentity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
