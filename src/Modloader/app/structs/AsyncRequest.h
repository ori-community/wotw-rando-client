#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AsyncRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AsyncRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsyncRequest_DEFINED)
#include <Modloader/app/structs/AsyncRequest__Fields.h>
#if defined(IL2CPP_STRUCT_AsyncRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_AsyncRequest_DEFINED
struct AsyncRequest__Class;
struct AsyncRequest {
    struct AsyncRequest__Class* klass;
    MonitorData* monitor;
    struct AsyncRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AsyncRequest_FWDDECL)
#define IL2CPP_STRUCT_AsyncRequest_FWDDECL
#include <Modloader/app/structs/AsyncRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_AsyncRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsyncRequest_DEFINED) && !defined(IL2CPP_STRUCT_AsyncRequest_FWDDECL)
#include <Modloader/app/structs/AsyncRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AsyncRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
