#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XdrBuilder_DeclBaseInfo__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XdrBuilder_DeclBaseInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XdrBuilder_DeclBaseInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_XdrBuilder_DeclBaseInfo__Fields_DEFINED
struct XmlQualifiedName;
struct String;
struct Object;
struct SchemaElementDecl;
struct SchemaAttDef;
struct XdrBuilder_DeclBaseInfo;
struct __declspec(align(8)) XdrBuilder_DeclBaseInfo__Fields {
    struct XmlQualifiedName* _Name;
    struct String* _Prefix;
    struct XmlQualifiedName* _TypeName;
    struct String* _TypePrefix;
    struct Object* _Default;
    struct Object* _Revises;
    uint32_t _MaxOccurs;
    uint32_t _MinOccurs;
    bool _Checking;
    struct SchemaElementDecl* _ElementDecl;
    struct SchemaAttDef* _Attdef;
    struct XdrBuilder_DeclBaseInfo* _Next;
};
#endif
#if !defined(IL2CPP_STRUCT_XdrBuilder_DeclBaseInfo__Fields_FWDDECL)
#define IL2CPP_STRUCT_XdrBuilder_DeclBaseInfo__Fields_FWDDECL
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SchemaAttDef.h>
#include <Modloader/app/structs/SchemaElementDecl.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XdrBuilder_DeclBaseInfo.h>
#include <Modloader/app/structs/XmlQualifiedName.h>
#endif
#undef IL2CPP_STRUCT_XdrBuilder_DeclBaseInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XdrBuilder_DeclBaseInfo__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XdrBuilder_DeclBaseInfo__Fields_FWDDECL)
#include <Modloader/app/structs/XdrBuilder_DeclBaseInfo__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XdrBuilder_DeclBaseInfo__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
