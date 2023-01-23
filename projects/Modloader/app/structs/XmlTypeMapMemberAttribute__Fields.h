#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlTypeMapMemberAttribute__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlTypeMapMemberAttribute__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlTypeMapMemberAttribute__Fields_DEFINED)
#include <Modloader/app/structs/XmlSchemaForm__Enum.h>
#include <Modloader/app/structs/XmlTypeMapMember__Fields.h>
#if defined(IL2CPP_STRUCT_XmlTypeMapMember__Fields_DEFINED) && defined(IL2CPP_STRUCT_XmlSchemaForm__Enum_DEFINED)
#define IL2CPP_STRUCT_XmlTypeMapMemberAttribute__Fields_DEFINED
struct String;
struct XmlTypeMapping;
struct XmlTypeMapMemberAttribute__Fields {
    struct XmlTypeMapMember__Fields _;
    struct String* _attributeName;
    struct String* _namespace;
    XmlSchemaForm__Enum _form;

    struct XmlTypeMapping* _mappedType;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlTypeMapMemberAttribute__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlTypeMapMemberAttribute__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlTypeMapping.h>
#endif
#undef IL2CPP_STRUCT_XmlTypeMapMemberAttribute__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlTypeMapMemberAttribute__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlTypeMapMemberAttribute__Fields_FWDDECL)
#include <Modloader/app/structs/XmlTypeMapMemberAttribute__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlTypeMapMemberAttribute__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
