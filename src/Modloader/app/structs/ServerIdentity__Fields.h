#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ServerIdentity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ServerIdentity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerIdentity__Fields_DEFINED)
#include <Modloader/app/structs/Identity__Fields.h>
#if defined(IL2CPP_STRUCT_Identity__Fields_DEFINED)
#define IL2CPP_STRUCT_ServerIdentity__Fields_DEFINED
struct Type;
struct MarshalByRefObject;
struct IMessageSink;
struct Context;
struct Lease;
struct ServerIdentity__Fields {
    struct Identity__Fields _;
    struct Type* _objectType;
    struct MarshalByRefObject* _serverObject;
    struct IMessageSink* _serverSink;
    struct Context* _context;
    struct Lease* _lease;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ServerIdentity__Fields_FWDDECL)
#define IL2CPP_STRUCT_ServerIdentity__Fields_FWDDECL
#include <Modloader/app/structs/Context.h>
#include <Modloader/app/structs/IMessageSink.h>
#include <Modloader/app/structs/Lease.h>
#include <Modloader/app/structs/MarshalByRefObject.h>
#include <Modloader/app/structs/Type.h>
#endif
#undef IL2CPP_STRUCT_ServerIdentity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerIdentity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ServerIdentity__Fields_FWDDECL)
#include <Modloader/app/structs/ServerIdentity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ServerIdentity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
