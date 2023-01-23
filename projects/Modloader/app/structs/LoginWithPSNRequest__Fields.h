#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LoginWithPSNRequest__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LoginWithPSNRequest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoginWithPSNRequest__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_Boolean_.h>
#include <Modloader/app/structs/Nullable_1_Int32_.h>
#include <Modloader/app/structs/PlayFabRequestCommon__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabRequestCommon__Fields_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Boolean__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Int32__DEFINED)
#define IL2CPP_STRUCT_LoginWithPSNRequest__Fields_DEFINED
struct String;
struct GetPlayerCombinedInfoRequestParams;
struct LoginWithPSNRequest__Fields {
    struct PlayFabRequestCommon__Fields _;
    struct String* AuthCode;
    struct Nullable_1_Boolean_ CreateAccount;
    struct String* EncryptedRequest;
    struct GetPlayerCombinedInfoRequestParams* InfoRequestParameters;
    struct Nullable_1_Int32_ IssuerId;
    struct String* PlayerSecret;
    struct String* RedirectUri;
    struct String* TitleId;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LoginWithPSNRequest__Fields_FWDDECL)
#define IL2CPP_STRUCT_LoginWithPSNRequest__Fields_FWDDECL
#include <Modloader/app/structs/GetPlayerCombinedInfoRequestParams.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_LoginWithPSNRequest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoginWithPSNRequest__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LoginWithPSNRequest__Fields_FWDDECL)
#include <Modloader/app/structs/LoginWithPSNRequest__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LoginWithPSNRequest__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
