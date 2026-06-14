#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InventoryManager__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InventoryManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InventoryManager__Fields_DEFINED)
#include <Modloader/app/structs/MenuScreen__Fields.h>
#if defined(IL2CPP_STRUCT_MenuScreen__Fields_DEFINED)
#define IL2CPP_STRUCT_InventoryManager__Fields_DEFINED
struct CleverMenuItemSelectionManager;
struct SoundProvider;
struct GameObject;
struct MessageBox;
struct MessageProvider;
struct InventoryManager__Fields {
    struct MenuScreen__Fields _;
    struct CleverMenuItemSelectionManager* NavigationManager;
    struct SoundProvider* OpenSound;
    struct SoundProvider* CloseSound;
    struct SoundProvider* PressAbilityOptionSound;
    struct SoundProvider* PressUngainedAbilityOptionSound;
    struct SoundProvider* CloseAbilityMessageSound;
    struct SoundProvider* CloseStatisticsMessageSound;
    struct SoundProvider* m_currentCloseMessageSound;
    struct GameObject* AbilityItemHighlight;
    struct MessageBox* AbilityNameText;
    struct MessageBox* TimeText;
    struct MessageBox* CompletionText;
    struct MessageBox* DeathText;
    struct MessageBox* HealthUpgradesText;
    struct MessageBox* EnergyUpgradesText;
    struct MessageBox* SkillPointUniquesText;
    struct GameObject* GinsoTreeKey;
    struct GameObject* ForlornRuinsKey;
    struct GameObject* MountHoruKey;
    struct GameObject* WorldEventsGroup;
    struct MessageBox* Difficulty;
    struct MessageProvider* LockedMessageProvider;
    struct MessageProvider* NotAvailableYetMessageProvider;
    struct MessageProvider* DiedZeroTimesMessageProvider;
    struct MessageProvider* DiedOneTimeMessagProvider;
    struct MessageProvider* DiedMultipleTimesMessageProvider;
    struct GameObject* HelpMessageBox;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InventoryManager__Fields_FWDDECL)
#define IL2CPP_STRUCT_InventoryManager__Fields_FWDDECL
#include <Modloader/app/structs/CleverMenuItemSelectionManager.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/SoundProvider.h>
#endif
#undef IL2CPP_STRUCT_InventoryManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InventoryManager__Fields_DEFINED) && !defined(IL2CPP_STRUCT_InventoryManager__Fields_FWDDECL)
#include <Modloader/app/structs/InventoryManager__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InventoryManager__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
