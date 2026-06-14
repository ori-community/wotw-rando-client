#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetPlayerTradesRequest__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetPlayerTradesRequest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetPlayerTradesRequest__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_PlayFab_ClientModels_TradeStatus_.h>
#include <Modloader/app/structs/PlayFabRequestCommon__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabRequestCommon__Fields_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_PlayFab_ClientModels_TradeStatus__DEFINED)
#define IL2CPP_STRUCT_GetPlayerTradesRequest__Fields_DEFINED
struct GetPlayerTradesRequest__Fields {
    struct PlayFabRequestCommon__Fields _;
    struct Nullable_1_PlayFab_ClientModels_TradeStatus_ StatusFilter;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetPlayerTradesRequest__Fields_FWDDECL)
#define IL2CPP_STRUCT_GetPlayerTradesRequest__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_GetPlayerTradesRequest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetPlayerTradesRequest__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GetPlayerTradesRequest__Fields_FWDDECL)
#include <Modloader/app/structs/GetPlayerTradesRequest__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetPlayerTradesRequest__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
