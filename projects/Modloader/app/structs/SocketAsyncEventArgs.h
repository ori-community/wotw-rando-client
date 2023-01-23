#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SocketAsyncEventArgs_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SocketAsyncEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_SocketAsyncEventArgs_DEFINED)
#include <Modloader/app/structs/SocketAsyncEventArgs__Fields.h>
#if defined(IL2CPP_STRUCT_SocketAsyncEventArgs__Fields_DEFINED)
#define IL2CPP_STRUCT_SocketAsyncEventArgs_DEFINED
struct SocketAsyncEventArgs__Class;
struct SocketAsyncEventArgs {
    struct SocketAsyncEventArgs__Class* klass;
    MonitorData* monitor;
    struct SocketAsyncEventArgs__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SocketAsyncEventArgs_FWDDECL)
#define IL2CPP_STRUCT_SocketAsyncEventArgs_FWDDECL
#include <Modloader/app/structs/SocketAsyncEventArgs__Class.h>
#endif
#undef IL2CPP_STRUCT_SocketAsyncEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_SocketAsyncEventArgs_DEFINED) && !defined(IL2CPP_STRUCT_SocketAsyncEventArgs_FWDDECL)
#include <Modloader/app/structs/SocketAsyncEventArgs.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SocketAsyncEventArgs.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
