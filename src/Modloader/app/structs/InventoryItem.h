#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InventoryItem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InventoryItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_InventoryItem_DEFINED)
#include <Modloader/app/structs/InventoryItem__Fields.h>
#if defined(IL2CPP_STRUCT_InventoryItem__Fields_DEFINED)
#define IL2CPP_STRUCT_InventoryItem_DEFINED
struct InventoryItem__Class;
struct InventoryItem {
    struct InventoryItem__Class* klass;
    MonitorData* monitor;
    struct InventoryItem__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InventoryItem_FWDDECL)
#define IL2CPP_STRUCT_InventoryItem_FWDDECL
#include <Modloader/app/structs/InventoryItem__Class.h>
#endif
#undef IL2CPP_STRUCT_InventoryItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_InventoryItem_DEFINED) && !defined(IL2CPP_STRUCT_InventoryItem_FWDDECL)
#include <Modloader/app/structs/InventoryItem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InventoryItem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
