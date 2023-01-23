#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InventoryItemHelpText_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InventoryItemHelpText_INITIALIZING
#if !defined(IL2CPP_STRUCT_InventoryItemHelpText_DEFINED)
#include <Modloader/app/structs/InventoryItemHelpText__Fields.h>
#if defined(IL2CPP_STRUCT_InventoryItemHelpText__Fields_DEFINED)
#define IL2CPP_STRUCT_InventoryItemHelpText_DEFINED
struct InventoryItemHelpText__Class;
struct InventoryItemHelpText {
    struct InventoryItemHelpText__Class* klass;
    MonitorData* monitor;
    struct InventoryItemHelpText__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InventoryItemHelpText_FWDDECL)
#define IL2CPP_STRUCT_InventoryItemHelpText_FWDDECL
#include <Modloader/app/structs/InventoryItemHelpText__Class.h>
#endif
#undef IL2CPP_STRUCT_InventoryItemHelpText_INITIALIZING
#if !defined(IL2CPP_STRUCT_InventoryItemHelpText_DEFINED) && !defined(IL2CPP_STRUCT_InventoryItemHelpText_FWDDECL)
#include <Modloader/app/structs/InventoryItemHelpText.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InventoryItemHelpText.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
