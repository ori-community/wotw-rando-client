#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JValue__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JValue__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JValue__Fields_DEFINED)
#include <Modloader/app/structs/JTokenType__Enum.h>
#include <Modloader/app/structs/JToken__Fields.h>
#if defined(IL2CPP_STRUCT_JToken__Fields_DEFINED) && defined(IL2CPP_STRUCT_JTokenType__Enum_DEFINED)
#define IL2CPP_STRUCT_JValue__Fields_DEFINED
struct Object;
struct JValue__Fields {
    struct JToken__Fields _;
    JTokenType__Enum _valueType;

    struct Object* _value;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JValue__Fields_FWDDECL)
#define IL2CPP_STRUCT_JValue__Fields_FWDDECL
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_JValue__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JValue__Fields_DEFINED) && !defined(IL2CPP_STRUCT_JValue__Fields_FWDDECL)
#include <Modloader/app/structs/JValue__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JValue__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
