#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TradeInfo__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TradeInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TradeInfo__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_DateTime_.h>
#include <Modloader/app/structs/Nullable_1_PlayFab_ClientModels_TradeStatus_.h>
#if defined(IL2CPP_STRUCT_Nullable_1_DateTime__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_PlayFab_ClientModels_TradeStatus__DEFINED)
#define IL2CPP_STRUCT_TradeInfo__Fields_DEFINED
struct List_1_System_String_;
struct String;
struct __declspec(align(8)) TradeInfo__Fields {
    struct List_1_System_String_* AcceptedInventoryInstanceIds;
    struct String* AcceptedPlayerId;
    struct List_1_System_String_* AllowedPlayerIds;
    struct Nullable_1_DateTime_ CancelledAt;
    struct Nullable_1_DateTime_ FilledAt;
    struct Nullable_1_DateTime_ InvalidatedAt;
    struct List_1_System_String_* OfferedCatalogItemIds;
    struct List_1_System_String_* OfferedInventoryInstanceIds;
    struct String* OfferingPlayerId;
    struct Nullable_1_DateTime_ OpenedAt;
    struct List_1_System_String_* RequestedCatalogItemIds;
    struct Nullable_1_PlayFab_ClientModels_TradeStatus_ Status;
    struct String* TradeId;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TradeInfo__Fields_FWDDECL)
#define IL2CPP_STRUCT_TradeInfo__Fields_FWDDECL
#include <Modloader/app/structs/List_1_System_String_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_TradeInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TradeInfo__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TradeInfo__Fields_FWDDECL)
#include <Modloader/app/structs/TradeInfo__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TradeInfo__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
