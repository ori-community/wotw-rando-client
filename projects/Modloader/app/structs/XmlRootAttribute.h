#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlRootAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlRootAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlRootAttribute_DEFINED)
#include <Modloader/app/structs/XmlRootAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_XmlRootAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlRootAttribute_DEFINED
struct XmlRootAttribute__Class;
struct XmlRootAttribute {
    struct XmlRootAttribute__Class* klass;
    MonitorData* monitor;
    struct XmlRootAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlRootAttribute_FWDDECL)
#define IL2CPP_STRUCT_XmlRootAttribute_FWDDECL
#include <Modloader/app/structs/XmlRootAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlRootAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlRootAttribute_DEFINED) && !defined(IL2CPP_STRUCT_XmlRootAttribute_FWDDECL)
#include <Modloader/app/structs/XmlRootAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlRootAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
