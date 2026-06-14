#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LoginResult__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LoginResult__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoginResult__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_DateTime_.h>
#include <Modloader/app/structs/PlayFabLoginResultCommon__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabLoginResultCommon__Fields_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_DateTime__DEFINED)
#define IL2CPP_STRUCT_LoginResult__Fields_DEFINED
struct EntityTokenResponse;
struct GetPlayerCombinedInfoResultPayload;
struct String;
struct UserSettings;
struct LoginResult__Fields {
    struct PlayFabLoginResultCommon__Fields _;
    struct EntityTokenResponse* EntityToken;
    struct GetPlayerCombinedInfoResultPayload* InfoResultPayload;
    struct Nullable_1_DateTime_ LastLoginTime;
    bool NewlyCreated;
    struct String* PlayFabId;
    struct String* SessionTicket;
    struct UserSettings* SettingsForUser;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LoginResult__Fields_FWDDECL)
#define IL2CPP_STRUCT_LoginResult__Fields_FWDDECL
#include <Modloader/app/structs/EntityTokenResponse.h>
#include <Modloader/app/structs/GetPlayerCombinedInfoResultPayload.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UserSettings.h>
#endif
#undef IL2CPP_STRUCT_LoginResult__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoginResult__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LoginResult__Fields_FWDDECL)
#include <Modloader/app/structs/LoginResult__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LoginResult__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
