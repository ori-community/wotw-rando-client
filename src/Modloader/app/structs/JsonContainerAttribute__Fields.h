#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonContainerAttribute__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonContainerAttribute__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonContainerAttribute__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_Boolean_.h>
#include <Modloader/app/structs/Nullable_1_Newtonsoft_Json_ReferenceLoopHandling_.h>
#include <Modloader/app/structs/Nullable_1_Newtonsoft_Json_TypeNameHandling_.h>
#if defined(IL2CPP_STRUCT_Nullable_1_Boolean__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Newtonsoft_Json_ReferenceLoopHandling__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Newtonsoft_Json_TypeNameHandling__DEFINED)
#define IL2CPP_STRUCT_JsonContainerAttribute__Fields_DEFINED
struct Type;
struct Object__Array;
struct NamingStrategy;
struct __declspec(align(8)) JsonContainerAttribute__Fields {
    struct Type* _ItemConverterType_k__BackingField;
    struct Object__Array* _ItemConverterParameters_k__BackingField;
    struct NamingStrategy* _NamingStrategyInstance_k__BackingField;
    struct Nullable_1_Boolean_ _isReference;
    struct Nullable_1_Boolean_ _itemIsReference;
    struct Nullable_1_Newtonsoft_Json_ReferenceLoopHandling_ _itemReferenceLoopHandling;
    struct Nullable_1_Newtonsoft_Json_TypeNameHandling_ _itemTypeNameHandling;
    struct Type* _namingStrategyType;
    struct Object__Array* _namingStrategyParameters;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JsonContainerAttribute__Fields_FWDDECL)
#define IL2CPP_STRUCT_JsonContainerAttribute__Fields_FWDDECL
#include <Modloader/app/structs/NamingStrategy.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/Type.h>
#endif
#undef IL2CPP_STRUCT_JsonContainerAttribute__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonContainerAttribute__Fields_DEFINED) && !defined(IL2CPP_STRUCT_JsonContainerAttribute__Fields_FWDDECL)
#include <Modloader/app/structs/JsonContainerAttribute__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonContainerAttribute__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
