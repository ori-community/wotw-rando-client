#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConnectionPool_AsyncConnectionPoolRequest__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConnectionPool_AsyncConnectionPoolRequest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConnectionPool_AsyncConnectionPoolRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_ConnectionPool_AsyncConnectionPoolRequest__Fields_DEFINED
struct Object;
struct GeneralAsyncDelegate;
struct ConnectionPool;
struct __declspec(align(8)) ConnectionPool_AsyncConnectionPoolRequest__Fields {
    struct Object* OwningObject;
    struct GeneralAsyncDelegate* AsyncCallback;
    struct ConnectionPool* Pool;
    int32_t CreationTimeout;
};
#endif
#if !defined(IL2CPP_STRUCT_ConnectionPool_AsyncConnectionPoolRequest__Fields_FWDDECL)
#define IL2CPP_STRUCT_ConnectionPool_AsyncConnectionPoolRequest__Fields_FWDDECL
#include <Modloader/app/structs/ConnectionPool.h>
#include <Modloader/app/structs/GeneralAsyncDelegate.h>
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_ConnectionPool_AsyncConnectionPoolRequest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConnectionPool_AsyncConnectionPoolRequest__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ConnectionPool_AsyncConnectionPoolRequest__Fields_FWDDECL)
#include <Modloader/app/structs/ConnectionPool_AsyncConnectionPoolRequest__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConnectionPool_AsyncConnectionPoolRequest__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
