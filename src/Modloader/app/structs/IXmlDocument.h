#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IXmlDocument_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IXmlDocument_INITIALIZING
#if !defined(IL2CPP_STRUCT_IXmlDocument_DEFINED)
#define IL2CPP_STRUCT_IXmlDocument_DEFINED
struct IXmlDocument__Class;
struct IXmlDocument {
    struct IXmlDocument__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IXmlDocument_FWDDECL)
#define IL2CPP_STRUCT_IXmlDocument_FWDDECL
#include <Modloader/app/structs/IXmlDocument__Class.h>
#endif
#undef IL2CPP_STRUCT_IXmlDocument_INITIALIZING
#if !defined(IL2CPP_STRUCT_IXmlDocument_DEFINED) && !defined(IL2CPP_STRUCT_IXmlDocument_FWDDECL)
#include <Modloader/app/structs/IXmlDocument.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IXmlDocument.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
