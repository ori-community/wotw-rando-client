#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GenericPrincipal__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GenericPrincipal__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GenericPrincipal__Fields_DEFINED)
#include <Modloader/app/structs/ClaimsPrincipal__Fields.h>
#if defined(IL2CPP_STRUCT_ClaimsPrincipal__Fields_DEFINED)
#define IL2CPP_STRUCT_GenericPrincipal__Fields_DEFINED
struct IIdentity;
struct String__Array;
struct GenericPrincipal__Fields {
    struct ClaimsPrincipal__Fields _;
    struct IIdentity* m_identity;
    struct String__Array* m_roles;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GenericPrincipal__Fields_FWDDECL)
#define IL2CPP_STRUCT_GenericPrincipal__Fields_FWDDECL
#include <Modloader/app/structs/IIdentity.h>
#include <Modloader/app/structs/String__Array.h>
#endif
#undef IL2CPP_STRUCT_GenericPrincipal__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GenericPrincipal__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GenericPrincipal__Fields_FWDDECL)
#include <Modloader/app/structs/GenericPrincipal__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GenericPrincipal__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
