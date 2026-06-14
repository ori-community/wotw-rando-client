#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RevokeInventoryItemsRequest__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RevokeInventoryItemsRequest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RevokeInventoryItemsRequest__Fields_DEFINED)
#include <Modloader/app/structs/PlayFabRequestCommon__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabRequestCommon__Fields_DEFINED)
#define IL2CPP_STRUCT_RevokeInventoryItemsRequest__Fields_DEFINED
struct List_1_PlayFab_ServerModels_RevokeInventoryItem_;
struct RevokeInventoryItemsRequest__Fields {
    struct PlayFabRequestCommon__Fields _;
    struct List_1_PlayFab_ServerModels_RevokeInventoryItem_* Items;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RevokeInventoryItemsRequest__Fields_FWDDECL)
#define IL2CPP_STRUCT_RevokeInventoryItemsRequest__Fields_FWDDECL
#include <Modloader/app/structs/List_1_PlayFab_ServerModels_RevokeInventoryItem_.h>
#endif
#undef IL2CPP_STRUCT_RevokeInventoryItemsRequest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RevokeInventoryItemsRequest__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RevokeInventoryItemsRequest__Fields_FWDDECL)
#include <Modloader/app/structs/RevokeInventoryItemsRequest__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RevokeInventoryItemsRequest__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
