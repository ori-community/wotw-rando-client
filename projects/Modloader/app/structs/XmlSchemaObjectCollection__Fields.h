#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSchemaObjectCollection__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSchemaObjectCollection__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaObjectCollection__Fields_DEFINED)
#include <Modloader/app/structs/CollectionBase__Fields.h>
#if defined(IL2CPP_STRUCT_CollectionBase__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlSchemaObjectCollection__Fields_DEFINED
struct XmlSchemaObject;
struct XmlSchemaObjectCollection__Fields {
    struct CollectionBase__Fields _;
    struct XmlSchemaObject* parent;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlSchemaObjectCollection__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlSchemaObjectCollection__Fields_FWDDECL
#include <Modloader/app/structs/XmlSchemaObject.h>
#endif
#undef IL2CPP_STRUCT_XmlSchemaObjectCollection__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaObjectCollection__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlSchemaObjectCollection__Fields_FWDDECL)
#include <Modloader/app/structs/XmlSchemaObjectCollection__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSchemaObjectCollection__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
