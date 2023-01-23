#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RevokeItemError__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RevokeItemError__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RevokeItemError__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_PlayFab_ServerModels_GenericErrorCodes_.h>
#if defined(IL2CPP_STRUCT_Nullable_1_PlayFab_ServerModels_GenericErrorCodes__DEFINED)
#define IL2CPP_STRUCT_RevokeItemError__Fields_DEFINED
struct RevokeInventoryItem;
struct __declspec(align(8)) RevokeItemError__Fields {
    struct Nullable_1_PlayFab_ServerModels_GenericErrorCodes_ Error;
    struct RevokeInventoryItem* Item;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RevokeItemError__Fields_FWDDECL)
#define IL2CPP_STRUCT_RevokeItemError__Fields_FWDDECL
#include <Modloader/app/structs/RevokeInventoryItem.h>
#endif
#undef IL2CPP_STRUCT_RevokeItemError__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RevokeItemError__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RevokeItemError__Fields_FWDDECL)
#include <Modloader/app/structs/RevokeItemError__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RevokeItemError__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
