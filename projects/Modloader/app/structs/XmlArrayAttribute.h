#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlArrayAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlArrayAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlArrayAttribute_DEFINED)
#include <Modloader/app/structs/XmlArrayAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_XmlArrayAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlArrayAttribute_DEFINED
struct XmlArrayAttribute__Class;
struct XmlArrayAttribute {
    struct XmlArrayAttribute__Class* klass;
    MonitorData* monitor;
    struct XmlArrayAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlArrayAttribute_FWDDECL)
#define IL2CPP_STRUCT_XmlArrayAttribute_FWDDECL
#include <Modloader/app/structs/XmlArrayAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlArrayAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlArrayAttribute_DEFINED) && !defined(IL2CPP_STRUCT_XmlArrayAttribute_FWDDECL)
#include <Modloader/app/structs/XmlArrayAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlArrayAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
