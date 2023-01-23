#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ServerLoginResult__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ServerLoginResult__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerLoginResult__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_DateTime_.h>
#include <Modloader/app/structs/PlayFabResultCommon__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabResultCommon__Fields_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_DateTime__DEFINED)
#define IL2CPP_STRUCT_ServerLoginResult__Fields_DEFINED
struct EntityTokenResponse_1;
struct GetPlayerCombinedInfoResultPayload_1;
struct String;
struct UserSettings_1;
struct ServerLoginResult__Fields {
    struct PlayFabResultCommon__Fields _;
    struct EntityTokenResponse_1* EntityToken;
    struct GetPlayerCombinedInfoResultPayload_1* InfoResultPayload;
    struct Nullable_1_DateTime_ LastLoginTime;
    bool NewlyCreated;
    struct String* PlayFabId;
    struct String* SessionTicket;
    struct UserSettings_1* SettingsForUser;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ServerLoginResult__Fields_FWDDECL)
#define IL2CPP_STRUCT_ServerLoginResult__Fields_FWDDECL
#include <Modloader/app/structs/EntityTokenResponse_1.h>
#include <Modloader/app/structs/GetPlayerCombinedInfoResultPayload_1.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UserSettings_1.h>
#endif
#undef IL2CPP_STRUCT_ServerLoginResult__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerLoginResult__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ServerLoginResult__Fields_FWDDECL)
#include <Modloader/app/structs/ServerLoginResult__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ServerLoginResult__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
