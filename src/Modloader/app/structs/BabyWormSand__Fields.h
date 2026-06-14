#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BabyWormSand__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BabyWormSand__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BabyWormSand__Fields_DEFINED)
#include <Modloader/app/structs/BabyWorm__Fields.h>
#if defined(IL2CPP_STRUCT_BabyWorm__Fields_DEFINED)
#define IL2CPP_STRUCT_BabyWormSand__Fields_DEFINED
struct GameObject;
struct DigZone;
struct BabyWormSand__Fields {
    struct BabyWorm__Fields _;
    struct GameObject* TrailEffectPrefab;
    struct DigZone* m_currentDigZone;
    bool m_hasCurrentDigZone;
    struct GameObject* m_trailEffect;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BabyWormSand__Fields_FWDDECL)
#define IL2CPP_STRUCT_BabyWormSand__Fields_FWDDECL
#include <Modloader/app/structs/DigZone.h>
#include <Modloader/app/structs/GameObject.h>
#endif
#undef IL2CPP_STRUCT_BabyWormSand__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BabyWormSand__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BabyWormSand__Fields_FWDDECL)
#include <Modloader/app/structs/BabyWormSand__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BabyWormSand__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
