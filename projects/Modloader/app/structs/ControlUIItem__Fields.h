#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ControlUIItem__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ControlUIItem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ControlUIItem__Fields_DEFINED)
#include <Modloader/app/structs/EquipmentUIInventoryItem__Fields.h>
#if defined(IL2CPP_STRUCT_EquipmentUIInventoryItem__Fields_DEFINED)
#define IL2CPP_STRUCT_ControlUIItem__Fields_DEFINED
struct ControlItemCommand;
struct MessageBox;
struct GameObject;
struct ControlUIItem__Fields {
    struct EquipmentUIInventoryItem__Fields _;
    struct ControlItemCommand* Context;
    struct MessageBox* CommandTitle;
    struct GameObject* SelectionHighlight;
    struct GameObject* AlertMarker;
    struct MessageBox* Token;
    struct GameObject* NormalObjectRoot;
    struct GameObject* ResetObjectRoot;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ControlUIItem__Fields_FWDDECL)
#define IL2CPP_STRUCT_ControlUIItem__Fields_FWDDECL
#include <Modloader/app/structs/ControlItemCommand.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MessageBox.h>
#endif
#undef IL2CPP_STRUCT_ControlUIItem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ControlUIItem__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ControlUIItem__Fields_FWDDECL)
#include <Modloader/app/structs/ControlUIItem__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ControlUIItem__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
