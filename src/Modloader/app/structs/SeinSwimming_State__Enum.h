#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinSwimming_State__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinSwimming_State__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinSwimming_State__Enum_DEFINED)
#define IL2CPP_STRUCT_SeinSwimming_State__Enum_DEFINED
enum class SeinSwimming_State__Enum : int32_t {
    Invalid = -1,
    OutOfWater = 0x00000000,
    SwimmingOnSurface = 0x00000001,
    SwimMovingUnderwater = 0x00000002,
    SwimIdleUnderwater = 0x00000003,
    Dashing = 0x00000004,
    DashingOutOfWater = 0x00000005,
    WallImpact = 0x00000006,
    SurfaceDash = 0x00000007,
    DashIntoWater = 0x00000008,
    SurfaceWallImpact = 0x00000009,
    Digging = 0x0000000a,
    Drowning = 0x0000000b,
    Bashing = 0x0000000c,
};
#endif
#if !defined(IL2CPP_STRUCT_SeinSwimming_State__Enum_FWDDECL)
#define IL2CPP_STRUCT_SeinSwimming_State__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_SeinSwimming_State__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinSwimming_State__Enum_DEFINED) && !defined(IL2CPP_STRUCT_SeinSwimming_State__Enum_FWDDECL)
#include <Modloader/app/structs/SeinSwimming_State__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinSwimming_State__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
