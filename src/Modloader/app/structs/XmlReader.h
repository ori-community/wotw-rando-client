#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlReader_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlReader_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlReader_DEFINED)
#define IL2CPP_STRUCT_XmlReader_DEFINED
struct XmlReader__Class;
struct XmlReader {
    struct XmlReader__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_XmlReader_FWDDECL)
#define IL2CPP_STRUCT_XmlReader_FWDDECL
#include <Modloader/app/structs/XmlReader__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlReader_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlReader_DEFINED) && !defined(IL2CPP_STRUCT_XmlReader_FWDDECL)
#include <Modloader/app/structs/XmlReader.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlReader.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
