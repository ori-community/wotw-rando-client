#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetPlayerProfileRequest__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetPlayerProfileRequest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetPlayerProfileRequest__Fields_DEFINED)
#include <Modloader/app/structs/PlayFabRequestCommon__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabRequestCommon__Fields_DEFINED)
#define IL2CPP_STRUCT_GetPlayerProfileRequest__Fields_DEFINED
struct String;
struct PlayerProfileViewConstraints;
struct GetPlayerProfileRequest__Fields {
    struct PlayFabRequestCommon__Fields _;
    struct String* PlayFabId;
    struct PlayerProfileViewConstraints* ProfileConstraints;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetPlayerProfileRequest__Fields_FWDDECL)
#define IL2CPP_STRUCT_GetPlayerProfileRequest__Fields_FWDDECL
#include <Modloader/app/structs/PlayerProfileViewConstraints.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_GetPlayerProfileRequest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetPlayerProfileRequest__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GetPlayerProfileRequest__Fields_FWDDECL)
#include <Modloader/app/structs/GetPlayerProfileRequest__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetPlayerProfileRequest__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
