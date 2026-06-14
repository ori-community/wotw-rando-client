#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XDocumentTypeWrapper_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XDocumentTypeWrapper_INITIALIZING
#if !defined(IL2CPP_STRUCT_XDocumentTypeWrapper_DEFINED)
#include <Modloader/app/structs/XDocumentTypeWrapper__Fields.h>
#if defined(IL2CPP_STRUCT_XDocumentTypeWrapper__Fields_DEFINED)
#define IL2CPP_STRUCT_XDocumentTypeWrapper_DEFINED
struct XDocumentTypeWrapper__Class;
struct XDocumentTypeWrapper {
    struct XDocumentTypeWrapper__Class* klass;
    MonitorData* monitor;
    struct XDocumentTypeWrapper__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XDocumentTypeWrapper_FWDDECL)
#define IL2CPP_STRUCT_XDocumentTypeWrapper_FWDDECL
#include <Modloader/app/structs/XDocumentTypeWrapper__Class.h>
#endif
#undef IL2CPP_STRUCT_XDocumentTypeWrapper_INITIALIZING
#if !defined(IL2CPP_STRUCT_XDocumentTypeWrapper_DEFINED) && !defined(IL2CPP_STRUCT_XDocumentTypeWrapper_FWDDECL)
#include <Modloader/app/structs/XDocumentTypeWrapper.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XDocumentTypeWrapper.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
