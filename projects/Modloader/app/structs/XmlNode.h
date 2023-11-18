#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlNode_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlNode_DEFINED)
#include <Modloader/app/structs/XmlNode__Fields.h>
#if defined(IL2CPP_STRUCT_XmlNode__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlNode_DEFINED
struct XmlNode__Class;
struct XmlNode {
    struct XmlNode__Class* klass;
    MonitorData* monitor;
    struct XmlNode__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlNode_FWDDECL)
#define IL2CPP_STRUCT_XmlNode_FWDDECL
#include <Modloader/app/structs/XmlNode__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlNode_DEFINED) && !defined(IL2CPP_STRUCT_XmlNode_FWDDECL)
#include <Modloader/app/structs/XmlNode.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlNode.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
