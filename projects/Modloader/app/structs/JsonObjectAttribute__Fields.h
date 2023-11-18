#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonObjectAttribute__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonObjectAttribute__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonObjectAttribute__Fields_DEFINED)
#include <Modloader/app/structs/JsonContainerAttribute__Fields.h>
#include <Modloader/app/structs/MemberSerialization__Enum.h>
#include <Modloader/app/structs/Nullable_1_Newtonsoft_Json_NullValueHandling_.h>
#include <Modloader/app/structs/Nullable_1_Newtonsoft_Json_Required_.h>
#if defined(IL2CPP_STRUCT_JsonContainerAttribute__Fields_DEFINED) && defined(IL2CPP_STRUCT_MemberSerialization__Enum_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Newtonsoft_Json_Required__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Newtonsoft_Json_NullValueHandling__DEFINED)
#define IL2CPP_STRUCT_JsonObjectAttribute__Fields_DEFINED
struct JsonObjectAttribute__Fields {
    struct JsonContainerAttribute__Fields _;
    MemberSerialization__Enum _memberSerialization;

    struct Nullable_1_Newtonsoft_Json_Required_ _itemRequired;
    struct Nullable_1_Newtonsoft_Json_NullValueHandling_ _itemNullValueHandling;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JsonObjectAttribute__Fields_FWDDECL)
#define IL2CPP_STRUCT_JsonObjectAttribute__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_JsonObjectAttribute__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonObjectAttribute__Fields_DEFINED) && !defined(IL2CPP_STRUCT_JsonObjectAttribute__Fields_FWDDECL)
#include <Modloader/app/structs/JsonObjectAttribute__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonObjectAttribute__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
