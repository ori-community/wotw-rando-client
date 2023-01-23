#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlAnyElementAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlAnyElementAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlAnyElementAttribute_DEFINED)
#include <Modloader/app/structs/XmlAnyElementAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_XmlAnyElementAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlAnyElementAttribute_DEFINED
struct XmlAnyElementAttribute__Class;
struct XmlAnyElementAttribute {
    struct XmlAnyElementAttribute__Class* klass;
    MonitorData* monitor;
    struct XmlAnyElementAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlAnyElementAttribute_FWDDECL)
#define IL2CPP_STRUCT_XmlAnyElementAttribute_FWDDECL
#include <Modloader/app/structs/XmlAnyElementAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlAnyElementAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlAnyElementAttribute_DEFINED) && !defined(IL2CPP_STRUCT_XmlAnyElementAttribute_FWDDECL)
#include <Modloader/app/structs/XmlAnyElementAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlAnyElementAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
