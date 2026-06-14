#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XDocumentWrapper_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XDocumentWrapper_INITIALIZING
#if !defined(IL2CPP_STRUCT_XDocumentWrapper_DEFINED)
#include <Modloader/app/structs/XDocumentWrapper__Fields.h>
#if defined(IL2CPP_STRUCT_XDocumentWrapper__Fields_DEFINED)
#define IL2CPP_STRUCT_XDocumentWrapper_DEFINED
struct XDocumentWrapper__Class;
struct XDocumentWrapper {
    struct XDocumentWrapper__Class* klass;
    MonitorData* monitor;
    struct XDocumentWrapper__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XDocumentWrapper_FWDDECL)
#define IL2CPP_STRUCT_XDocumentWrapper_FWDDECL
#include <Modloader/app/structs/XDocumentWrapper__Class.h>
#endif
#undef IL2CPP_STRUCT_XDocumentWrapper_INITIALIZING
#if !defined(IL2CPP_STRUCT_XDocumentWrapper_DEFINED) && !defined(IL2CPP_STRUCT_XDocumentWrapper_FWDDECL)
#include <Modloader/app/structs/XDocumentWrapper.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XDocumentWrapper.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
