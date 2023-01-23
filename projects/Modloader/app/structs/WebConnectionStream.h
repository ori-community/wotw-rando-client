#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WebConnectionStream_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WebConnectionStream_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebConnectionStream_DEFINED)
#include <Modloader/app/structs/WebConnectionStream__Fields.h>
#if defined(IL2CPP_STRUCT_WebConnectionStream__Fields_DEFINED)
#define IL2CPP_STRUCT_WebConnectionStream_DEFINED
struct WebConnectionStream__Class;
struct WebConnectionStream {
    struct WebConnectionStream__Class* klass;
    MonitorData* monitor;
    struct WebConnectionStream__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WebConnectionStream_FWDDECL)
#define IL2CPP_STRUCT_WebConnectionStream_FWDDECL
#include <Modloader/app/structs/WebConnectionStream__Class.h>
#endif
#undef IL2CPP_STRUCT_WebConnectionStream_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebConnectionStream_DEFINED) && !defined(IL2CPP_STRUCT_WebConnectionStream_FWDDECL)
#include <Modloader/app/structs/WebConnectionStream.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WebConnectionStream.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
