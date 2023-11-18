#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GZipStream_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GZipStream_INITIALIZING
#if !defined(IL2CPP_STRUCT_GZipStream_DEFINED)
#include <Modloader/app/structs/GZipStream__Fields.h>
#if defined(IL2CPP_STRUCT_GZipStream__Fields_DEFINED)
#define IL2CPP_STRUCT_GZipStream_DEFINED
struct GZipStream__Class;
struct GZipStream {
    struct GZipStream__Class* klass;
    MonitorData* monitor;
    struct GZipStream__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GZipStream_FWDDECL)
#define IL2CPP_STRUCT_GZipStream_FWDDECL
#include <Modloader/app/structs/GZipStream__Class.h>
#endif
#undef IL2CPP_STRUCT_GZipStream_INITIALIZING
#if !defined(IL2CPP_STRUCT_GZipStream_DEFINED) && !defined(IL2CPP_STRUCT_GZipStream_FWDDECL)
#include <Modloader/app/structs/GZipStream.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GZipStream.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
