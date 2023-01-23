#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RegisterPlayFabUserRequest__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RegisterPlayFabUserRequest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegisterPlayFabUserRequest__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_Boolean_.h>
#include <Modloader/app/structs/PlayFabRequestCommon__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabRequestCommon__Fields_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Boolean__DEFINED)
#define IL2CPP_STRUCT_RegisterPlayFabUserRequest__Fields_DEFINED
struct String;
struct GetPlayerCombinedInfoRequestParams;
struct RegisterPlayFabUserRequest__Fields {
    struct PlayFabRequestCommon__Fields _;
    struct String* DisplayName;
    struct String* Email;
    struct String* EncryptedRequest;
    struct GetPlayerCombinedInfoRequestParams* InfoRequestParameters;
    struct String* Password;
    struct String* PlayerSecret;
    struct Nullable_1_Boolean_ RequireBothUsernameAndEmail;
    struct String* TitleId;
    struct String* Username;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RegisterPlayFabUserRequest__Fields_FWDDECL)
#define IL2CPP_STRUCT_RegisterPlayFabUserRequest__Fields_FWDDECL
#include <Modloader/app/structs/GetPlayerCombinedInfoRequestParams.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_RegisterPlayFabUserRequest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegisterPlayFabUserRequest__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RegisterPlayFabUserRequest__Fields_FWDDECL)
#include <Modloader/app/structs/RegisterPlayFabUserRequest__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RegisterPlayFabUserRequest__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
