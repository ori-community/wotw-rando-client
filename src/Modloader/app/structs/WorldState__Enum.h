#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WorldState__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WorldState__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_WorldState__Enum_DEFINED)
#define IL2CPP_STRUCT_WorldState__Enum_DEFINED
enum class WorldState__Enum : int32_t {
    WaterPurified = 0x00000000,
    GumoFree = 0x00000001,
    SpiritTreeReached = 0x00000002,
    GinsoTreeKey = 0x00000003,
    GinsoTreeEntered = 0x00000005,
    WindRestored = 0x00000007,
    GravityActivated = 0x00000008,
    MistLifted = 0x00000009,
    ForlornRuinsKey = 0x0000000a,
    MountHoruKey = 0x0000000b,
    WarmthReturned = 0x0000000c,
    DarknessLifted = 0x0000000d,
    KwolokDead = 0x0000000e,
};
#endif
#if !defined(IL2CPP_STRUCT_WorldState__Enum_FWDDECL)
#define IL2CPP_STRUCT_WorldState__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_WorldState__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_WorldState__Enum_DEFINED) && !defined(IL2CPP_STRUCT_WorldState__Enum_FWDDECL)
#include <Modloader/app/structs/WorldState__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WorldState__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
