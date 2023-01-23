#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShopkeeperScreen_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShopkeeperScreen_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShopkeeperScreen_DEFINED)
#include <Modloader/app/structs/ShopkeeperScreen__Fields.h>
#if defined(IL2CPP_STRUCT_ShopkeeperScreen__Fields_DEFINED)
#define IL2CPP_STRUCT_ShopkeeperScreen_DEFINED
struct ShopkeeperScreen__Class;
struct ShopkeeperScreen {
    struct ShopkeeperScreen__Class* klass;
    MonitorData* monitor;
    struct ShopkeeperScreen__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ShopkeeperScreen_FWDDECL)
#define IL2CPP_STRUCT_ShopkeeperScreen_FWDDECL
#include <Modloader/app/structs/ShopkeeperScreen__Class.h>
#endif
#undef IL2CPP_STRUCT_ShopkeeperScreen_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShopkeeperScreen_DEFINED) && !defined(IL2CPP_STRUCT_ShopkeeperScreen_FWDDECL)
#include <Modloader/app/structs/ShopkeeperScreen.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShopkeeperScreen.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
