#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EquipmentUIInventoryItem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EquipmentUIInventoryItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_EquipmentUIInventoryItem_DEFINED)
#include <Modloader/app/structs/EquipmentUIInventoryItem__Fields.h>
#if defined(IL2CPP_STRUCT_EquipmentUIInventoryItem__Fields_DEFINED)
#define IL2CPP_STRUCT_EquipmentUIInventoryItem_DEFINED
struct EquipmentUIInventoryItem__Class;
struct EquipmentUIInventoryItem {
    struct EquipmentUIInventoryItem__Class* klass;
    MonitorData* monitor;
    struct EquipmentUIInventoryItem__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EquipmentUIInventoryItem_FWDDECL)
#define IL2CPP_STRUCT_EquipmentUIInventoryItem_FWDDECL
#include <Modloader/app/structs/EquipmentUIInventoryItem__Class.h>
#endif
#undef IL2CPP_STRUCT_EquipmentUIInventoryItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_EquipmentUIInventoryItem_DEFINED) && !defined(IL2CPP_STRUCT_EquipmentUIInventoryItem_FWDDECL)
#include <Modloader/app/structs/EquipmentUIInventoryItem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EquipmentUIInventoryItem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
