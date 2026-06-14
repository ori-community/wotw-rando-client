#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlRawWriter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlRawWriter_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlRawWriter_DEFINED)
#include <Modloader/app/structs/XmlRawWriter__Fields.h>
#if defined(IL2CPP_STRUCT_XmlRawWriter__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlRawWriter_DEFINED
struct XmlRawWriter__Class;
struct XmlRawWriter {
    struct XmlRawWriter__Class* klass;
    MonitorData* monitor;
    struct XmlRawWriter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlRawWriter_FWDDECL)
#define IL2CPP_STRUCT_XmlRawWriter_FWDDECL
#include <Modloader/app/structs/XmlRawWriter__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlRawWriter_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlRawWriter_DEFINED) && !defined(IL2CPP_STRUCT_XmlRawWriter_FWDDECL)
#include <Modloader/app/structs/XmlRawWriter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlRawWriter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
