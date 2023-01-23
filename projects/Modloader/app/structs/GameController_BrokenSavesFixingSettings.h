#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameController_BrokenSavesFixingSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameController_BrokenSavesFixingSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameController_BrokenSavesFixingSettings_DEFINED)
#define IL2CPP_STRUCT_GameController_BrokenSavesFixingSettings_DEFINED
struct PlayerUberStateDescriptor;
struct SerializedIntUberState;
struct SavePedestalUberState;
struct List_1_System_Int32_;
struct GameController_BrokenSavesFixingSettings {
    struct PlayerUberStateDescriptor* PlayerUberState;
    struct SerializedIntUberState* FindKuQuest;
    struct SerializedIntUberState* DesertWispQuestUberState;
    struct SerializedIntUberState* LagoonWispQuestUberState;
    struct SerializedIntUberState* MouldwoodDepthsWispQuestUberState;
    struct SerializedIntUberState* WinterForestWispQuestUberState;
    struct SavePedestalUberState* SilentWoodsPedestalUberState;
    struct List_1_System_Int32_* SilentWoodsAreasToDiscover;
};
#endif
#if !defined(IL2CPP_STRUCT_GameController_BrokenSavesFixingSettings_FWDDECL)
#define IL2CPP_STRUCT_GameController_BrokenSavesFixingSettings_FWDDECL
#include <Modloader/app/structs/List_1_System_Int32_.h>
#include <Modloader/app/structs/PlayerUberStateDescriptor.h>
#include <Modloader/app/structs/SavePedestalUberState.h>
#include <Modloader/app/structs/SerializedIntUberState.h>
#endif
#undef IL2CPP_STRUCT_GameController_BrokenSavesFixingSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameController_BrokenSavesFixingSettings_DEFINED) && !defined(IL2CPP_STRUCT_GameController_BrokenSavesFixingSettings_FWDDECL)
#include <Modloader/app/structs/GameController_BrokenSavesFixingSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameController_BrokenSavesFixingSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
