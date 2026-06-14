#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinEvent__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinEvent__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinEvent__Enum_DEFINED)
#define IL2CPP_STRUCT_SeinEvent__Enum_DEFINED
enum class SeinEvent__Enum : int32_t {
    DigOutOfZone = 0x00000000,
    DigOutOfZoneDashing = 0x00000001,
    DigDigging = 0x00000002,
    DigDashing = 0x00000003,
    DigExitingSand = 0x00000004,
    BowIdle = 0x00000005,
    BowDraw = 0x00000006,
    BowAim = 0x00000007,
    BowPullCharge = 0x00000008,
    BowRecover = 0x00000009,
    Bash = 0x0000000a,
    Bounce = 0x0000000b,
    DashNew = 0x0000000c,
};
#endif
#if !defined(IL2CPP_STRUCT_SeinEvent__Enum_FWDDECL)
#define IL2CPP_STRUCT_SeinEvent__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_SeinEvent__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinEvent__Enum_DEFINED) && !defined(IL2CPP_STRUCT_SeinEvent__Enum_FWDDECL)
#include <Modloader/app/structs/SeinEvent__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinEvent__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
