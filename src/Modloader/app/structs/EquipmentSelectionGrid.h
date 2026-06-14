#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EquipmentSelectionGrid_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EquipmentSelectionGrid_INITIALIZING
#if !defined(IL2CPP_STRUCT_EquipmentSelectionGrid_DEFINED)
#include <Modloader/app/structs/EquipmentSelectionGrid__Fields.h>
#if defined(IL2CPP_STRUCT_EquipmentSelectionGrid__Fields_DEFINED)
#define IL2CPP_STRUCT_EquipmentSelectionGrid_DEFINED
struct EquipmentSelectionGrid__Class;
struct EquipmentSelectionGrid {
    struct EquipmentSelectionGrid__Class* klass;
    MonitorData* monitor;
    struct EquipmentSelectionGrid__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EquipmentSelectionGrid_FWDDECL)
#define IL2CPP_STRUCT_EquipmentSelectionGrid_FWDDECL
#include <Modloader/app/structs/EquipmentSelectionGrid__Class.h>
#endif
#undef IL2CPP_STRUCT_EquipmentSelectionGrid_INITIALIZING
#if !defined(IL2CPP_STRUCT_EquipmentSelectionGrid_DEFINED) && !defined(IL2CPP_STRUCT_EquipmentSelectionGrid_FWDDECL)
#include <Modloader/app/structs/EquipmentSelectionGrid.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EquipmentSelectionGrid.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
