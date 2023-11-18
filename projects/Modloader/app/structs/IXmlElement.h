#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IXmlElement_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IXmlElement_INITIALIZING
#if !defined(IL2CPP_STRUCT_IXmlElement_DEFINED)
#define IL2CPP_STRUCT_IXmlElement_DEFINED
struct IXmlElement__Class;
struct IXmlElement {
    struct IXmlElement__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IXmlElement_FWDDECL)
#define IL2CPP_STRUCT_IXmlElement_FWDDECL
#include <Modloader/app/structs/IXmlElement__Class.h>
#endif
#undef IL2CPP_STRUCT_IXmlElement_INITIALIZING
#if !defined(IL2CPP_STRUCT_IXmlElement_DEFINED) && !defined(IL2CPP_STRUCT_IXmlElement_FWDDECL)
#include <Modloader/app/structs/IXmlElement.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IXmlElement.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
