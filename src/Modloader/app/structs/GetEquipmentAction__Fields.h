#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetEquipmentAction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetEquipmentAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetEquipmentAction__Fields_DEFINED)
#include <Modloader/app/structs/ActionMethod__Fields.h>
#include <Modloader/app/structs/EquipmentType__Enum.h>
#include <Modloader/app/structs/SpellInventory_Binding__Enum.h>
#if defined(IL2CPP_STRUCT_ActionMethod__Fields_DEFINED) && defined(IL2CPP_STRUCT_EquipmentType__Enum_DEFINED) && defined(IL2CPP_STRUCT_SpellInventory_Binding__Enum_DEFINED)
#define IL2CPP_STRUCT_GetEquipmentAction__Fields_DEFINED
struct GetEquipmentAction__Fields {
    struct ActionMethod__Fields _;
    EquipmentType__Enum Equipment;

    SpellInventory_Binding__Enum Binding;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetEquipmentAction__Fields_FWDDECL)
#define IL2CPP_STRUCT_GetEquipmentAction__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_GetEquipmentAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetEquipmentAction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GetEquipmentAction__Fields_FWDDECL)
#include <Modloader/app/structs/GetEquipmentAction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetEquipmentAction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
