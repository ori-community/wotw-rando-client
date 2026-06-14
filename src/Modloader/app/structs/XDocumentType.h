#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XDocumentType_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XDocumentType_INITIALIZING
#if !defined(IL2CPP_STRUCT_XDocumentType_DEFINED)
#include <Modloader/app/structs/XDocumentType__Fields.h>
#if defined(IL2CPP_STRUCT_XDocumentType__Fields_DEFINED)
#define IL2CPP_STRUCT_XDocumentType_DEFINED
struct XDocumentType__Class;
struct XDocumentType {
    struct XDocumentType__Class* klass;
    MonitorData* monitor;
    struct XDocumentType__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XDocumentType_FWDDECL)
#define IL2CPP_STRUCT_XDocumentType_FWDDECL
#include <Modloader/app/structs/XDocumentType__Class.h>
#endif
#undef IL2CPP_STRUCT_XDocumentType_INITIALIZING
#if !defined(IL2CPP_STRUCT_XDocumentType_DEFINED) && !defined(IL2CPP_STRUCT_XDocumentType_FWDDECL)
#include <Modloader/app/structs/XDocumentType.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XDocumentType.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
