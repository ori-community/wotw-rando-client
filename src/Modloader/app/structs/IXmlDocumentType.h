#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IXmlDocumentType_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IXmlDocumentType_INITIALIZING
#if !defined(IL2CPP_STRUCT_IXmlDocumentType_DEFINED)
#define IL2CPP_STRUCT_IXmlDocumentType_DEFINED
struct IXmlDocumentType__Class;
struct IXmlDocumentType {
    struct IXmlDocumentType__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IXmlDocumentType_FWDDECL)
#define IL2CPP_STRUCT_IXmlDocumentType_FWDDECL
#include <Modloader/app/structs/IXmlDocumentType__Class.h>
#endif
#undef IL2CPP_STRUCT_IXmlDocumentType_INITIALIZING
#if !defined(IL2CPP_STRUCT_IXmlDocumentType_DEFINED) && !defined(IL2CPP_STRUCT_IXmlDocumentType_FWDDECL)
#include <Modloader/app/structs/IXmlDocumentType.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IXmlDocumentType.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
