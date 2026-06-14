#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LoremasterScreen__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LoremasterScreen__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoremasterScreen__Fields_DEFINED)
#include <Modloader/app/structs/MenuScreen__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_MenuScreen__Fields_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_LoremasterScreen__Fields_DEFINED
struct ReplaySetting__Array;
struct GameObject;
struct EquipmentUIInventoryGrid;
struct MessageBox;
struct MessageProvider;
struct LoremasterUISlot;
struct LoremasterScreen__Fields {
    struct MenuScreen__Fields _;
    struct ReplaySetting__Array* ReplaySettings;
    struct GameObject* LoremasterReplayItemPrefab;
    struct GameObject* ItemRoot;
    struct EquipmentUIInventoryGrid* Grid;
    struct GameObject* LoremasterWatchIcon;
    struct GameObject* LoremasterPlayIcon;
    struct MessageBox* LoremasterSelectedLabel;
    struct MessageProvider* DefaultLockedMessage;
    struct LoremasterUISlot* m_SelectedItem;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LoremasterScreen__Fields_FWDDECL)
#define IL2CPP_STRUCT_LoremasterScreen__Fields_FWDDECL
#include <Modloader/app/structs/EquipmentUIInventoryGrid.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/LoremasterUISlot.h>
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/ReplaySetting__Array.h>
#endif
#undef IL2CPP_STRUCT_LoremasterScreen__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoremasterScreen__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LoremasterScreen__Fields_FWDDECL)
#include <Modloader/app/structs/LoremasterScreen__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LoremasterScreen__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
