#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InventoryScreenItem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InventoryScreenItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_InventoryScreenItem_DEFINED)
#include <Modloader/app/structs/InventoryScreenItem__Fields.h>
#if defined(IL2CPP_STRUCT_InventoryScreenItem__Fields_DEFINED)
#define IL2CPP_STRUCT_InventoryScreenItem_DEFINED
struct InventoryScreenItem__Class;
struct InventoryScreenItem {
    struct InventoryScreenItem__Class* klass;
    MonitorData* monitor;
    struct InventoryScreenItem__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InventoryScreenItem_FWDDECL)
#define IL2CPP_STRUCT_InventoryScreenItem_FWDDECL
#include <Modloader/app/structs/InventoryScreenItem__Class.h>
#endif
#undef IL2CPP_STRUCT_InventoryScreenItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_InventoryScreenItem_DEFINED) && !defined(IL2CPP_STRUCT_InventoryScreenItem_FWDDECL)
#include <Modloader/app/structs/InventoryScreenItem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InventoryScreenItem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
