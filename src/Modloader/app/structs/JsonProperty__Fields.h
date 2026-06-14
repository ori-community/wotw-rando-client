#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonProperty__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonProperty__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonProperty__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_Boolean_.h>
#include <Modloader/app/structs/Nullable_1_Int32_.h>
#include <Modloader/app/structs/Nullable_1_Newtonsoft_Json_DefaultValueHandling_.h>
#include <Modloader/app/structs/Nullable_1_Newtonsoft_Json_NullValueHandling_.h>
#include <Modloader/app/structs/Nullable_1_Newtonsoft_Json_ObjectCreationHandling_.h>
#include <Modloader/app/structs/Nullable_1_Newtonsoft_Json_ReferenceLoopHandling_.h>
#include <Modloader/app/structs/Nullable_1_Newtonsoft_Json_Required_.h>
#include <Modloader/app/structs/Nullable_1_Newtonsoft_Json_TypeNameHandling_.h>
#if defined(IL2CPP_STRUCT_Nullable_1_Newtonsoft_Json_Required__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Int32__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Boolean__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Newtonsoft_Json_NullValueHandling__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Newtonsoft_Json_DefaultValueHandling__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Newtonsoft_Json_ReferenceLoopHandling__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Newtonsoft_Json_ObjectCreationHandling__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Newtonsoft_Json_TypeNameHandling__DEFINED)
#define IL2CPP_STRUCT_JsonProperty__Fields_DEFINED
struct Object;
struct String;
struct Type;
struct JsonContract;
struct IValueProvider;
struct IAttributeProvider;
struct JsonConverter;
struct Predicate_1_Object_;
struct Action_2_Object_Object_;
struct __declspec(align(8)) JsonProperty__Fields {
    struct Nullable_1_Newtonsoft_Json_Required_ _required;
    bool _hasExplicitDefaultValue;
    struct Object* _defaultValue;
    bool _hasGeneratedDefaultValue;
    struct String* _propertyName;
    bool _skipPropertyNameEscape;
    struct Type* _propertyType;
    struct JsonContract* _PropertyContract_k__BackingField;
    struct Type* _DeclaringType_k__BackingField;
    struct Nullable_1_Int32_ _Order_k__BackingField;
    struct String* _UnderlyingName_k__BackingField;
    struct IValueProvider* _ValueProvider_k__BackingField;
    struct IAttributeProvider* _AttributeProvider_k__BackingField;
    struct JsonConverter* _Converter_k__BackingField;
    bool _Ignored_k__BackingField;
    bool _Readable_k__BackingField;
    bool _Writable_k__BackingField;
    bool _HasMemberAttribute_k__BackingField;
    struct Nullable_1_Boolean_ _IsReference_k__BackingField;
    struct Nullable_1_Newtonsoft_Json_NullValueHandling_ _NullValueHandling_k__BackingField;
    struct Nullable_1_Newtonsoft_Json_DefaultValueHandling_ _DefaultValueHandling_k__BackingField;
    struct Nullable_1_Newtonsoft_Json_ReferenceLoopHandling_ _ReferenceLoopHandling_k__BackingField;
    struct Nullable_1_Newtonsoft_Json_ObjectCreationHandling_ _ObjectCreationHandling_k__BackingField;
    struct Nullable_1_Newtonsoft_Json_TypeNameHandling_ _TypeNameHandling_k__BackingField;
    struct Predicate_1_Object_* _ShouldSerialize_k__BackingField;
    struct Predicate_1_Object_* _ShouldDeserialize_k__BackingField;
    struct Predicate_1_Object_* _GetIsSpecified_k__BackingField;
    struct Action_2_Object_Object_* _SetIsSpecified_k__BackingField;
    struct JsonConverter* _ItemConverter_k__BackingField;
    struct Nullable_1_Boolean_ _ItemIsReference_k__BackingField;
    struct Nullable_1_Newtonsoft_Json_TypeNameHandling_ _ItemTypeNameHandling_k__BackingField;
    struct Nullable_1_Newtonsoft_Json_ReferenceLoopHandling_ _ItemReferenceLoopHandling_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JsonProperty__Fields_FWDDECL)
#define IL2CPP_STRUCT_JsonProperty__Fields_FWDDECL
#include <Modloader/app/structs/Action_2_Object_Object_.h>
#include <Modloader/app/structs/IAttributeProvider.h>
#include <Modloader/app/structs/IValueProvider.h>
#include <Modloader/app/structs/JsonContract.h>
#include <Modloader/app/structs/JsonConverter.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Predicate_1_Object_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#endif
#undef IL2CPP_STRUCT_JsonProperty__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonProperty__Fields_DEFINED) && !defined(IL2CPP_STRUCT_JsonProperty__Fields_FWDDECL)
#include <Modloader/app/structs/JsonProperty__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonProperty__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
