#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConnectionPool_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConnectionPool_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConnectionPool_DEFINED)
#include <Modloader/app/structs/ConnectionPool__Fields.h>
#if defined(IL2CPP_STRUCT_ConnectionPool__Fields_DEFINED)
#define IL2CPP_STRUCT_ConnectionPool_DEFINED
struct ConnectionPool__Class;
struct ConnectionPool {
    struct ConnectionPool__Class* klass;
    MonitorData* monitor;
    struct ConnectionPool__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ConnectionPool_FWDDECL)
#define IL2CPP_STRUCT_ConnectionPool_FWDDECL
#include <Modloader/app/structs/ConnectionPool__Class.h>
#endif
#undef IL2CPP_STRUCT_ConnectionPool_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConnectionPool_DEFINED) && !defined(IL2CPP_STRUCT_ConnectionPool_FWDDECL)
#include <Modloader/app/structs/ConnectionPool.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConnectionPool.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
