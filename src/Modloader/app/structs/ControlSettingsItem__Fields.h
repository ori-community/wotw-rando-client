#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ControlSettingsItem__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ControlSettingsItem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ControlSettingsItem__Fields_DEFINED)
#include <Modloader/app/structs/EquipmentUIInventoryItem__Fields.h>
#if defined(IL2CPP_STRUCT_EquipmentUIInventoryItem__Fields_DEFINED)
#define IL2CPP_STRUCT_ControlSettingsItem__Fields_DEFINED
struct MessageProvider;
struct GameObject;
struct MessageBox;
struct Action;
struct ControlSettingsItem__Fields {
    struct EquipmentUIInventoryItem__Fields _;
    struct MessageProvider* LabelMessageProvider;
    struct GameObject* TargetObject;
    struct MessageBox* RowText;
    struct Action* OnPressedAction;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ControlSettingsItem__Fields_FWDDECL)
#define IL2CPP_STRUCT_ControlSettingsItem__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/MessageProvider.h>
#endif
#undef IL2CPP_STRUCT_ControlSettingsItem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ControlSettingsItem__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ControlSettingsItem__Fields_FWDDECL)
#include <Modloader/app/structs/ControlSettingsItem__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ControlSettingsItem__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
