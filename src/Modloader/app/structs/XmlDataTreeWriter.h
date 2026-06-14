#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlDataTreeWriter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlDataTreeWriter_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlDataTreeWriter_DEFINED)
#include <Modloader/app/structs/XmlDataTreeWriter__Fields.h>
#if defined(IL2CPP_STRUCT_XmlDataTreeWriter__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlDataTreeWriter_DEFINED
struct XmlDataTreeWriter__Class;
struct XmlDataTreeWriter {
    struct XmlDataTreeWriter__Class* klass;
    MonitorData* monitor;
    struct XmlDataTreeWriter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlDataTreeWriter_FWDDECL)
#define IL2CPP_STRUCT_XmlDataTreeWriter_FWDDECL
#include <Modloader/app/structs/XmlDataTreeWriter__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlDataTreeWriter_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlDataTreeWriter_DEFINED) && !defined(IL2CPP_STRUCT_XmlDataTreeWriter_FWDDECL)
#include <Modloader/app/structs/XmlDataTreeWriter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlDataTreeWriter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
