#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShopkeeperUIDetails_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShopkeeperUIDetails_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShopkeeperUIDetails_DEFINED)
#include <Modloader/app/structs/ShopkeeperUIDetails__Fields.h>
#if defined(IL2CPP_STRUCT_ShopkeeperUIDetails__Fields_DEFINED)
#define IL2CPP_STRUCT_ShopkeeperUIDetails_DEFINED
struct ShopkeeperUIDetails__Class;
struct ShopkeeperUIDetails {
    struct ShopkeeperUIDetails__Class* klass;
    MonitorData* monitor;
    struct ShopkeeperUIDetails__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ShopkeeperUIDetails_FWDDECL)
#define IL2CPP_STRUCT_ShopkeeperUIDetails_FWDDECL
#include <Modloader/app/structs/ShopkeeperUIDetails__Class.h>
#endif
#undef IL2CPP_STRUCT_ShopkeeperUIDetails_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShopkeeperUIDetails_DEFINED) && !defined(IL2CPP_STRUCT_ShopkeeperUIDetails_FWDDECL)
#include <Modloader/app/structs/ShopkeeperUIDetails.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShopkeeperUIDetails.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
