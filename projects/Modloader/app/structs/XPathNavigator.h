#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XPathNavigator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XPathNavigator_INITIALIZING
#if !defined(IL2CPP_STRUCT_XPathNavigator_DEFINED)
#define IL2CPP_STRUCT_XPathNavigator_DEFINED
struct XPathNavigator__Class;
struct XPathNavigator {
    struct XPathNavigator__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_XPathNavigator_FWDDECL)
#define IL2CPP_STRUCT_XPathNavigator_FWDDECL
#include <Modloader/app/structs/XPathNavigator__Class.h>
#endif
#undef IL2CPP_STRUCT_XPathNavigator_INITIALIZING
#if !defined(IL2CPP_STRUCT_XPathNavigator_DEFINED) && !defined(IL2CPP_STRUCT_XPathNavigator_FWDDECL)
#include <Modloader/app/structs/XPathNavigator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XPathNavigator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
