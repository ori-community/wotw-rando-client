#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StatsScreen__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StatsScreen__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StatsScreen__Fields_DEFINED)
#include <Modloader/app/structs/MenuScreen__Fields.h>
#include <Modloader/app/structs/StatSetting_StatDisplayCategory__Enum.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_MenuScreen__Fields_DEFINED) && defined(IL2CPP_STRUCT_StatSetting_StatDisplayCategory__Enum_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_StatsScreen__Fields_DEFINED
struct SoundProvider;
struct GameObject;
struct EquipmentUIInventoryGrid;
struct MessageBox;
struct MessageProvider;
struct List_1_StatScreenDisplayFilter_;
struct StatUISlot;
struct StatsScreen__Fields {
    struct MenuScreen__Fields _;
    struct SoundProvider* OpenSound;
    struct SoundProvider* CloseSound;
    struct GameObject* StatPrefab;
    struct GameObject* ItemRoot;
    struct EquipmentUIInventoryGrid* Grid;
    struct MessageBox* SelectedLabel;
    struct MessageBox* ActiveFilterMessageBox;
    struct MessageBox* PrevFilterMessageBox;
    struct MessageBox* NextFilterMessageBox;
    struct MessageProvider* DefaultLockedMessage;
    struct List_1_StatScreenDisplayFilter_* DisplayFilters;
    StatSetting_StatDisplayCategory__Enum ActiveDisplayFilter;

    struct StatUISlot* m_SelectedItem;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StatsScreen__Fields_FWDDECL)
#define IL2CPP_STRUCT_StatsScreen__Fields_FWDDECL
#include <Modloader/app/structs/EquipmentUIInventoryGrid.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/List_1_StatScreenDisplayFilter_.h>
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/SoundProvider.h>
#include <Modloader/app/structs/StatUISlot.h>
#endif
#undef IL2CPP_STRUCT_StatsScreen__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StatsScreen__Fields_DEFINED) && !defined(IL2CPP_STRUCT_StatsScreen__Fields_FWDDECL)
#include <Modloader/app/structs/StatsScreen__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StatsScreen__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
