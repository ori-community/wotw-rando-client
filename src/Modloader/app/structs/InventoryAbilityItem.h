#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InventoryAbilityItem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InventoryAbilityItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_InventoryAbilityItem_DEFINED)
#include <Modloader/app/structs/InventoryAbilityItem__Fields.h>
#if defined(IL2CPP_STRUCT_InventoryAbilityItem__Fields_DEFINED)
#define IL2CPP_STRUCT_InventoryAbilityItem_DEFINED
struct InventoryAbilityItem__Class;
struct InventoryAbilityItem {
    struct InventoryAbilityItem__Class* klass;
    MonitorData* monitor;
    struct InventoryAbilityItem__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InventoryAbilityItem_FWDDECL)
#define IL2CPP_STRUCT_InventoryAbilityItem_FWDDECL
#include <Modloader/app/structs/InventoryAbilityItem__Class.h>
#endif
#undef IL2CPP_STRUCT_InventoryAbilityItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_InventoryAbilityItem_DEFINED) && !defined(IL2CPP_STRUCT_InventoryAbilityItem_FWDDECL)
#include <Modloader/app/structs/InventoryAbilityItem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InventoryAbilityItem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
