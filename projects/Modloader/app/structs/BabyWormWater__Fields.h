#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BabyWormWater__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BabyWormWater__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BabyWormWater__Fields_DEFINED)
#include <Modloader/app/structs/BabyWorm__Fields.h>
#if defined(IL2CPP_STRUCT_BabyWorm__Fields_DEFINED)
#define IL2CPP_STRUCT_BabyWormWater__Fields_DEFINED
struct AnimationCurve;
struct GameObject;
struct WaterZone;
struct BabyWormWater__Fields {
    struct BabyWorm__Fields _;
    struct AnimationCurve* AfterBashSlowDownCurve;
    struct AnimationCurve* AfterBashTurnSpeedModifier;
    struct GameObject* TrailEffectPrefab;
    struct WaterZone* m_currentWaterZone;
    float m_bashedTimer;
    bool m_bashedOverWater;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BabyWormWater__Fields_FWDDECL)
#define IL2CPP_STRUCT_BabyWormWater__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/WaterZone.h>
#endif
#undef IL2CPP_STRUCT_BabyWormWater__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BabyWormWater__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BabyWormWater__Fields_FWDDECL)
#include <Modloader/app/structs/BabyWormWater__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BabyWormWater__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
