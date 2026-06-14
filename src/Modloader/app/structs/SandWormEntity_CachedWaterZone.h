#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SandWormEntity_CachedWaterZone_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SandWormEntity_CachedWaterZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_SandWormEntity_CachedWaterZone_DEFINED)
#define IL2CPP_STRUCT_SandWormEntity_CachedWaterZone_DEFINED
struct WaterZone;
struct SandWormEntity_CachedWaterZone {
    bool IsInZone;
    int32_t FrameCached;
    struct WaterZone* Zone;
};
#endif
#if !defined(IL2CPP_STRUCT_SandWormEntity_CachedWaterZone_FWDDECL)
#define IL2CPP_STRUCT_SandWormEntity_CachedWaterZone_FWDDECL
#include <Modloader/app/structs/WaterZone.h>
#endif
#undef IL2CPP_STRUCT_SandWormEntity_CachedWaterZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_SandWormEntity_CachedWaterZone_DEFINED) && !defined(IL2CPP_STRUCT_SandWormEntity_CachedWaterZone_FWDDECL)
#include <Modloader/app/structs/SandWormEntity_CachedWaterZone.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SandWormEntity_CachedWaterZone.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
