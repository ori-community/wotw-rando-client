#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WebRequestPrefixElement__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WebRequestPrefixElement__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebRequestPrefixElement__Fields_DEFINED)
#define IL2CPP_STRUCT_WebRequestPrefixElement__Fields_DEFINED
struct String;
struct IWebRequestCreate;
struct Type;
struct __declspec(align(8)) WebRequestPrefixElement__Fields {
    struct String* Prefix;
    struct IWebRequestCreate* creator;
    struct Type* creatorType;
};
#endif
#if !defined(IL2CPP_STRUCT_WebRequestPrefixElement__Fields_FWDDECL)
#define IL2CPP_STRUCT_WebRequestPrefixElement__Fields_FWDDECL
#include <Modloader/app/structs/IWebRequestCreate.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#endif
#undef IL2CPP_STRUCT_WebRequestPrefixElement__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebRequestPrefixElement__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WebRequestPrefixElement__Fields_FWDDECL)
#include <Modloader/app/structs/WebRequestPrefixElement__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WebRequestPrefixElement__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
