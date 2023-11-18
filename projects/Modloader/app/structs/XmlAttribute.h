#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlAttribute_DEFINED)
#include <Modloader/app/structs/XmlAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_XmlAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlAttribute_DEFINED
struct XmlAttribute__Class;
struct XmlAttribute {
    struct XmlAttribute__Class* klass;
    MonitorData* monitor;
    struct XmlAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlAttribute_FWDDECL)
#define IL2CPP_STRUCT_XmlAttribute_FWDDECL
#include <Modloader/app/structs/XmlAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlAttribute_DEFINED) && !defined(IL2CPP_STRUCT_XmlAttribute_FWDDECL)
#include <Modloader/app/structs/XmlAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
