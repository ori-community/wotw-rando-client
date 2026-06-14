#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XPathNodeRef__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XPathNodeRef__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_XPathNodeRef__Boxed_DEFINED)
#include <Modloader/app/structs/XPathNodeRef.h>
#if defined(IL2CPP_STRUCT_XPathNodeRef_DEFINED)
#define IL2CPP_STRUCT_XPathNodeRef__Boxed_DEFINED
struct XPathNodeRef__Class;
struct XPathNodeRef__Boxed {
    struct XPathNodeRef__Class* klass;
    MonitorData* monitor;
    struct XPathNodeRef fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XPathNodeRef__Boxed_FWDDECL)
#define IL2CPP_STRUCT_XPathNodeRef__Boxed_FWDDECL
#include <Modloader/app/structs/XPathNodeRef__Class.h>
#endif
#undef IL2CPP_STRUCT_XPathNodeRef__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_XPathNodeRef__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_XPathNodeRef__Boxed_FWDDECL)
#include <Modloader/app/structs/XPathNodeRef__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XPathNodeRef__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
