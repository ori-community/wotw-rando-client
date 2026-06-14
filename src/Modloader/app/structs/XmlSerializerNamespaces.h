#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSerializerNamespaces_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSerializerNamespaces_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSerializerNamespaces_DEFINED)
#include <Modloader/app/structs/XmlSerializerNamespaces__Fields.h>
#if defined(IL2CPP_STRUCT_XmlSerializerNamespaces__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlSerializerNamespaces_DEFINED
struct XmlSerializerNamespaces__Class;
struct XmlSerializerNamespaces {
    struct XmlSerializerNamespaces__Class* klass;
    MonitorData* monitor;
    struct XmlSerializerNamespaces__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlSerializerNamespaces_FWDDECL)
#define IL2CPP_STRUCT_XmlSerializerNamespaces_FWDDECL
#include <Modloader/app/structs/XmlSerializerNamespaces__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlSerializerNamespaces_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSerializerNamespaces_DEFINED) && !defined(IL2CPP_STRUCT_XmlSerializerNamespaces_FWDDECL)
#include <Modloader/app/structs/XmlSerializerNamespaces.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSerializerNamespaces.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
