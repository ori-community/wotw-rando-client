#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JProperty_JPropertyList__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JProperty_JPropertyList__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JProperty_JPropertyList__Fields_DEFINED)
#define IL2CPP_STRUCT_JProperty_JPropertyList__Fields_DEFINED
struct JToken;
struct __declspec(align(8)) JProperty_JPropertyList__Fields {
    struct JToken* _token;
};
#endif
#if !defined(IL2CPP_STRUCT_JProperty_JPropertyList__Fields_FWDDECL)
#define IL2CPP_STRUCT_JProperty_JPropertyList__Fields_FWDDECL
#include <Modloader/app/structs/JToken.h>
#endif
#undef IL2CPP_STRUCT_JProperty_JPropertyList__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JProperty_JPropertyList__Fields_DEFINED) && !defined(IL2CPP_STRUCT_JProperty_JPropertyList__Fields_FWDDECL)
#include <Modloader/app/structs/JProperty_JPropertyList__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JProperty_JPropertyList__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
