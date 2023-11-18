#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlElementAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlElementAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlElementAttribute_DEFINED)
#include <Modloader/app/structs/XmlElementAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_XmlElementAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlElementAttribute_DEFINED
struct XmlElementAttribute__Class;
struct XmlElementAttribute {
    struct XmlElementAttribute__Class* klass;
    MonitorData* monitor;
    struct XmlElementAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlElementAttribute_FWDDECL)
#define IL2CPP_STRUCT_XmlElementAttribute_FWDDECL
#include <Modloader/app/structs/XmlElementAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlElementAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlElementAttribute_DEFINED) && !defined(IL2CPP_STRUCT_XmlElementAttribute_FWDDECL)
#include <Modloader/app/structs/XmlElementAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlElementAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
