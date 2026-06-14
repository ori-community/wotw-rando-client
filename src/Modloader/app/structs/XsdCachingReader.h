#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XsdCachingReader_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XsdCachingReader_INITIALIZING
#if !defined(IL2CPP_STRUCT_XsdCachingReader_DEFINED)
#include <Modloader/app/structs/XsdCachingReader__Fields.h>
#if defined(IL2CPP_STRUCT_XsdCachingReader__Fields_DEFINED)
#define IL2CPP_STRUCT_XsdCachingReader_DEFINED
struct XsdCachingReader__Class;
struct XsdCachingReader {
    struct XsdCachingReader__Class* klass;
    MonitorData* monitor;
    struct XsdCachingReader__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XsdCachingReader_FWDDECL)
#define IL2CPP_STRUCT_XsdCachingReader_FWDDECL
#include <Modloader/app/structs/XsdCachingReader__Class.h>
#endif
#undef IL2CPP_STRUCT_XsdCachingReader_INITIALIZING
#if !defined(IL2CPP_STRUCT_XsdCachingReader_DEFINED) && !defined(IL2CPP_STRUCT_XsdCachingReader_FWDDECL)
#include <Modloader/app/structs/XsdCachingReader.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XsdCachingReader.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
