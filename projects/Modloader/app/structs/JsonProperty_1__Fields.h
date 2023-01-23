#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonProperty_1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonProperty_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonProperty_1__Fields_DEFINED)
#include <Modloader/app/structs/NullValueHandling__Enum_1.h>
#if defined(IL2CPP_STRUCT_NullValueHandling__Enum_1_DEFINED)
#define IL2CPP_STRUCT_JsonProperty_1__Fields_DEFINED
struct String;
struct __declspec(align(8)) JsonProperty_1__Fields {
    struct String* PropertyName;
    NullValueHandling__Enum_1 NullValueHandling;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JsonProperty_1__Fields_FWDDECL)
#define IL2CPP_STRUCT_JsonProperty_1__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_JsonProperty_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonProperty_1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_JsonProperty_1__Fields_FWDDECL)
#include <Modloader/app/structs/JsonProperty_1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonProperty_1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
