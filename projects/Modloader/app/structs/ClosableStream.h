#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ClosableStream_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ClosableStream_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClosableStream_DEFINED)
#include <Modloader/app/structs/ClosableStream__Fields.h>
#if defined(IL2CPP_STRUCT_ClosableStream__Fields_DEFINED)
#define IL2CPP_STRUCT_ClosableStream_DEFINED
struct ClosableStream__Class;
struct ClosableStream {
    struct ClosableStream__Class* klass;
    MonitorData* monitor;
    struct ClosableStream__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ClosableStream_FWDDECL)
#define IL2CPP_STRUCT_ClosableStream_FWDDECL
#include <Modloader/app/structs/ClosableStream__Class.h>
#endif
#undef IL2CPP_STRUCT_ClosableStream_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClosableStream_DEFINED) && !defined(IL2CPP_STRUCT_ClosableStream_FWDDECL)
#include <Modloader/app/structs/ClosableStream.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ClosableStream.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
