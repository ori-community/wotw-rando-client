#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlTextReader_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlTextReader_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlTextReader_DEFINED)
#include <Modloader/app/structs/XmlTextReader__Fields.h>
#if defined(IL2CPP_STRUCT_XmlTextReader__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlTextReader_DEFINED
struct XmlTextReader__Class;
struct XmlTextReader {
    struct XmlTextReader__Class* klass;
    MonitorData* monitor;
    struct XmlTextReader__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlTextReader_FWDDECL)
#define IL2CPP_STRUCT_XmlTextReader_FWDDECL
#include <Modloader/app/structs/XmlTextReader__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlTextReader_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlTextReader_DEFINED) && !defined(IL2CPP_STRUCT_XmlTextReader_FWDDECL)
#include <Modloader/app/structs/XmlTextReader.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlTextReader.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
