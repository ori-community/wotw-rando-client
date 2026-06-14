#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XdrBuilder_ElementContent__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XdrBuilder_ElementContent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XdrBuilder_ElementContent__Fields_DEFINED)
#define IL2CPP_STRUCT_XdrBuilder_ElementContent__Fields_DEFINED
struct SchemaElementDecl;
struct Hashtable;
struct __declspec(align(8)) XdrBuilder_ElementContent__Fields {
    struct SchemaElementDecl* _ElementDecl;
    int32_t _ContentAttr;
    int32_t _OrderAttr;
    bool _MasterGroupRequired;
    bool _ExistTerminal;
    bool _AllowDataType;
    bool _HasDataType;
    bool _HasType;
    bool _EnumerationRequired;
    uint32_t _MinVal;
    uint32_t _MaxVal;
    uint32_t _MaxLength;
    uint32_t _MinLength;
    struct Hashtable* _AttDefList;
};
#endif
#if !defined(IL2CPP_STRUCT_XdrBuilder_ElementContent__Fields_FWDDECL)
#define IL2CPP_STRUCT_XdrBuilder_ElementContent__Fields_FWDDECL
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/SchemaElementDecl.h>
#endif
#undef IL2CPP_STRUCT_XdrBuilder_ElementContent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XdrBuilder_ElementContent__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XdrBuilder_ElementContent__Fields_FWDDECL)
#include <Modloader/app/structs/XdrBuilder_ElementContent__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XdrBuilder_ElementContent__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
