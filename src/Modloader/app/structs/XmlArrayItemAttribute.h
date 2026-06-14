#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlArrayItemAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlArrayItemAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlArrayItemAttribute_DEFINED)
#include <Modloader/app/structs/XmlArrayItemAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_XmlArrayItemAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlArrayItemAttribute_DEFINED
struct XmlArrayItemAttribute__Class;
struct XmlArrayItemAttribute {
    struct XmlArrayItemAttribute__Class* klass;
    MonitorData* monitor;
    struct XmlArrayItemAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlArrayItemAttribute_FWDDECL)
#define IL2CPP_STRUCT_XmlArrayItemAttribute_FWDDECL
#include <Modloader/app/structs/XmlArrayItemAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlArrayItemAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlArrayItemAttribute_DEFINED) && !defined(IL2CPP_STRUCT_XmlArrayItemAttribute_FWDDECL)
#include <Modloader/app/structs/XmlArrayItemAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlArrayItemAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
