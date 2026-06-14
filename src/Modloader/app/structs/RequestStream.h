#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RequestStream_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RequestStream_INITIALIZING
#if !defined(IL2CPP_STRUCT_RequestStream_DEFINED)
#include <Modloader/app/structs/RequestStream__Fields.h>
#if defined(IL2CPP_STRUCT_RequestStream__Fields_DEFINED)
#define IL2CPP_STRUCT_RequestStream_DEFINED
struct RequestStream__Class;
struct RequestStream {
    struct RequestStream__Class* klass;
    MonitorData* monitor;
    struct RequestStream__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RequestStream_FWDDECL)
#define IL2CPP_STRUCT_RequestStream_FWDDECL
#include <Modloader/app/structs/RequestStream__Class.h>
#endif
#undef IL2CPP_STRUCT_RequestStream_INITIALIZING
#if !defined(IL2CPP_STRUCT_RequestStream_DEFINED) && !defined(IL2CPP_STRUCT_RequestStream_FWDDECL)
#include <Modloader/app/structs/RequestStream.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RequestStream.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
