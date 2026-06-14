#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShopkeeperItem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShopkeeperItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShopkeeperItem_DEFINED)
#define IL2CPP_STRUCT_ShopkeeperItem_DEFINED
struct ShopkeeperItem__Class;
struct ShopkeeperItem {
    struct ShopkeeperItem__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ShopkeeperItem_FWDDECL)
#define IL2CPP_STRUCT_ShopkeeperItem_FWDDECL
#include <Modloader/app/structs/ShopkeeperItem__Class.h>
#endif
#undef IL2CPP_STRUCT_ShopkeeperItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShopkeeperItem_DEFINED) && !defined(IL2CPP_STRUCT_ShopkeeperItem_FWDDECL)
#include <Modloader/app/structs/ShopkeeperItem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShopkeeperItem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
