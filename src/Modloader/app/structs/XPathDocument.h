#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XPathDocument_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XPathDocument_INITIALIZING
#if !defined(IL2CPP_STRUCT_XPathDocument_DEFINED)
#include <Modloader/app/structs/XPathDocument__Fields.h>
#if defined(IL2CPP_STRUCT_XPathDocument__Fields_DEFINED)
#define IL2CPP_STRUCT_XPathDocument_DEFINED
struct XPathDocument__Class;
struct XPathDocument {
    struct XPathDocument__Class* klass;
    MonitorData* monitor;
    struct XPathDocument__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XPathDocument_FWDDECL)
#define IL2CPP_STRUCT_XPathDocument_FWDDECL
#include <Modloader/app/structs/XPathDocument__Class.h>
#endif
#undef IL2CPP_STRUCT_XPathDocument_INITIALIZING
#if !defined(IL2CPP_STRUCT_XPathDocument_DEFINED) && !defined(IL2CPP_STRUCT_XPathDocument_FWDDECL)
#include <Modloader/app/structs/XPathDocument.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XPathDocument.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
