#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonContainerContract__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonContainerContract__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonContainerContract__Fields_DEFINED)
#include <Modloader/app/structs/JsonContract__Fields.h>
#include <Modloader/app/structs/Nullable_1_Boolean_.h>
#include <Modloader/app/structs/Nullable_1_Newtonsoft_Json_ReferenceLoopHandling_.h>
#include <Modloader/app/structs/Nullable_1_Newtonsoft_Json_TypeNameHandling_.h>
#if defined(IL2CPP_STRUCT_JsonContract__Fields_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Boolean__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Newtonsoft_Json_ReferenceLoopHandling__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Newtonsoft_Json_TypeNameHandling__DEFINED)
#define IL2CPP_STRUCT_JsonContainerContract__Fields_DEFINED
struct JsonContract;
struct JsonConverter;
struct JsonContainerContract__Fields {
    struct JsonContract__Fields _;
    struct JsonContract* _itemContract;
    struct JsonContract* _finalItemContract;
    struct JsonConverter* _ItemConverter_k__BackingField;
    struct Nullable_1_Boolean_ _ItemIsReference_k__BackingField;
    struct Nullable_1_Newtonsoft_Json_ReferenceLoopHandling_ _ItemReferenceLoopHandling_k__BackingField;
    struct Nullable_1_Newtonsoft_Json_TypeNameHandling_ _ItemTypeNameHandling_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JsonContainerContract__Fields_FWDDECL)
#define IL2CPP_STRUCT_JsonContainerContract__Fields_FWDDECL
#include <Modloader/app/structs/JsonContract.h>
#include <Modloader/app/structs/JsonConverter.h>
#endif
#undef IL2CPP_STRUCT_JsonContainerContract__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonContainerContract__Fields_DEFINED) && !defined(IL2CPP_STRUCT_JsonContainerContract__Fields_FWDDECL)
#include <Modloader/app/structs/JsonContainerContract__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonContainerContract__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
