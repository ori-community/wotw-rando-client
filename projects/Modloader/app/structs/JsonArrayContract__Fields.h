#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonArrayContract__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonArrayContract__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonArrayContract__Fields_DEFINED)
#include <Modloader/app/structs/JsonContainerContract__Fields.h>
#if defined(IL2CPP_STRUCT_JsonContainerContract__Fields_DEFINED)
#define IL2CPP_STRUCT_JsonArrayContract__Fields_DEFINED
struct Type;
struct ObjectConstructor_1_System_Object_;
struct Func_1_Object_;
struct ConstructorInfo;
struct JsonArrayContract__Fields {
    struct JsonContainerContract__Fields _;
    struct Type* _CollectionItemType_k__BackingField;
    bool _IsMultidimensionalArray_k__BackingField;
    struct Type* _genericCollectionDefinitionType;
    struct Type* _genericWrapperType;
    struct ObjectConstructor_1_System_Object_* _genericWrapperCreator;
    struct Func_1_Object_* _genericTemporaryCollectionCreator;
    bool _IsArray_k__BackingField;
    bool _ShouldCreateWrapper_k__BackingField;
    bool _CanDeserialize_k__BackingField;
    struct ConstructorInfo* _parameterizedConstructor;
    struct ObjectConstructor_1_System_Object_* _parameterizedCreator;
    struct ObjectConstructor_1_System_Object_* _overrideCreator;
    bool _HasParameterizedCreator_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JsonArrayContract__Fields_FWDDECL)
#define IL2CPP_STRUCT_JsonArrayContract__Fields_FWDDECL
#include <Modloader/app/structs/ConstructorInfo.h>
#include <Modloader/app/structs/Func_1_Object_.h>
#include <Modloader/app/structs/ObjectConstructor_1_System_Object_.h>
#include <Modloader/app/structs/Type.h>
#endif
#undef IL2CPP_STRUCT_JsonArrayContract__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonArrayContract__Fields_DEFINED) && !defined(IL2CPP_STRUCT_JsonArrayContract__Fields_FWDDECL)
#include <Modloader/app/structs/JsonArrayContract__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonArrayContract__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
