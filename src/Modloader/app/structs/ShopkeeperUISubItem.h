#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShopkeeperUISubItem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShopkeeperUISubItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShopkeeperUISubItem_DEFINED)
#include <Modloader/app/structs/ShopkeeperUISubItem__Fields.h>
#if defined(IL2CPP_STRUCT_ShopkeeperUISubItem__Fields_DEFINED)
#define IL2CPP_STRUCT_ShopkeeperUISubItem_DEFINED
struct ShopkeeperUISubItem__Class;
struct ShopkeeperUISubItem {
    struct ShopkeeperUISubItem__Class* klass;
    MonitorData* monitor;
    struct ShopkeeperUISubItem__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ShopkeeperUISubItem_FWDDECL)
#define IL2CPP_STRUCT_ShopkeeperUISubItem_FWDDECL
#include <Modloader/app/structs/ShopkeeperUISubItem__Class.h>
#endif
#undef IL2CPP_STRUCT_ShopkeeperUISubItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShopkeeperUISubItem_DEFINED) && !defined(IL2CPP_STRUCT_ShopkeeperUISubItem_FWDDECL)
#include <Modloader/app/structs/ShopkeeperUISubItem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShopkeeperUISubItem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
