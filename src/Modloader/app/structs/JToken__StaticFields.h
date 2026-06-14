#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JToken__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JToken__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JToken__StaticFields_DEFINED)
#define IL2CPP_STRUCT_JToken__StaticFields_DEFINED
struct JTokenType__Enum__Array;
struct JToken__StaticFields {
    struct JTokenType__Enum__Array* BooleanTypes;
    struct JTokenType__Enum__Array* NumberTypes;
    struct JTokenType__Enum__Array* BigIntegerTypes;
    struct JTokenType__Enum__Array* StringTypes;
    struct JTokenType__Enum__Array* GuidTypes;
    struct JTokenType__Enum__Array* TimeSpanTypes;
    struct JTokenType__Enum__Array* UriTypes;
    struct JTokenType__Enum__Array* CharTypes;
    struct JTokenType__Enum__Array* DateTimeTypes;
    struct JTokenType__Enum__Array* BytesTypes;
};
#endif
#if !defined(IL2CPP_STRUCT_JToken__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_JToken__StaticFields_FWDDECL
#include <Modloader/app/structs/JTokenType__Enum__Array.h>
#endif
#undef IL2CPP_STRUCT_JToken__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JToken__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_JToken__StaticFields_FWDDECL)
#include <Modloader/app/structs/JToken__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JToken__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
