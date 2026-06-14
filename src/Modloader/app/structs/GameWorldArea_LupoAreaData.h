#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameWorldArea_LupoAreaData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameWorldArea_LupoAreaData_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameWorldArea_LupoAreaData_DEFINED)
#define IL2CPP_STRUCT_GameWorldArea_LupoAreaData_DEFINED
struct SerializedBooleanUberState;
struct MessageProvider;
struct GameWorldArea_LupoAreaData {
    int32_t AreaMapSpiritLevelCost;
    struct SerializedBooleanUberState* LupoEncountered;
    struct MessageProvider* LupoFlavourA;
    struct MessageProvider* LupoFlavourB;
    struct MessageProvider* LupoInsuffiecientFunds;
    struct MessageProvider* LupoNoSale;
    struct MessageProvider* LupoSalesPitch;
    struct MessageProvider* LupoThanks;
    struct MessageProvider* LupoWelcome;
    struct MessageProvider* LupoFirstEncounter;
};
#endif
#if !defined(IL2CPP_STRUCT_GameWorldArea_LupoAreaData_FWDDECL)
#define IL2CPP_STRUCT_GameWorldArea_LupoAreaData_FWDDECL
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/SerializedBooleanUberState.h>
#endif
#undef IL2CPP_STRUCT_GameWorldArea_LupoAreaData_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameWorldArea_LupoAreaData_DEFINED) && !defined(IL2CPP_STRUCT_GameWorldArea_LupoAreaData_FWDDECL)
#include <Modloader/app/structs/GameWorldArea_LupoAreaData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameWorldArea_LupoAreaData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
