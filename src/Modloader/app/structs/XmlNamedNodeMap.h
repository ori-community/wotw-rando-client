#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlNamedNodeMap_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlNamedNodeMap_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlNamedNodeMap_DEFINED)
#include <Modloader/app/structs/XmlNamedNodeMap__Fields.h>
#if defined(IL2CPP_STRUCT_XmlNamedNodeMap__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlNamedNodeMap_DEFINED
struct XmlNamedNodeMap__Class;
struct XmlNamedNodeMap {
    struct XmlNamedNodeMap__Class* klass;
    MonitorData* monitor;
    struct XmlNamedNodeMap__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlNamedNodeMap_FWDDECL)
#define IL2CPP_STRUCT_XmlNamedNodeMap_FWDDECL
#include <Modloader/app/structs/XmlNamedNodeMap__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlNamedNodeMap_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlNamedNodeMap_DEFINED) && !defined(IL2CPP_STRUCT_XmlNamedNodeMap_FWDDECL)
#include <Modloader/app/structs/XmlNamedNodeMap.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlNamedNodeMap.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
