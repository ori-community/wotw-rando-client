#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlIgnoreAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlIgnoreAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlIgnoreAttribute_DEFINED)
#define IL2CPP_STRUCT_XmlIgnoreAttribute_DEFINED
struct XmlIgnoreAttribute__Class;
struct XmlIgnoreAttribute {
    struct XmlIgnoreAttribute__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_XmlIgnoreAttribute_FWDDECL)
#define IL2CPP_STRUCT_XmlIgnoreAttribute_FWDDECL
#include <Modloader/app/structs/XmlIgnoreAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlIgnoreAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlIgnoreAttribute_DEFINED) && !defined(IL2CPP_STRUCT_XmlIgnoreAttribute_FWDDECL)
#include <Modloader/app/structs/XmlIgnoreAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlIgnoreAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
