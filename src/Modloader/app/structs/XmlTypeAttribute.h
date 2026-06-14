#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlTypeAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlTypeAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlTypeAttribute_DEFINED)
#include <Modloader/app/structs/XmlTypeAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_XmlTypeAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlTypeAttribute_DEFINED
struct XmlTypeAttribute__Class;
struct XmlTypeAttribute {
    struct XmlTypeAttribute__Class* klass;
    MonitorData* monitor;
    struct XmlTypeAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlTypeAttribute_FWDDECL)
#define IL2CPP_STRUCT_XmlTypeAttribute_FWDDECL
#include <Modloader/app/structs/XmlTypeAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlTypeAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlTypeAttribute_DEFINED) && !defined(IL2CPP_STRUCT_XmlTypeAttribute_FWDDECL)
#include <Modloader/app/structs/XmlTypeAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlTypeAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
