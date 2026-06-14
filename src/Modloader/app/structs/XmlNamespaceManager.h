#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlNamespaceManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlNamespaceManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlNamespaceManager_DEFINED)
#include <Modloader/app/structs/XmlNamespaceManager__Fields.h>
#if defined(IL2CPP_STRUCT_XmlNamespaceManager__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlNamespaceManager_DEFINED
struct XmlNamespaceManager__Class;
struct XmlNamespaceManager {
    struct XmlNamespaceManager__Class* klass;
    MonitorData* monitor;
    struct XmlNamespaceManager__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlNamespaceManager_FWDDECL)
#define IL2CPP_STRUCT_XmlNamespaceManager_FWDDECL
#include <Modloader/app/structs/XmlNamespaceManager__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlNamespaceManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlNamespaceManager_DEFINED) && !defined(IL2CPP_STRUCT_XmlNamespaceManager_FWDDECL)
#include <Modloader/app/structs/XmlNamespaceManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlNamespaceManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
