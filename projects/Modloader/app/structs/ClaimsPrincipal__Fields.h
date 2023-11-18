#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ClaimsPrincipal__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ClaimsPrincipal__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClaimsPrincipal__Fields_DEFINED)
#define IL2CPP_STRUCT_ClaimsPrincipal__Fields_DEFINED
struct String;
struct List_1_System_Security_Claims_ClaimsIdentity_;
struct __declspec(align(8)) ClaimsPrincipal__Fields {
    struct String* m_version;
    struct String* m_serializedClaimsIdentities;
    struct List_1_System_Security_Claims_ClaimsIdentity_* m_identities;
};
#endif
#if !defined(IL2CPP_STRUCT_ClaimsPrincipal__Fields_FWDDECL)
#define IL2CPP_STRUCT_ClaimsPrincipal__Fields_FWDDECL
#include <Modloader/app/structs/List_1_System_Security_Claims_ClaimsIdentity_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_ClaimsPrincipal__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClaimsPrincipal__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ClaimsPrincipal__Fields_FWDDECL)
#include <Modloader/app/structs/ClaimsPrincipal__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ClaimsPrincipal__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
