#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlCachedStream_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlCachedStream_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlCachedStream_DEFINED)
#include <Modloader/app/structs/XmlCachedStream__Fields.h>
#if defined(IL2CPP_STRUCT_XmlCachedStream__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlCachedStream_DEFINED
struct XmlCachedStream__Class;
struct XmlCachedStream {
    struct XmlCachedStream__Class* klass;
    MonitorData* monitor;
    struct XmlCachedStream__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlCachedStream_FWDDECL)
#define IL2CPP_STRUCT_XmlCachedStream_FWDDECL
#include <Modloader/app/structs/XmlCachedStream__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlCachedStream_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlCachedStream_DEFINED) && !defined(IL2CPP_STRUCT_XmlCachedStream_FWDDECL)
#include <Modloader/app/structs/XmlCachedStream.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlCachedStream.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
