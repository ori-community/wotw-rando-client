#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlTypeMapping__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlTypeMapping__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlTypeMapping__Fields_DEFINED)
#include <Modloader/app/structs/XmlMapping__Fields.h>
#if defined(IL2CPP_STRUCT_XmlMapping__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlTypeMapping__Fields_DEFINED
struct String;
struct TypeData;
struct XmlTypeMapping;
struct ArrayList;
struct XmlTypeMapping__Fields {
    struct XmlMapping__Fields _;
    struct String* xmlType;
    struct String* xmlTypeNamespace;
    struct TypeData* type;
    struct XmlTypeMapping* baseMap;
    bool multiReferenceType;
    bool includeInSchema;
    bool isNullable;
    bool isAny;
    struct ArrayList* _derivedTypes;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlTypeMapping__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlTypeMapping__Fields_FWDDECL
#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TypeData.h>
#include <Modloader/app/structs/XmlTypeMapping.h>
#endif
#undef IL2CPP_STRUCT_XmlTypeMapping__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlTypeMapping__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlTypeMapping__Fields_FWDDECL)
#include <Modloader/app/structs/XmlTypeMapping__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlTypeMapping__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
