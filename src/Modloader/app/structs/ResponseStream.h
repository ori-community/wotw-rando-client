#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ResponseStream_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ResponseStream_INITIALIZING
#if !defined(IL2CPP_STRUCT_ResponseStream_DEFINED)
#include <Modloader/app/structs/ResponseStream__Fields.h>
#if defined(IL2CPP_STRUCT_ResponseStream__Fields_DEFINED)
#define IL2CPP_STRUCT_ResponseStream_DEFINED
struct ResponseStream__Class;
struct ResponseStream {
    struct ResponseStream__Class* klass;
    MonitorData* monitor;
    struct ResponseStream__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ResponseStream_FWDDECL)
#define IL2CPP_STRUCT_ResponseStream_FWDDECL
#include <Modloader/app/structs/ResponseStream__Class.h>
#endif
#undef IL2CPP_STRUCT_ResponseStream_INITIALIZING
#if !defined(IL2CPP_STRUCT_ResponseStream_DEFINED) && !defined(IL2CPP_STRUCT_ResponseStream_FWDDECL)
#include <Modloader/app/structs/ResponseStream.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ResponseStream.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
