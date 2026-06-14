#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlDocumentType_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlDocumentType_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlDocumentType_DEFINED)
#include <Modloader/app/structs/XmlDocumentType__Fields.h>
#if defined(IL2CPP_STRUCT_XmlDocumentType__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlDocumentType_DEFINED
struct XmlDocumentType__Class;
struct XmlDocumentType {
    struct XmlDocumentType__Class* klass;
    MonitorData* monitor;
    struct XmlDocumentType__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlDocumentType_FWDDECL)
#define IL2CPP_STRUCT_XmlDocumentType_FWDDECL
#include <Modloader/app/structs/XmlDocumentType__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlDocumentType_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlDocumentType_DEFINED) && !defined(IL2CPP_STRUCT_XmlDocumentType_FWDDECL)
#include <Modloader/app/structs/XmlDocumentType.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlDocumentType.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
