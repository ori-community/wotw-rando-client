#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlAutoDetectWriter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlAutoDetectWriter_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlAutoDetectWriter_DEFINED)
#include <Modloader/app/structs/XmlAutoDetectWriter__Fields.h>
#if defined(IL2CPP_STRUCT_XmlAutoDetectWriter__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlAutoDetectWriter_DEFINED
struct XmlAutoDetectWriter__Class;
struct XmlAutoDetectWriter {
    struct XmlAutoDetectWriter__Class* klass;
    MonitorData* monitor;
    struct XmlAutoDetectWriter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlAutoDetectWriter_FWDDECL)
#define IL2CPP_STRUCT_XmlAutoDetectWriter_FWDDECL
#include <Modloader/app/structs/XmlAutoDetectWriter__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlAutoDetectWriter_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlAutoDetectWriter_DEFINED) && !defined(IL2CPP_STRUCT_XmlAutoDetectWriter_FWDDECL)
#include <Modloader/app/structs/XmlAutoDetectWriter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlAutoDetectWriter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
