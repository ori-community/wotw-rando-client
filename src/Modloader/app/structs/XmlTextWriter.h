#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlTextWriter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlTextWriter_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlTextWriter_DEFINED)
#include <Modloader/app/structs/XmlTextWriter__Fields.h>
#if defined(IL2CPP_STRUCT_XmlTextWriter__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlTextWriter_DEFINED
struct XmlTextWriter__Class;
struct XmlTextWriter {
    struct XmlTextWriter__Class* klass;
    MonitorData* monitor;
    struct XmlTextWriter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlTextWriter_FWDDECL)
#define IL2CPP_STRUCT_XmlTextWriter_FWDDECL
#include <Modloader/app/structs/XmlTextWriter__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlTextWriter_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlTextWriter_DEFINED) && !defined(IL2CPP_STRUCT_XmlTextWriter_FWDDECL)
#include <Modloader/app/structs/XmlTextWriter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlTextWriter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
