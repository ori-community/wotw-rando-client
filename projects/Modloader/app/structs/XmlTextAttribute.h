#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlTextAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlTextAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlTextAttribute_DEFINED)
#include <Modloader/app/structs/XmlTextAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_XmlTextAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlTextAttribute_DEFINED
struct XmlTextAttribute__Class;
struct XmlTextAttribute {
    struct XmlTextAttribute__Class* klass;
    MonitorData* monitor;
    struct XmlTextAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlTextAttribute_FWDDECL)
#define IL2CPP_STRUCT_XmlTextAttribute_FWDDECL
#include <Modloader/app/structs/XmlTextAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlTextAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlTextAttribute_DEFINED) && !defined(IL2CPP_STRUCT_XmlTextAttribute_FWDDECL)
#include <Modloader/app/structs/XmlTextAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlTextAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
