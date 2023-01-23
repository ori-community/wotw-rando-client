#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AsyncReadOrWriteRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AsyncReadOrWriteRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsyncReadOrWriteRequest_DEFINED)
#include <Modloader/app/structs/AsyncReadOrWriteRequest__Fields.h>
#if defined(IL2CPP_STRUCT_AsyncReadOrWriteRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_AsyncReadOrWriteRequest_DEFINED
struct AsyncReadOrWriteRequest__Class;
struct AsyncReadOrWriteRequest {
    struct AsyncReadOrWriteRequest__Class* klass;
    MonitorData* monitor;
    struct AsyncReadOrWriteRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AsyncReadOrWriteRequest_FWDDECL)
#define IL2CPP_STRUCT_AsyncReadOrWriteRequest_FWDDECL
#include <Modloader/app/structs/AsyncReadOrWriteRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_AsyncReadOrWriteRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsyncReadOrWriteRequest_DEFINED) && !defined(IL2CPP_STRUCT_AsyncReadOrWriteRequest_FWDDECL)
#include <Modloader/app/structs/AsyncReadOrWriteRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AsyncReadOrWriteRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
