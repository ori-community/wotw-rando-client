#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShopKeeperHints_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShopKeeperHints_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShopKeeperHints_DEFINED)
#include <Modloader/app/structs/ShopKeeperHints__Fields.h>
#if defined(IL2CPP_STRUCT_ShopKeeperHints__Fields_DEFINED)
#define IL2CPP_STRUCT_ShopKeeperHints_DEFINED
struct ShopKeeperHints__Class;
struct ShopKeeperHints {
    struct ShopKeeperHints__Class* klass;
    MonitorData* monitor;
    struct ShopKeeperHints__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ShopKeeperHints_FWDDECL)
#define IL2CPP_STRUCT_ShopKeeperHints_FWDDECL
#include <Modloader/app/structs/ShopKeeperHints__Class.h>
#endif
#undef IL2CPP_STRUCT_ShopKeeperHints_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShopKeeperHints_DEFINED) && !defined(IL2CPP_STRUCT_ShopKeeperHints_FWDDECL)
#include <Modloader/app/structs/ShopKeeperHints.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShopKeeperHints.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
