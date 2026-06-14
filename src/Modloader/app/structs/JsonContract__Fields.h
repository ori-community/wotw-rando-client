#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonContract__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonContract__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonContract__Fields_DEFINED)
#include <Modloader/app/structs/JsonContractType__Enum.h>
#include <Modloader/app/structs/Nullable_1_Boolean_.h>
#include <Modloader/app/structs/ReadType__Enum.h>
#if defined(IL2CPP_STRUCT_ReadType__Enum_DEFINED) && defined(IL2CPP_STRUCT_JsonContractType__Enum_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Boolean__DEFINED)
#define IL2CPP_STRUCT_JsonContract__Fields_DEFINED
struct Type;
struct List_1_Newtonsoft_Json_Serialization_SerializationCallback_;
struct IList_1_Newtonsoft_Json_Serialization_SerializationCallback_;
struct IList_1_Newtonsoft_Json_Serialization_SerializationErrorCallback_;
struct JsonConverter;
struct Func_1_Object_;
struct __declspec(align(8)) JsonContract__Fields {
    bool IsNullable;
    bool IsConvertable;
    bool IsEnum;
    struct Type* NonNullableUnderlyingType;
    ReadType__Enum InternalReadType;

    JsonContractType__Enum ContractType;

    bool IsReadOnlyOrFixedSize;
    bool IsSealed;
    bool IsInstantiable;
    struct List_1_Newtonsoft_Json_Serialization_SerializationCallback_* _onDeserializedCallbacks;
    struct IList_1_Newtonsoft_Json_Serialization_SerializationCallback_* _onDeserializingCallbacks;
    struct IList_1_Newtonsoft_Json_Serialization_SerializationCallback_* _onSerializedCallbacks;
    struct IList_1_Newtonsoft_Json_Serialization_SerializationCallback_* _onSerializingCallbacks;
    struct IList_1_Newtonsoft_Json_Serialization_SerializationErrorCallback_* _onErrorCallbacks;
    struct Type* _createdType;
    struct Type* _UnderlyingType_k__BackingField;
    struct Nullable_1_Boolean_ _IsReference_k__BackingField;
    struct JsonConverter* _Converter_k__BackingField;
    struct JsonConverter* _InternalConverter_k__BackingField;
    struct Func_1_Object_* _DefaultCreator_k__BackingField;
    bool _DefaultCreatorNonPublic_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JsonContract__Fields_FWDDECL)
#define IL2CPP_STRUCT_JsonContract__Fields_FWDDECL
#include <Modloader/app/structs/Func_1_Object_.h>
#include <Modloader/app/structs/IList_1_Newtonsoft_Json_Serialization_SerializationCallback_.h>
#include <Modloader/app/structs/IList_1_Newtonsoft_Json_Serialization_SerializationErrorCallback_.h>
#include <Modloader/app/structs/JsonConverter.h>
#include <Modloader/app/structs/List_1_Newtonsoft_Json_Serialization_SerializationCallback_.h>
#include <Modloader/app/structs/Type.h>
#endif
#undef IL2CPP_STRUCT_JsonContract__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonContract__Fields_DEFINED) && !defined(IL2CPP_STRUCT_JsonContract__Fields_FWDDECL)
#include <Modloader/app/structs/JsonContract__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonContract__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
