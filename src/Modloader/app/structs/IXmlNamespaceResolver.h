#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IXmlNamespaceResolver_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IXmlNamespaceResolver_INITIALIZING
#if !defined(IL2CPP_STRUCT_IXmlNamespaceResolver_DEFINED)
#define IL2CPP_STRUCT_IXmlNamespaceResolver_DEFINED
struct IXmlNamespaceResolver__Class;
struct IXmlNamespaceResolver {
    struct IXmlNamespaceResolver__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IXmlNamespaceResolver_FWDDECL)
#define IL2CPP_STRUCT_IXmlNamespaceResolver_FWDDECL
#include <Modloader/app/structs/IXmlNamespaceResolver__Class.h>
#endif
#undef IL2CPP_STRUCT_IXmlNamespaceResolver_INITIALIZING
#if !defined(IL2CPP_STRUCT_IXmlNamespaceResolver_DEFINED) && !defined(IL2CPP_STRUCT_IXmlNamespaceResolver_FWDDECL)
#include <Modloader/app/structs/IXmlNamespaceResolver.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IXmlNamespaceResolver.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
