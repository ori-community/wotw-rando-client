#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UpgradableShardItem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UpgradableShardItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpgradableShardItem_DEFINED)
#include <Modloader/app/structs/UpgradableShardItem__Fields.h>
#if defined(IL2CPP_STRUCT_UpgradableShardItem__Fields_DEFINED)
#define IL2CPP_STRUCT_UpgradableShardItem_DEFINED
struct UpgradableShardItem__Class;
struct UpgradableShardItem {
    struct UpgradableShardItem__Class* klass;
    MonitorData* monitor;
    struct UpgradableShardItem__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UpgradableShardItem_FWDDECL)
#define IL2CPP_STRUCT_UpgradableShardItem_FWDDECL
#include <Modloader/app/structs/UpgradableShardItem__Class.h>
#endif
#undef IL2CPP_STRUCT_UpgradableShardItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpgradableShardItem_DEFINED) && !defined(IL2CPP_STRUCT_UpgradableShardItem_FWDDECL)
#include <Modloader/app/structs/UpgradableShardItem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UpgradableShardItem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
