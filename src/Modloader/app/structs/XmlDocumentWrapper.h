#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlDocumentWrapper_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlDocumentWrapper_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlDocumentWrapper_DEFINED)
#include <Modloader/app/structs/XmlDocumentWrapper__Fields.h>
#if defined(IL2CPP_STRUCT_XmlDocumentWrapper__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlDocumentWrapper_DEFINED
struct XmlDocumentWrapper__Class;
struct XmlDocumentWrapper {
    struct XmlDocumentWrapper__Class* klass;
    MonitorData* monitor;
    struct XmlDocumentWrapper__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlDocumentWrapper_FWDDECL)
#define IL2CPP_STRUCT_XmlDocumentWrapper_FWDDECL
#include <Modloader/app/structs/XmlDocumentWrapper__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlDocumentWrapper_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlDocumentWrapper_DEFINED) && !defined(IL2CPP_STRUCT_XmlDocumentWrapper_FWDDECL)
#include <Modloader/app/structs/XmlDocumentWrapper.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlDocumentWrapper.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
