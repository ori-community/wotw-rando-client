#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AttributePSVIInfo__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AttributePSVIInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AttributePSVIInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_AttributePSVIInfo__Fields_DEFINED
struct String;
struct Object;
struct XmlSchemaInfo;
struct __declspec(align(8)) AttributePSVIInfo__Fields {
    struct String* localName;
    struct String* namespaceUri;
    struct Object* typedAttributeValue;
    struct XmlSchemaInfo* attributeSchemaInfo;
};
#endif
#if !defined(IL2CPP_STRUCT_AttributePSVIInfo__Fields_FWDDECL)
#define IL2CPP_STRUCT_AttributePSVIInfo__Fields_FWDDECL
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlSchemaInfo.h>
#endif
#undef IL2CPP_STRUCT_AttributePSVIInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AttributePSVIInfo__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AttributePSVIInfo__Fields_FWDDECL)
#include <Modloader/app/structs/AttributePSVIInfo__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AttributePSVIInfo__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
