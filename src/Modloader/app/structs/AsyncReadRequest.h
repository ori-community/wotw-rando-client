#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AsyncReadRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AsyncReadRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsyncReadRequest_DEFINED)
#include <Modloader/app/structs/AsyncReadRequest__Fields.h>
#if defined(IL2CPP_STRUCT_AsyncReadRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_AsyncReadRequest_DEFINED
struct AsyncReadRequest__Class;
struct AsyncReadRequest {
    struct AsyncReadRequest__Class* klass;
    MonitorData* monitor;
    struct AsyncReadRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AsyncReadRequest_FWDDECL)
#define IL2CPP_STRUCT_AsyncReadRequest_FWDDECL
#include <Modloader/app/structs/AsyncReadRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_AsyncReadRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsyncReadRequest_DEFINED) && !defined(IL2CPP_STRUCT_AsyncReadRequest_FWDDECL)
#include <Modloader/app/structs/AsyncReadRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AsyncReadRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
