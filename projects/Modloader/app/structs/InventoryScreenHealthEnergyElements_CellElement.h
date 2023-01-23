#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InventoryScreenHealthEnergyElements_CellElement_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InventoryScreenHealthEnergyElements_CellElement_INITIALIZING
#if !defined(IL2CPP_STRUCT_InventoryScreenHealthEnergyElements_CellElement_DEFINED)
#define IL2CPP_STRUCT_InventoryScreenHealthEnergyElements_CellElement_DEFINED
struct GameObject;
struct MoonTimeline;
struct InventoryScreenHealthEnergyElements_CellElement {
    struct GameObject* Cell;
    struct MoonTimeline* ShowTimeline;
};
#endif
#if !defined(IL2CPP_STRUCT_InventoryScreenHealthEnergyElements_CellElement_FWDDECL)
#define IL2CPP_STRUCT_InventoryScreenHealthEnergyElements_CellElement_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_InventoryScreenHealthEnergyElements_CellElement_INITIALIZING
#if !defined(IL2CPP_STRUCT_InventoryScreenHealthEnergyElements_CellElement_DEFINED) && !defined(IL2CPP_STRUCT_InventoryScreenHealthEnergyElements_CellElement_FWDDECL)
#include <Modloader/app/structs/InventoryScreenHealthEnergyElements_CellElement.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InventoryScreenHealthEnergyElements_CellElement.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
