#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IXmlNode_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IXmlNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_IXmlNode_DEFINED)
#define IL2CPP_STRUCT_IXmlNode_DEFINED
struct IXmlNode__Class;
struct IXmlNode {
    struct IXmlNode__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IXmlNode_FWDDECL)
#define IL2CPP_STRUCT_IXmlNode_FWDDECL
#include <Modloader/app/structs/IXmlNode__Class.h>
#endif
#undef IL2CPP_STRUCT_IXmlNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_IXmlNode_DEFINED) && !defined(IL2CPP_STRUCT_IXmlNode_FWDDECL)
#include <Modloader/app/structs/IXmlNode.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IXmlNode.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
