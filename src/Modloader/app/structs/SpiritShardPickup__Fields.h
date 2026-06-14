#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiritShardPickup__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiritShardPickup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritShardPickup__Fields_DEFINED)
#include <Modloader/app/structs/PickupCameraTarget__Fields.h>
#include <Modloader/app/structs/SpiritShardType__Enum.h>
#if defined(IL2CPP_STRUCT_PickupCameraTarget__Fields_DEFINED) && defined(IL2CPP_STRUCT_SpiritShardType__Enum_DEFINED)
#define IL2CPP_STRUCT_SpiritShardPickup__Fields_DEFINED
struct SpiritShardPickup__Fields {
    struct PickupCameraTarget__Fields _;
    SpiritShardType__Enum SpiritShardType;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiritShardPickup__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpiritShardPickup__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_SpiritShardPickup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritShardPickup__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpiritShardPickup__Fields_FWDDECL)
#include <Modloader/app/structs/SpiritShardPickup__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiritShardPickup__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
