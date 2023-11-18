#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlAttributeCollection_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlAttributeCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlAttributeCollection_DEFINED)
#include <Modloader/app/structs/XmlAttributeCollection__Fields.h>
#if defined(IL2CPP_STRUCT_XmlAttributeCollection__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlAttributeCollection_DEFINED
struct XmlAttributeCollection__Class;
struct XmlAttributeCollection {
    struct XmlAttributeCollection__Class* klass;
    MonitorData* monitor;
    struct XmlAttributeCollection__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlAttributeCollection_FWDDECL)
#define IL2CPP_STRUCT_XmlAttributeCollection_FWDDECL
#include <Modloader/app/structs/XmlAttributeCollection__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlAttributeCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlAttributeCollection_DEFINED) && !defined(IL2CPP_STRUCT_XmlAttributeCollection_FWDDECL)
#include <Modloader/app/structs/XmlAttributeCollection.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlAttributeCollection.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
