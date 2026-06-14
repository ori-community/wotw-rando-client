#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SocketAsyncResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SocketAsyncResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_SocketAsyncResult_DEFINED)
#include <Modloader/app/structs/SocketAsyncResult__Fields.h>
#if defined(IL2CPP_STRUCT_SocketAsyncResult__Fields_DEFINED)
#define IL2CPP_STRUCT_SocketAsyncResult_DEFINED
struct SocketAsyncResult__Class;
struct SocketAsyncResult {
    struct SocketAsyncResult__Class* klass;
    MonitorData* monitor;
    struct SocketAsyncResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SocketAsyncResult_FWDDECL)
#define IL2CPP_STRUCT_SocketAsyncResult_FWDDECL
#include <Modloader/app/structs/SocketAsyncResult__Class.h>
#endif
#undef IL2CPP_STRUCT_SocketAsyncResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_SocketAsyncResult_DEFINED) && !defined(IL2CPP_STRUCT_SocketAsyncResult_FWDDECL)
#include <Modloader/app/structs/SocketAsyncResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SocketAsyncResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
