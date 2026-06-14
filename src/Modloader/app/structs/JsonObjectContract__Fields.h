#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonObjectContract__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonObjectContract__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonObjectContract__Fields_DEFINED)
#include <Modloader/app/structs/JsonContainerContract__Fields.h>
#include <Modloader/app/structs/MemberSerialization__Enum.h>
#include <Modloader/app/structs/Nullable_1_Boolean_.h>
#include <Modloader/app/structs/Nullable_1_Newtonsoft_Json_NullValueHandling_.h>
#include <Modloader/app/structs/Nullable_1_Newtonsoft_Json_Required_.h>
#if defined(IL2CPP_STRUCT_JsonContainerContract__Fields_DEFINED) && defined(IL2CPP_STRUCT_MemberSerialization__Enum_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Newtonsoft_Json_Required__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Newtonsoft_Json_NullValueHandling__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Boolean__DEFINED)
#define IL2CPP_STRUCT_JsonObjectContract__Fields_DEFINED
struct JsonPropertyCollection;
struct ExtensionDataSetter;
struct ExtensionDataGetter;
struct Func_2_String_String_;
struct ObjectConstructor_1_System_Object_;
struct Type;
struct JsonObjectContract__Fields {
    struct JsonContainerContract__Fields _;
    MemberSerialization__Enum _MemberSerialization_k__BackingField;

    struct Nullable_1_Newtonsoft_Json_Required_ _ItemRequired_k__BackingField;
    struct Nullable_1_Newtonsoft_Json_NullValueHandling_ _ItemNullValueHandling_k__BackingField;
    struct JsonPropertyCollection* _Properties_k__BackingField;
    struct ExtensionDataSetter* _ExtensionDataSetter_k__BackingField;
    struct ExtensionDataGetter* _ExtensionDataGetter_k__BackingField;
    struct Func_2_String_String_* _ExtensionDataNameResolver_k__BackingField;
    bool ExtensionDataIsJToken;
    struct Nullable_1_Boolean_ _hasRequiredOrDefaultValueProperties;
    struct ObjectConstructor_1_System_Object_* _overrideCreator;
    struct ObjectConstructor_1_System_Object_* _parameterizedCreator;
    struct JsonPropertyCollection* _creatorParameters;
    struct Type* _extensionDataValueType;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JsonObjectContract__Fields_FWDDECL)
#define IL2CPP_STRUCT_JsonObjectContract__Fields_FWDDECL
#include <Modloader/app/structs/ExtensionDataGetter.h>
#include <Modloader/app/structs/ExtensionDataSetter.h>
#include <Modloader/app/structs/Func_2_String_String_.h>
#include <Modloader/app/structs/JsonPropertyCollection.h>
#include <Modloader/app/structs/ObjectConstructor_1_System_Object_.h>
#include <Modloader/app/structs/Type.h>
#endif
#undef IL2CPP_STRUCT_JsonObjectContract__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonObjectContract__Fields_DEFINED) && !defined(IL2CPP_STRUCT_JsonObjectContract__Fields_FWDDECL)
#include <Modloader/app/structs/JsonObjectContract__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonObjectContract__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
