#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShardUpgradeScreen_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShardUpgradeScreen_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShardUpgradeScreen_DEFINED)
#include <Modloader/app/structs/ShardUpgradeScreen__Fields.h>
#if defined(IL2CPP_STRUCT_ShardUpgradeScreen__Fields_DEFINED)
#define IL2CPP_STRUCT_ShardUpgradeScreen_DEFINED
struct ShardUpgradeScreen__Class;
struct ShardUpgradeScreen {
    struct ShardUpgradeScreen__Class* klass;
    MonitorData* monitor;
    struct ShardUpgradeScreen__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ShardUpgradeScreen_FWDDECL)
#define IL2CPP_STRUCT_ShardUpgradeScreen_FWDDECL
#include <Modloader/app/structs/ShardUpgradeScreen__Class.h>
#endif
#undef IL2CPP_STRUCT_ShardUpgradeScreen_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShardUpgradeScreen_DEFINED) && !defined(IL2CPP_STRUCT_ShardUpgradeScreen_FWDDECL)
#include <Modloader/app/structs/ShardUpgradeScreen.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShardUpgradeScreen.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
