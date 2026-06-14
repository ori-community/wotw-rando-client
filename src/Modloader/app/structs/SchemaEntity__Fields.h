#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SchemaEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SchemaEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SchemaEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_SchemaEntity__Fields_DEFINED
struct XmlQualifiedName;
struct String;
struct __declspec(align(8)) SchemaEntity__Fields {
    struct XmlQualifiedName* qname;
    struct String* url;
    struct String* pubid;
    struct String* text;
    struct XmlQualifiedName* ndata;
    int32_t lineNumber;
    int32_t linePosition;
    bool isParameter;
    bool isExternal;
    bool parsingInProgress;
    bool isDeclaredInExternal;
    struct String* baseURI;
    struct String* declaredURI;
};
#endif
#if !defined(IL2CPP_STRUCT_SchemaEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_SchemaEntity__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlQualifiedName.h>
#endif
#undef IL2CPP_STRUCT_SchemaEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SchemaEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SchemaEntity__Fields_FWDDECL)
#include <Modloader/app/structs/SchemaEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SchemaEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
