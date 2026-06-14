#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonSerializerInternalReader_CreatorPropertyContext__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonSerializerInternalReader_CreatorPropertyContext__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonSerializerInternalReader_CreatorPropertyContext__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence_.h>
#if defined(IL2CPP_STRUCT_Nullable_1_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence__DEFINED)
#define IL2CPP_STRUCT_JsonSerializerInternalReader_CreatorPropertyContext__Fields_DEFINED
struct String;
struct JsonProperty;
struct Object;
struct __declspec(align(8)) JsonSerializerInternalReader_CreatorPropertyContext__Fields {
    struct String* Name;
    struct JsonProperty* Property;
    struct JsonProperty* ConstructorProperty;
    struct Nullable_1_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence_ Presence;
    struct Object* Value;
    bool Used;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JsonSerializerInternalReader_CreatorPropertyContext__Fields_FWDDECL)
#define IL2CPP_STRUCT_JsonSerializerInternalReader_CreatorPropertyContext__Fields_FWDDECL
#include <Modloader/app/structs/JsonProperty.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_JsonSerializerInternalReader_CreatorPropertyContext__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonSerializerInternalReader_CreatorPropertyContext__Fields_DEFINED) && !defined(IL2CPP_STRUCT_JsonSerializerInternalReader_CreatorPropertyContext__Fields_FWDDECL)
#include <Modloader/app/structs/JsonSerializerInternalReader_CreatorPropertyContext__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonSerializerInternalReader_CreatorPropertyContext__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
