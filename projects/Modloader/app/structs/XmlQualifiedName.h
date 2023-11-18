#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlQualifiedName_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlQualifiedName_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlQualifiedName_DEFINED)
#include <Modloader/app/structs/XmlQualifiedName__Fields.h>
#if defined(IL2CPP_STRUCT_XmlQualifiedName__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlQualifiedName_DEFINED
struct XmlQualifiedName__Class;
struct XmlQualifiedName {
    struct XmlQualifiedName__Class* klass;
    MonitorData* monitor;
    struct XmlQualifiedName__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlQualifiedName_FWDDECL)
#define IL2CPP_STRUCT_XmlQualifiedName_FWDDECL
#include <Modloader/app/structs/XmlQualifiedName__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlQualifiedName_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlQualifiedName_DEFINED) && !defined(IL2CPP_STRUCT_XmlQualifiedName_FWDDECL)
#include <Modloader/app/structs/XmlQualifiedName.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlQualifiedName.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
