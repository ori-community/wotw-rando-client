#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConnectionPool_AsyncConnectionPoolRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConnectionPool_AsyncConnectionPoolRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConnectionPool_AsyncConnectionPoolRequest_DEFINED)
#include <Modloader/app/structs/ConnectionPool_AsyncConnectionPoolRequest__Fields.h>
#if defined(IL2CPP_STRUCT_ConnectionPool_AsyncConnectionPoolRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_ConnectionPool_AsyncConnectionPoolRequest_DEFINED
struct ConnectionPool_AsyncConnectionPoolRequest__Class;
struct ConnectionPool_AsyncConnectionPoolRequest {
    struct ConnectionPool_AsyncConnectionPoolRequest__Class* klass;
    MonitorData* monitor;
    struct ConnectionPool_AsyncConnectionPoolRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ConnectionPool_AsyncConnectionPoolRequest_FWDDECL)
#define IL2CPP_STRUCT_ConnectionPool_AsyncConnectionPoolRequest_FWDDECL
#include <Modloader/app/structs/ConnectionPool_AsyncConnectionPoolRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_ConnectionPool_AsyncConnectionPoolRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConnectionPool_AsyncConnectionPoolRequest_DEFINED) && !defined(IL2CPP_STRUCT_ConnectionPool_AsyncConnectionPoolRequest_FWDDECL)
#include <Modloader/app/structs/ConnectionPool_AsyncConnectionPoolRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConnectionPool_AsyncConnectionPoolRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
