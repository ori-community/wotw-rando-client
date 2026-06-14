#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlNameEx__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlNameEx__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlNameEx__Fields_DEFINED)
#include <Modloader/app/structs/XmlName__Fields.h>
#if defined(IL2CPP_STRUCT_XmlName__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlNameEx__Fields_DEFINED
struct XmlSchemaSimpleType;
struct XmlSchemaType;
struct Object;
struct XmlNameEx__Fields {
    struct XmlName__Fields _;
    uint8_t flags;
    struct XmlSchemaSimpleType* memberType;
    struct XmlSchemaType* schemaType;
    struct Object* decl;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlNameEx__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlNameEx__Fields_FWDDECL
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/XmlSchemaSimpleType.h>
#include <Modloader/app/structs/XmlSchemaType.h>
#endif
#undef IL2CPP_STRUCT_XmlNameEx__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlNameEx__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlNameEx__Fields_FWDDECL)
#include <Modloader/app/structs/XmlNameEx__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlNameEx__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
