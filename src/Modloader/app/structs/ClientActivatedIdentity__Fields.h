#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ClientActivatedIdentity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ClientActivatedIdentity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClientActivatedIdentity__Fields_DEFINED)
#include <Modloader/app/structs/ServerIdentity__Fields.h>
#if defined(IL2CPP_STRUCT_ServerIdentity__Fields_DEFINED)
#define IL2CPP_STRUCT_ClientActivatedIdentity__Fields_DEFINED
struct MarshalByRefObject;
struct ClientActivatedIdentity__Fields {
    struct ServerIdentity__Fields _;
    struct MarshalByRefObject* _targetThis;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ClientActivatedIdentity__Fields_FWDDECL)
#define IL2CPP_STRUCT_ClientActivatedIdentity__Fields_FWDDECL
#include <Modloader/app/structs/MarshalByRefObject.h>
#endif
#undef IL2CPP_STRUCT_ClientActivatedIdentity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClientActivatedIdentity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ClientActivatedIdentity__Fields_FWDDECL)
#include <Modloader/app/structs/ClientActivatedIdentity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ClientActivatedIdentity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
