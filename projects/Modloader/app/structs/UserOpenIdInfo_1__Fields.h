#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UserOpenIdInfo_1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UserOpenIdInfo_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UserOpenIdInfo_1__Fields_DEFINED)
#define IL2CPP_STRUCT_UserOpenIdInfo_1__Fields_DEFINED
struct String;
struct __declspec(align(8)) UserOpenIdInfo_1__Fields {
    struct String* ConnectionId;
    struct String* Issuer;
    struct String* Subject;
};
#endif
#if !defined(IL2CPP_STRUCT_UserOpenIdInfo_1__Fields_FWDDECL)
#define IL2CPP_STRUCT_UserOpenIdInfo_1__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_UserOpenIdInfo_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UserOpenIdInfo_1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UserOpenIdInfo_1__Fields_FWDDECL)
#include <Modloader/app/structs/UserOpenIdInfo_1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UserOpenIdInfo_1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
