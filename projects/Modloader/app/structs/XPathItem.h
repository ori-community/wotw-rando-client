#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XPathItem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XPathItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_XPathItem_DEFINED)
#define IL2CPP_STRUCT_XPathItem_DEFINED
struct XPathItem__Class;
struct XPathItem {
    struct XPathItem__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_XPathItem_FWDDECL)
#define IL2CPP_STRUCT_XPathItem_FWDDECL
#include <Modloader/app/structs/XPathItem__Class.h>
#endif
#undef IL2CPP_STRUCT_XPathItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_XPathItem_DEFINED) && !defined(IL2CPP_STRUCT_XPathItem_FWDDECL)
#include <Modloader/app/structs/XPathItem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XPathItem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
