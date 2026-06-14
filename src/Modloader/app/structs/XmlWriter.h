#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlWriter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlWriter_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlWriter_DEFINED)
#include <Modloader/app/structs/XmlWriter__Fields.h>
#if defined(IL2CPP_STRUCT_XmlWriter__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlWriter_DEFINED
struct XmlWriter__Class;
struct XmlWriter {
    struct XmlWriter__Class* klass;
    MonitorData* monitor;
    struct XmlWriter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlWriter_FWDDECL)
#define IL2CPP_STRUCT_XmlWriter_FWDDECL
#include <Modloader/app/structs/XmlWriter__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlWriter_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlWriter_DEFINED) && !defined(IL2CPP_STRUCT_XmlWriter_FWDDECL)
#include <Modloader/app/structs/XmlWriter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlWriter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
