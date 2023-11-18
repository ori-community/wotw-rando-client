#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InventoryScreen2_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InventoryScreen2_INITIALIZING
#if !defined(IL2CPP_STRUCT_InventoryScreen2_DEFINED)
#include <Modloader/app/structs/InventoryScreen2__Fields.h>
#if defined(IL2CPP_STRUCT_InventoryScreen2__Fields_DEFINED)
#define IL2CPP_STRUCT_InventoryScreen2_DEFINED
struct InventoryScreen2__Class;
struct InventoryScreen2 {
    struct InventoryScreen2__Class* klass;
    MonitorData* monitor;
    struct InventoryScreen2__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InventoryScreen2_FWDDECL)
#define IL2CPP_STRUCT_InventoryScreen2_FWDDECL
#include <Modloader/app/structs/InventoryScreen2__Class.h>
#endif
#undef IL2CPP_STRUCT_InventoryScreen2_INITIALIZING
#if !defined(IL2CPP_STRUCT_InventoryScreen2_DEFINED) && !defined(IL2CPP_STRUCT_InventoryScreen2_FWDDECL)
#include <Modloader/app/structs/InventoryScreen2.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InventoryScreen2.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
