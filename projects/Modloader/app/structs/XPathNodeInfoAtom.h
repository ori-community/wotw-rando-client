#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XPathNodeInfoAtom_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XPathNodeInfoAtom_INITIALIZING
#if !defined(IL2CPP_STRUCT_XPathNodeInfoAtom_DEFINED)
#include <Modloader/app/structs/XPathNodeInfoAtom__Fields.h>
#if defined(IL2CPP_STRUCT_XPathNodeInfoAtom__Fields_DEFINED)
#define IL2CPP_STRUCT_XPathNodeInfoAtom_DEFINED
struct XPathNodeInfoAtom__Class;
struct XPathNodeInfoAtom {
    struct XPathNodeInfoAtom__Class* klass;
    MonitorData* monitor;
    struct XPathNodeInfoAtom__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XPathNodeInfoAtom_FWDDECL)
#define IL2CPP_STRUCT_XPathNodeInfoAtom_FWDDECL
#include <Modloader/app/structs/XPathNodeInfoAtom__Class.h>
#endif
#undef IL2CPP_STRUCT_XPathNodeInfoAtom_INITIALIZING
#if !defined(IL2CPP_STRUCT_XPathNodeInfoAtom_DEFINED) && !defined(IL2CPP_STRUCT_XPathNodeInfoAtom_FWDDECL)
#include <Modloader/app/structs/XPathNodeInfoAtom.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XPathNodeInfoAtom.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
