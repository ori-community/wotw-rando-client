#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MixerGroupType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MixerGroupType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_MixerGroupType__Enum_DEFINED)
#define IL2CPP_STRUCT_MixerGroupType__Enum_DEFINED
enum class MixerGroupType__Enum : int32_t {
    Unspecified = 0x00000000,
    AmbienceQuad = 0x00000064,
    AmbiencePoint = 0x0000006e,
    Foley = 0x000000c8,
    Footsteps = 0x000000c9,
    EnemiesAttack = 0x000000d2,
    EnemiesFoley = 0x000000d3,
    Attacks = 0x000000dc,
    Destruction = 0x000000e6,
    UI = 0x000000f0,
    SpiritTree = 0x000000fa,
    Sein = 0x00000118,
    Doors = 0x00000190,
    Cutscenes = 0x000001f4,
    Props = 0x00000258,
    Collectibles = 0x000002bc,
    MusicStingers = 0x0000032a,
    MusicLoops = 0x00000334,
};
#endif
#if !defined(IL2CPP_STRUCT_MixerGroupType__Enum_FWDDECL)
#define IL2CPP_STRUCT_MixerGroupType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_MixerGroupType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_MixerGroupType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_MixerGroupType__Enum_FWDDECL)
#include <Modloader/app/structs/MixerGroupType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MixerGroupType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
