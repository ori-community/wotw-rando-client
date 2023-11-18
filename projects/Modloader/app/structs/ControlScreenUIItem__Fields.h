#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ControlScreenUIItem__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ControlScreenUIItem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ControlScreenUIItem__Fields_DEFINED)
#include <Modloader/app/structs/EquipmentUIInventoryItem__Fields.h>
#if defined(IL2CPP_STRUCT_EquipmentUIInventoryItem__Fields_DEFINED)
#define IL2CPP_STRUCT_ControlScreenUIItem__Fields_DEFINED
struct GameObject;
struct ControlScreenUIItem__Fields {
    struct EquipmentUIInventoryItem__Fields _;
    struct GameObject* ItemRoot;
    struct GameObject* Highlighter;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ControlScreenUIItem__Fields_FWDDECL)
#define IL2CPP_STRUCT_ControlScreenUIItem__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#endif
#undef IL2CPP_STRUCT_ControlScreenUIItem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ControlScreenUIItem__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ControlScreenUIItem__Fields_FWDDECL)
#include <Modloader/app/structs/ControlScreenUIItem__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ControlScreenUIItem__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
