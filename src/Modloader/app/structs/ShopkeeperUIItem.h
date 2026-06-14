#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShopkeeperUIItem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShopkeeperUIItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShopkeeperUIItem_DEFINED)
#include <Modloader/app/structs/ShopkeeperUIItem__Fields.h>
#if defined(IL2CPP_STRUCT_ShopkeeperUIItem__Fields_DEFINED)
#define IL2CPP_STRUCT_ShopkeeperUIItem_DEFINED
struct ShopkeeperUIItem__Class;
struct ShopkeeperUIItem {
    struct ShopkeeperUIItem__Class* klass;
    MonitorData* monitor;
    struct ShopkeeperUIItem__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ShopkeeperUIItem_FWDDECL)
#define IL2CPP_STRUCT_ShopkeeperUIItem_FWDDECL
#include <Modloader/app/structs/ShopkeeperUIItem__Class.h>
#endif
#undef IL2CPP_STRUCT_ShopkeeperUIItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShopkeeperUIItem_DEFINED) && !defined(IL2CPP_STRUCT_ShopkeeperUIItem_FWDDECL)
#include <Modloader/app/structs/ShopkeeperUIItem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShopkeeperUIItem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
