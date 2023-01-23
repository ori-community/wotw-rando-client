#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlReflectionImporter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlReflectionImporter_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlReflectionImporter_DEFINED)
#include <Modloader/app/structs/XmlReflectionImporter__Fields.h>
#if defined(IL2CPP_STRUCT_XmlReflectionImporter__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlReflectionImporter_DEFINED
struct XmlReflectionImporter__Class;
struct XmlReflectionImporter {
    struct XmlReflectionImporter__Class* klass;
    MonitorData* monitor;
    struct XmlReflectionImporter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlReflectionImporter_FWDDECL)
#define IL2CPP_STRUCT_XmlReflectionImporter_FWDDECL
#include <Modloader/app/structs/XmlReflectionImporter__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlReflectionImporter_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlReflectionImporter_DEFINED) && !defined(IL2CPP_STRUCT_XmlReflectionImporter_FWDDECL)
#include <Modloader/app/structs/XmlReflectionImporter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlReflectionImporter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
