#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetPlayerProfileResult_1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetPlayerProfileResult_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetPlayerProfileResult_1__Fields_DEFINED)
#include <Modloader/app/structs/PlayFabResultCommon__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabResultCommon__Fields_DEFINED)
#define IL2CPP_STRUCT_GetPlayerProfileResult_1__Fields_DEFINED
struct PlayerProfileModel_1;
struct GetPlayerProfileResult_1__Fields {
    struct PlayFabResultCommon__Fields _;
    struct PlayerProfileModel_1* PlayerProfile;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetPlayerProfileResult_1__Fields_FWDDECL)
#define IL2CPP_STRUCT_GetPlayerProfileResult_1__Fields_FWDDECL
#include <Modloader/app/structs/PlayerProfileModel_1.h>
#endif
#undef IL2CPP_STRUCT_GetPlayerProfileResult_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetPlayerProfileResult_1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GetPlayerProfileResult_1__Fields_FWDDECL)
#include <Modloader/app/structs/GetPlayerProfileResult_1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetPlayerProfileResult_1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
