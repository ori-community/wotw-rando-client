#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlElement_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlElement_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlElement_DEFINED)
#include <Modloader/app/structs/XmlElement__Fields.h>
#if defined(IL2CPP_STRUCT_XmlElement__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlElement_DEFINED
struct XmlElement__Class;
struct XmlElement {
    struct XmlElement__Class* klass;
    MonitorData* monitor;
    struct XmlElement__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlElement_FWDDECL)
#define IL2CPP_STRUCT_XmlElement_FWDDECL
#include <Modloader/app/structs/XmlElement__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlElement_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlElement_DEFINED) && !defined(IL2CPP_STRUCT_XmlElement_FWDDECL)
#include <Modloader/app/structs/XmlElement.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlElement.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
