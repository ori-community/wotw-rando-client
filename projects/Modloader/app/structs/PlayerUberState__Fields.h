#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerUberState__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerUberState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerUberState__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerUberState__Fields_DEFINED
struct PlayerUberStateAbilities;
struct PlayerUberStateInventory;
struct PlayerUberStateShards;
struct PlayerUberStateStats;
struct PlayerUberStateHoldables;
struct PlayerUberStateAreaMapInformation;
struct PlayerUberStatePinInformation;
struct PlayerUberStateGeneral;
struct __declspec(align(8)) PlayerUberState__Fields {
    struct PlayerUberStateAbilities* Abilities;
    struct PlayerUberStateInventory* Inventory;
    struct PlayerUberStateShards* Shards;
    struct PlayerUberStateStats* Stats;
    struct PlayerUberStateHoldables* Holdables;
    struct PlayerUberStateAreaMapInformation* AreaMapInfo;
    struct PlayerUberStatePinInformation* PinInfo;
    struct PlayerUberStateGeneral* General;
};
#endif
#if !defined(IL2CPP_STRUCT_PlayerUberState__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlayerUberState__Fields_FWDDECL
#include <Modloader/app/structs/PlayerUberStateAbilities.h>
#include <Modloader/app/structs/PlayerUberStateAreaMapInformation.h>
#include <Modloader/app/structs/PlayerUberStateGeneral.h>
#include <Modloader/app/structs/PlayerUberStateHoldables.h>
#include <Modloader/app/structs/PlayerUberStateInventory.h>
#include <Modloader/app/structs/PlayerUberStatePinInformation.h>
#include <Modloader/app/structs/PlayerUberStateShards.h>
#include <Modloader/app/structs/PlayerUberStateStats.h>
#endif
#undef IL2CPP_STRUCT_PlayerUberState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerUberState__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlayerUberState__Fields_FWDDECL)
#include <Modloader/app/structs/PlayerUberState__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerUberState__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
