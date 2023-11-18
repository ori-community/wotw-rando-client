#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiritShardPickupPlaceholder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiritShardPickupPlaceholder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritShardPickupPlaceholder__Fields_DEFINED)
#include <Modloader/app/structs/CollectablePlaceholder__Fields.h>
#include <Modloader/app/structs/SpiritShardType__Enum.h>
#if defined(IL2CPP_STRUCT_CollectablePlaceholder__Fields_DEFINED) && defined(IL2CPP_STRUCT_SpiritShardType__Enum_DEFINED)
#define IL2CPP_STRUCT_SpiritShardPickupPlaceholder__Fields_DEFINED
struct SpiritShardPickupPlaceholder__Fields {
    struct CollectablePlaceholder__Fields _;
    SpiritShardType__Enum SpiritShardType;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiritShardPickupPlaceholder__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpiritShardPickupPlaceholder__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_SpiritShardPickupPlaceholder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritShardPickupPlaceholder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpiritShardPickupPlaceholder__Fields_FWDDECL)
#include <Modloader/app/structs/SpiritShardPickupPlaceholder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiritShardPickupPlaceholder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
