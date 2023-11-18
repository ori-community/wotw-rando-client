#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EquipmentSelectionGrid_EquipmentAnchorGroup__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EquipmentSelectionGrid_EquipmentAnchorGroup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EquipmentSelectionGrid_EquipmentAnchorGroup__Fields_DEFINED)
#include <Modloader/app/structs/Equipment_Category__Enum.h>
#if defined(IL2CPP_STRUCT_Equipment_Category__Enum_DEFINED)
#define IL2CPP_STRUCT_EquipmentSelectionGrid_EquipmentAnchorGroup__Fields_DEFINED
struct GameObject;
struct __declspec(align(8)) EquipmentSelectionGrid_EquipmentAnchorGroup__Fields {
    Equipment_Category__Enum Category;

    struct GameObject* Anchor;
    int32_t Count;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EquipmentSelectionGrid_EquipmentAnchorGroup__Fields_FWDDECL)
#define IL2CPP_STRUCT_EquipmentSelectionGrid_EquipmentAnchorGroup__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#endif
#undef IL2CPP_STRUCT_EquipmentSelectionGrid_EquipmentAnchorGroup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EquipmentSelectionGrid_EquipmentAnchorGroup__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EquipmentSelectionGrid_EquipmentAnchorGroup__Fields_FWDDECL)
#include <Modloader/app/structs/EquipmentSelectionGrid_EquipmentAnchorGroup__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EquipmentSelectionGrid_EquipmentAnchorGroup__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
