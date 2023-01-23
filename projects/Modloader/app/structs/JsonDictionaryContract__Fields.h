#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonDictionaryContract__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonDictionaryContract__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonDictionaryContract__Fields_DEFINED)
#include <Modloader/app/structs/JsonContainerContract__Fields.h>
#if defined(IL2CPP_STRUCT_JsonContainerContract__Fields_DEFINED)
#define IL2CPP_STRUCT_JsonDictionaryContract__Fields_DEFINED
struct Func_2_String_String_;
struct Type;
struct JsonContract;
struct ObjectConstructor_1_System_Object_;
struct Func_1_Object_;
struct ConstructorInfo;
struct JsonDictionaryContract__Fields {
    struct JsonContainerContract__Fields _;
    struct Func_2_String_String_* _DictionaryKeyResolver_k__BackingField;
    struct Type* _DictionaryKeyType_k__BackingField;
    struct Type* _DictionaryValueType_k__BackingField;
    struct JsonContract* _KeyContract_k__BackingField;
    struct Type* _genericCollectionDefinitionType;
    struct Type* _genericWrapperType;
    struct ObjectConstructor_1_System_Object_* _genericWrapperCreator;
    struct Func_1_Object_* _genericTemporaryDictionaryCreator;
    bool _ShouldCreateWrapper_k__BackingField;
    struct ConstructorInfo* _parameterizedConstructor;
    struct ObjectConstructor_1_System_Object_* _overrideCreator;
    struct ObjectConstructor_1_System_Object_* _parameterizedCreator;
    bool _HasParameterizedCreator_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JsonDictionaryContract__Fields_FWDDECL)
#define IL2CPP_STRUCT_JsonDictionaryContract__Fields_FWDDECL
#include <Modloader/app/structs/ConstructorInfo.h>
#include <Modloader/app/structs/Func_1_Object_.h>
#include <Modloader/app/structs/Func_2_String_String_.h>
#include <Modloader/app/structs/JsonContract.h>
#include <Modloader/app/structs/ObjectConstructor_1_System_Object_.h>
#include <Modloader/app/structs/Type.h>
#endif
#undef IL2CPP_STRUCT_JsonDictionaryContract__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonDictionaryContract__Fields_DEFINED) && !defined(IL2CPP_STRUCT_JsonDictionaryContract__Fields_FWDDECL)
#include <Modloader/app/structs/JsonDictionaryContract__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonDictionaryContract__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
