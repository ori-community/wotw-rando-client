#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlValidatingReader_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlValidatingReader_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlValidatingReader_DEFINED)
#include <Modloader/app/structs/XmlValidatingReader__Fields.h>
#if defined(IL2CPP_STRUCT_XmlValidatingReader__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlValidatingReader_DEFINED
struct XmlValidatingReader__Class;
struct XmlValidatingReader {
    struct XmlValidatingReader__Class* klass;
    MonitorData* monitor;
    struct XmlValidatingReader__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlValidatingReader_FWDDECL)
#define IL2CPP_STRUCT_XmlValidatingReader_FWDDECL
#include <Modloader/app/structs/XmlValidatingReader__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlValidatingReader_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlValidatingReader_DEFINED) && !defined(IL2CPP_STRUCT_XmlValidatingReader_FWDDECL)
#include <Modloader/app/structs/XmlValidatingReader.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlValidatingReader.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
