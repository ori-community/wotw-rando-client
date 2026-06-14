#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RaceMenuScreenMemoriesPage__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RaceMenuScreenMemoriesPage__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceMenuScreenMemoriesPage__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_RaceMenuScreenMemoriesPage__Fields_DEFINED
struct UISoundSettingsAsset;
struct ReplaySetting__Array;
struct GameObject;
struct EquipmentUIInventoryGrid;
struct MessageBox;
struct MessageProvider;
struct MemoryUISlot;
struct CleverMenuItem;
struct RaceMenuScreenMemoriesPage__Fields {
    struct MonoBehaviour__Fields _;
    struct UISoundSettingsAsset* Sounds;
    struct ReplaySetting__Array* ReplaySettings;
    struct GameObject* LoremasterReplayItemPrefab;
    struct GameObject* ItemRoot;
    struct EquipmentUIInventoryGrid* Grid;
    struct GameObject* LoremasterWatchIcon;
    struct GameObject* LoremasterPlayIcon;
    struct MessageBox* LoremasterSelectedLabel;
    struct MessageProvider* DefaultLockedMessage;
    struct MemoryUISlot* m_SelectedItem;
    struct CleverMenuItem* m_lastItem;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RaceMenuScreenMemoriesPage__Fields_FWDDECL)
#define IL2CPP_STRUCT_RaceMenuScreenMemoriesPage__Fields_FWDDECL
#include <Modloader/app/structs/CleverMenuItem.h>
#include <Modloader/app/structs/EquipmentUIInventoryGrid.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MemoryUISlot.h>
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/ReplaySetting__Array.h>
#include <Modloader/app/structs/UISoundSettingsAsset.h>
#endif
#undef IL2CPP_STRUCT_RaceMenuScreenMemoriesPage__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceMenuScreenMemoriesPage__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RaceMenuScreenMemoriesPage__Fields_FWDDECL)
#include <Modloader/app/structs/RaceMenuScreenMemoriesPage__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RaceMenuScreenMemoriesPage__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
