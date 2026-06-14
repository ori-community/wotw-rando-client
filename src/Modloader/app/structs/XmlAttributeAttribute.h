#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlAttributeAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlAttributeAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlAttributeAttribute_DEFINED)
#include <Modloader/app/structs/XmlAttributeAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_XmlAttributeAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlAttributeAttribute_DEFINED
struct XmlAttributeAttribute__Class;
struct XmlAttributeAttribute {
    struct XmlAttributeAttribute__Class* klass;
    MonitorData* monitor;
    struct XmlAttributeAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlAttributeAttribute_FWDDECL)
#define IL2CPP_STRUCT_XmlAttributeAttribute_FWDDECL
#include <Modloader/app/structs/XmlAttributeAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlAttributeAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlAttributeAttribute_DEFINED) && !defined(IL2CPP_STRUCT_XmlAttributeAttribute_FWDDECL)
#include <Modloader/app/structs/XmlAttributeAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlAttributeAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
