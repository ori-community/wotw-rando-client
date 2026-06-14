#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RegisterPlayFabUserResult__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RegisterPlayFabUserResult__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegisterPlayFabUserResult__Fields_DEFINED)
#include <Modloader/app/structs/PlayFabLoginResultCommon__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabLoginResultCommon__Fields_DEFINED)
#define IL2CPP_STRUCT_RegisterPlayFabUserResult__Fields_DEFINED
struct EntityTokenResponse;
struct String;
struct UserSettings;
struct RegisterPlayFabUserResult__Fields {
    struct PlayFabLoginResultCommon__Fields _;
    struct EntityTokenResponse* EntityToken;
    struct String* PlayFabId;
    struct String* SessionTicket;
    struct UserSettings* SettingsForUser;
    struct String* Username;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RegisterPlayFabUserResult__Fields_FWDDECL)
#define IL2CPP_STRUCT_RegisterPlayFabUserResult__Fields_FWDDECL
#include <Modloader/app/structs/EntityTokenResponse.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UserSettings.h>
#endif
#undef IL2CPP_STRUCT_RegisterPlayFabUserResult__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegisterPlayFabUserResult__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RegisterPlayFabUserResult__Fields_FWDDECL)
#include <Modloader/app/structs/RegisterPlayFabUserResult__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RegisterPlayFabUserResult__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
