#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShardSlotUpgradePickup__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShardSlotUpgradePickup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShardSlotUpgradePickup__Fields_DEFINED)
#include <Modloader/app/structs/PickupCameraTarget__Fields.h>
#if defined(IL2CPP_STRUCT_PickupCameraTarget__Fields_DEFINED)
#define IL2CPP_STRUCT_ShardSlotUpgradePickup__Fields_DEFINED
struct VisibleOnWorldMap;
struct ShardSlotUpgradePickup__Fields {
    struct PickupCameraTarget__Fields _;
    struct VisibleOnWorldMap* m_visibleOnWorldMap;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ShardSlotUpgradePickup__Fields_FWDDECL)
#define IL2CPP_STRUCT_ShardSlotUpgradePickup__Fields_FWDDECL
#include <Modloader/app/structs/VisibleOnWorldMap.h>
#endif
#undef IL2CPP_STRUCT_ShardSlotUpgradePickup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShardSlotUpgradePickup__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ShardSlotUpgradePickup__Fields_FWDDECL)
#include <Modloader/app/structs/ShardSlotUpgradePickup__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShardSlotUpgradePickup__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
