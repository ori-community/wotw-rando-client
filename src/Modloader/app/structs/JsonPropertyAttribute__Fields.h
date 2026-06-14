#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonPropertyAttribute__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonPropertyAttribute__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonPropertyAttribute__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_Boolean_.h>
#include <Modloader/app/structs/Nullable_1_Int32_.h>
#include <Modloader/app/structs/Nullable_1_Newtonsoft_Json_DefaultValueHandling_.h>
#include <Modloader/app/structs/Nullable_1_Newtonsoft_Json_NullValueHandling_.h>
#include <Modloader/app/structs/Nullable_1_Newtonsoft_Json_ObjectCreationHandling_.h>
#include <Modloader/app/structs/Nullable_1_Newtonsoft_Json_ReferenceLoopHandling_.h>
#include <Modloader/app/structs/Nullable_1_Newtonsoft_Json_Required_.h>
#include <Modloader/app/structs/Nullable_1_Newtonsoft_Json_TypeNameHandling_.h>
#if defined(IL2CPP_STRUCT_Nullable_1_Newtonsoft_Json_NullValueHandling__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Newtonsoft_Json_DefaultValueHandling__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Newtonsoft_Json_ReferenceLoopHandling__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Newtonsoft_Json_ObjectCreationHandling__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Newtonsoft_Json_TypeNameHandling__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Boolean__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Int32__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Newtonsoft_Json_Required__DEFINED)
#define IL2CPP_STRUCT_JsonPropertyAttribute__Fields_DEFINED
struct Type;
struct Object__Array;
struct String;
struct __declspec(align(8)) JsonPropertyAttribute__Fields {
    struct Nullable_1_Newtonsoft_Json_NullValueHandling_ _nullValueHandling;
    struct Nullable_1_Newtonsoft_Json_DefaultValueHandling_ _defaultValueHandling;
    struct Nullable_1_Newtonsoft_Json_ReferenceLoopHandling_ _referenceLoopHandling;
    struct Nullable_1_Newtonsoft_Json_ObjectCreationHandling_ _objectCreationHandling;
    struct Nullable_1_Newtonsoft_Json_TypeNameHandling_ _typeNameHandling;
    struct Nullable_1_Boolean_ _isReference;
    struct Nullable_1_Int32_ _order;
    struct Nullable_1_Newtonsoft_Json_Required_ _required;
    struct Nullable_1_Boolean_ _itemIsReference;
    struct Nullable_1_Newtonsoft_Json_ReferenceLoopHandling_ _itemReferenceLoopHandling;
    struct Nullable_1_Newtonsoft_Json_TypeNameHandling_ _itemTypeNameHandling;
    struct Type* _ItemConverterType_k__BackingField;
    struct Object__Array* _ItemConverterParameters_k__BackingField;
    struct Type* _NamingStrategyType_k__BackingField;
    struct Object__Array* _NamingStrategyParameters_k__BackingField;
    struct String* _PropertyName_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JsonPropertyAttribute__Fields_FWDDECL)
#define IL2CPP_STRUCT_JsonPropertyAttribute__Fields_FWDDECL
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#endif
#undef IL2CPP_STRUCT_JsonPropertyAttribute__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonPropertyAttribute__Fields_DEFINED) && !defined(IL2CPP_STRUCT_JsonPropertyAttribute__Fields_FWDDECL)
#include <Modloader/app/structs/JsonPropertyAttribute__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonPropertyAttribute__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
