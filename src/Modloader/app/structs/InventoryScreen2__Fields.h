#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InventoryScreen2__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InventoryScreen2__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InventoryScreen2__Fields_DEFINED)
#include <Modloader/app/structs/MenuScreen__Fields.h>
#include <Modloader/app/structs/MenuTabBackground__Enum.h>
#if defined(IL2CPP_STRUCT_MenuScreen__Fields_DEFINED) && defined(IL2CPP_STRUCT_MenuTabBackground__Enum_DEFINED)
#define IL2CPP_STRUCT_InventoryScreen2__Fields_DEFINED
struct CleverMenuItemSelectionManager;
struct CleverMenuItem;
struct MoonTimelineUiFader;
struct EventTriggerAnimator;
struct InventoryScreenItem;
struct MessageBox;
struct InventoryScreenHealthEnergyElements;
struct InventoryScreenPickupElements__Array;
struct GameObject;
struct InventoryScreen2__Fields {
    struct MenuScreen__Fields _;
    struct CleverMenuItemSelectionManager* NavigationManager;
    struct CleverMenuItem* DefaultItem;
    MenuTabBackground__Enum Background;

    struct MoonTimelineUiFader* UiFader;
    struct EventTriggerAnimator* GCTrigger;
    struct InventoryScreenItem* m_SelectedItem;
    struct MessageBox* OreCount;
    struct MessageBox* SocketCount;
    struct MessageBox* EnergyCellCount;
    struct MessageBox* HealthCellCount;
    struct MessageBox* SpiritLightCount;
    struct CleverMenuItem* lastItem;
    struct InventoryScreenHealthEnergyElements* ProgressElements;
    struct InventoryScreenPickupElements__Array* InventoryElements;
    struct GameObject* Hint;
    struct MessageBox* HintHeader;
    struct MessageBox* HintDescription;
    struct GameObject* SelectionCircle;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InventoryScreen2__Fields_FWDDECL)
#define IL2CPP_STRUCT_InventoryScreen2__Fields_FWDDECL
#include <Modloader/app/structs/CleverMenuItem.h>
#include <Modloader/app/structs/CleverMenuItemSelectionManager.h>
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/InventoryScreenHealthEnergyElements.h>
#include <Modloader/app/structs/InventoryScreenItem.h>
#include <Modloader/app/structs/InventoryScreenPickupElements__Array.h>
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/MoonTimelineUiFader.h>
#endif
#undef IL2CPP_STRUCT_InventoryScreen2__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InventoryScreen2__Fields_DEFINED) && !defined(IL2CPP_STRUCT_InventoryScreen2__Fields_FWDDECL)
#include <Modloader/app/structs/InventoryScreen2__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InventoryScreen2__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
