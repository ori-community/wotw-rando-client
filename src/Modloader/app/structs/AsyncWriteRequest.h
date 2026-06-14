#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AsyncWriteRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AsyncWriteRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsyncWriteRequest_DEFINED)
#include <Modloader/app/structs/AsyncWriteRequest__Fields.h>
#if defined(IL2CPP_STRUCT_AsyncWriteRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_AsyncWriteRequest_DEFINED
struct AsyncWriteRequest__Class;
struct AsyncWriteRequest {
    struct AsyncWriteRequest__Class* klass;
    MonitorData* monitor;
    struct AsyncWriteRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AsyncWriteRequest_FWDDECL)
#define IL2CPP_STRUCT_AsyncWriteRequest_FWDDECL
#include <Modloader/app/structs/AsyncWriteRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_AsyncWriteRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsyncWriteRequest_DEFINED) && !defined(IL2CPP_STRUCT_AsyncWriteRequest_FWDDECL)
#include <Modloader/app/structs/AsyncWriteRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AsyncWriteRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
