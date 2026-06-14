#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlAsyncCheckReader_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlAsyncCheckReader_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlAsyncCheckReader_DEFINED)
#include <Modloader/app/structs/XmlAsyncCheckReader__Fields.h>
#if defined(IL2CPP_STRUCT_XmlAsyncCheckReader__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlAsyncCheckReader_DEFINED
struct XmlAsyncCheckReader__Class;
struct XmlAsyncCheckReader {
    struct XmlAsyncCheckReader__Class* klass;
    MonitorData* monitor;
    struct XmlAsyncCheckReader__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlAsyncCheckReader_FWDDECL)
#define IL2CPP_STRUCT_XmlAsyncCheckReader_FWDDECL
#include <Modloader/app/structs/XmlAsyncCheckReader__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlAsyncCheckReader_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlAsyncCheckReader_DEFINED) && !defined(IL2CPP_STRUCT_XmlAsyncCheckReader_FWDDECL)
#include <Modloader/app/structs/XmlAsyncCheckReader.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlAsyncCheckReader.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
