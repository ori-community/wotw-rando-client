#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EquipmentUIInventoryGrid_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EquipmentUIInventoryGrid_INITIALIZING
#if !defined(IL2CPP_STRUCT_EquipmentUIInventoryGrid_DEFINED)
#include <Modloader/app/structs/EquipmentUIInventoryGrid__Fields.h>
#if defined(IL2CPP_STRUCT_EquipmentUIInventoryGrid__Fields_DEFINED)
#define IL2CPP_STRUCT_EquipmentUIInventoryGrid_DEFINED
struct EquipmentUIInventoryGrid__Class;
struct EquipmentUIInventoryGrid {
    struct EquipmentUIInventoryGrid__Class* klass;
    MonitorData* monitor;
    struct EquipmentUIInventoryGrid__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EquipmentUIInventoryGrid_FWDDECL)
#define IL2CPP_STRUCT_EquipmentUIInventoryGrid_FWDDECL
#include <Modloader/app/structs/EquipmentUIInventoryGrid__Class.h>
#endif
#undef IL2CPP_STRUCT_EquipmentUIInventoryGrid_INITIALIZING
#if !defined(IL2CPP_STRUCT_EquipmentUIInventoryGrid_DEFINED) && !defined(IL2CPP_STRUCT_EquipmentUIInventoryGrid_FWDDECL)
#include <Modloader/app/structs/EquipmentUIInventoryGrid.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EquipmentUIInventoryGrid.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
