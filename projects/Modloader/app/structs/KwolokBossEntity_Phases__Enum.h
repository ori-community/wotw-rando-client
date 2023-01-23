#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KwolokBossEntity_Phases__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KwolokBossEntity_Phases__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_KwolokBossEntity_Phases__Enum_DEFINED)
#define IL2CPP_STRUCT_KwolokBossEntity_Phases__Enum_DEFINED
enum class KwolokBossEntity_Phases__Enum : int32_t {
    Prefight = 0x00000000,
    Intro = 0x00000001,
    Escape = 0x00000002,
    Dry = 0x00000003,
    CleanWater = 0x00000004,
    CorruptedWater = 0x00000005,
    Defeated = 0x00000006,
    WispCollected = 0x00000007,
};
#endif
#if !defined(IL2CPP_STRUCT_KwolokBossEntity_Phases__Enum_FWDDECL)
#define IL2CPP_STRUCT_KwolokBossEntity_Phases__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_KwolokBossEntity_Phases__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_KwolokBossEntity_Phases__Enum_DEFINED) && !defined(IL2CPP_STRUCT_KwolokBossEntity_Phases__Enum_FWDDECL)
#include <Modloader/app/structs/KwolokBossEntity_Phases__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KwolokBossEntity_Phases__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
