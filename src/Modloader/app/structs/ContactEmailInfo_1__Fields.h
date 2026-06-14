#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ContactEmailInfo_1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ContactEmailInfo_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ContactEmailInfo_1__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_PlayFab_PlayStreamModels_EmailVerificationStatus_.h>
#if defined(IL2CPP_STRUCT_Nullable_1_PlayFab_PlayStreamModels_EmailVerificationStatus__DEFINED)
#define IL2CPP_STRUCT_ContactEmailInfo_1__Fields_DEFINED
struct String;
struct __declspec(align(8)) ContactEmailInfo_1__Fields {
    struct String* EmailAddress;
    struct String* Name;
    struct Nullable_1_PlayFab_PlayStreamModels_EmailVerificationStatus_ VerificationStatus;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ContactEmailInfo_1__Fields_FWDDECL)
#define IL2CPP_STRUCT_ContactEmailInfo_1__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_ContactEmailInfo_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ContactEmailInfo_1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ContactEmailInfo_1__Fields_FWDDECL)
#include <Modloader/app/structs/ContactEmailInfo_1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ContactEmailInfo_1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
