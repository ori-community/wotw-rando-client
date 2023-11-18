#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlEnumAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlEnumAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlEnumAttribute_DEFINED)
#include <Modloader/app/structs/XmlEnumAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_XmlEnumAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlEnumAttribute_DEFINED
struct XmlEnumAttribute__Class;
struct XmlEnumAttribute {
    struct XmlEnumAttribute__Class* klass;
    MonitorData* monitor;
    struct XmlEnumAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlEnumAttribute_FWDDECL)
#define IL2CPP_STRUCT_XmlEnumAttribute_FWDDECL
#include <Modloader/app/structs/XmlEnumAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlEnumAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlEnumAttribute_DEFINED) && !defined(IL2CPP_STRUCT_XmlEnumAttribute_FWDDECL)
#include <Modloader/app/structs/XmlEnumAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlEnumAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
