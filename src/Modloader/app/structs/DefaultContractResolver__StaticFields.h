#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DefaultContractResolver__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DefaultContractResolver__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DefaultContractResolver__StaticFields_DEFINED)
#define IL2CPP_STRUCT_DefaultContractResolver__StaticFields_DEFINED
struct IContractResolver;
struct String__Array;
struct JsonConverter__Array;
struct DefaultContractResolver__StaticFields {
    struct IContractResolver* _instance;
    struct String__Array* BlacklistedTypeNames;
    struct JsonConverter__Array* BuiltInConverters;
};
#endif
#if !defined(IL2CPP_STRUCT_DefaultContractResolver__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_DefaultContractResolver__StaticFields_FWDDECL
#include <Modloader/app/structs/IContractResolver.h>
#include <Modloader/app/structs/JsonConverter__Array.h>
#include <Modloader/app/structs/String__Array.h>
#endif
#undef IL2CPP_STRUCT_DefaultContractResolver__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DefaultContractResolver__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_DefaultContractResolver__StaticFields_FWDDECL)
#include <Modloader/app/structs/DefaultContractResolver__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DefaultContractResolver__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
