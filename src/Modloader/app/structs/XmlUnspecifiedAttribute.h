#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlUnspecifiedAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlUnspecifiedAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlUnspecifiedAttribute_DEFINED)
#include <Modloader/app/structs/XmlUnspecifiedAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_XmlUnspecifiedAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlUnspecifiedAttribute_DEFINED
struct XmlUnspecifiedAttribute__Class;
struct XmlUnspecifiedAttribute {
    struct XmlUnspecifiedAttribute__Class* klass;
    MonitorData* monitor;
    struct XmlUnspecifiedAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlUnspecifiedAttribute_FWDDECL)
#define IL2CPP_STRUCT_XmlUnspecifiedAttribute_FWDDECL
#include <Modloader/app/structs/XmlUnspecifiedAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlUnspecifiedAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlUnspecifiedAttribute_DEFINED) && !defined(IL2CPP_STRUCT_XmlUnspecifiedAttribute_FWDDECL)
#include <Modloader/app/structs/XmlUnspecifiedAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlUnspecifiedAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
