#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpellPickupPlaceholder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpellPickupPlaceholder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpellPickupPlaceholder__Fields_DEFINED)
#include <Modloader/app/structs/CollectablePlaceholder__Fields.h>
#include <Modloader/app/structs/EquipmentType__Enum.h>
#include <Modloader/app/structs/SpellInventory_Binding__Enum.h>
#if defined(IL2CPP_STRUCT_CollectablePlaceholder__Fields_DEFINED) && defined(IL2CPP_STRUCT_EquipmentType__Enum_DEFINED) && defined(IL2CPP_STRUCT_SpellInventory_Binding__Enum_DEFINED)
#define IL2CPP_STRUCT_SpellPickupPlaceholder__Fields_DEFINED
struct SpellPickupPlaceholder__Fields {
    struct CollectablePlaceholder__Fields _;
    EquipmentType__Enum EquipmentType;

    SpellInventory_Binding__Enum Binding;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpellPickupPlaceholder__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpellPickupPlaceholder__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_SpellPickupPlaceholder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpellPickupPlaceholder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpellPickupPlaceholder__Fields_FWDDECL)
#include <Modloader/app/structs/SpellPickupPlaceholder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpellPickupPlaceholder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
