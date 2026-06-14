#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InventoryScreenPickupElements_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InventoryScreenPickupElements_INITIALIZING
#if !defined(IL2CPP_STRUCT_InventoryScreenPickupElements_DEFINED)
#include <Modloader/app/structs/InventoryScreenPickupElements__Fields.h>
#if defined(IL2CPP_STRUCT_InventoryScreenPickupElements__Fields_DEFINED)
#define IL2CPP_STRUCT_InventoryScreenPickupElements_DEFINED
struct InventoryScreenPickupElements__Class;
struct InventoryScreenPickupElements {
    struct InventoryScreenPickupElements__Class* klass;
    MonitorData* monitor;
    struct InventoryScreenPickupElements__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InventoryScreenPickupElements_FWDDECL)
#define IL2CPP_STRUCT_InventoryScreenPickupElements_FWDDECL
#include <Modloader/app/structs/InventoryScreenPickupElements__Class.h>
#endif
#undef IL2CPP_STRUCT_InventoryScreenPickupElements_INITIALIZING
#if !defined(IL2CPP_STRUCT_InventoryScreenPickupElements_DEFINED) && !defined(IL2CPP_STRUCT_InventoryScreenPickupElements_FWDDECL)
#include <Modloader/app/structs/InventoryScreenPickupElements.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InventoryScreenPickupElements.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
