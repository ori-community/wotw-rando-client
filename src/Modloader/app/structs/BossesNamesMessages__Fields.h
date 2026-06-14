#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BossesNamesMessages__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BossesNamesMessages__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BossesNamesMessages__Fields_DEFINED)
#include <Modloader/app/structs/ScriptableObject__Fields.h>
#if defined(IL2CPP_STRUCT_ScriptableObject__Fields_DEFINED)
#define IL2CPP_STRUCT_BossesNamesMessages__Fields_DEFINED
struct MessageProvider;
struct BossesNamesMessages__Fields {
    struct ScriptableObject__Fields _;
    struct MessageProvider* NightcrawlerBossName;
    struct MessageProvider* SpiderBossName;
    struct MessageProvider* KwolokBossName;
    struct MessageProvider* PowlBossName;
    struct MessageProvider* HornBossName;
    struct MessageProvider* LaserBossName;
    struct MessageProvider* MinerBossName;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BossesNamesMessages__Fields_FWDDECL)
#define IL2CPP_STRUCT_BossesNamesMessages__Fields_FWDDECL
#include <Modloader/app/structs/MessageProvider.h>
#endif
#undef IL2CPP_STRUCT_BossesNamesMessages__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BossesNamesMessages__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BossesNamesMessages__Fields_FWDDECL)
#include <Modloader/app/structs/BossesNamesMessages__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BossesNamesMessages__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
