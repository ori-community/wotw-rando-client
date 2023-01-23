#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InventoryManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InventoryManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_InventoryManager_DEFINED)
#include <Modloader/app/structs/InventoryManager__Fields.h>
#if defined(IL2CPP_STRUCT_InventoryManager__Fields_DEFINED)
#define IL2CPP_STRUCT_InventoryManager_DEFINED
struct InventoryManager__Class;
struct InventoryManager {
    struct InventoryManager__Class* klass;
    MonitorData* monitor;
    struct InventoryManager__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InventoryManager_FWDDECL)
#define IL2CPP_STRUCT_InventoryManager_FWDDECL
#include <Modloader/app/structs/InventoryManager__Class.h>
#endif
#undef IL2CPP_STRUCT_InventoryManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_InventoryManager_DEFINED) && !defined(IL2CPP_STRUCT_InventoryManager_FWDDECL)
#include <Modloader/app/structs/InventoryManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InventoryManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
