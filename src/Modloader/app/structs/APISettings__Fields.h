#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_APISettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_APISettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_APISettings__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_Int32_.h>
#if defined(IL2CPP_STRUCT_Nullable_1_Int32__DEFINED)
#define IL2CPP_STRUCT_APISettings__Fields_DEFINED
struct String;
struct __declspec(align(8)) APISettings__Fields {
    bool AllowClientToAddVirtualCurrency;
    bool AllowClientToPostPlayerStatistics;
    bool AllowClientToStartGames;
    bool AllowClientToSubtractVirtualCurrency;
    bool AllowNonUniquePlayerDisplayNames;
    bool AllowServerToDeleteUsers;
    struct String* DefaultLanguage;
    bool DisableAPIAccess;
    struct Nullable_1_Int32_ DisplayNameRandomSuffixLength;
    bool EnableClientIPAddressObfuscation;
    bool RequireCustomDataJSONFormat;
    bool UseExternalGameServerProvider;
    bool UseSandboxPayments;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_APISettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_APISettings__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_APISettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_APISettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_APISettings__Fields_FWDDECL)
#include <Modloader/app/structs/APISettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/APISettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
