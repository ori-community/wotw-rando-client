#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaterThatRockFallsInto__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaterThatRockFallsInto__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaterThatRockFallsInto__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_WaterThatRockFallsInto__Fields_DEFINED
struct GameObject;
struct WaterThatRockFallsInto__Fields {
    struct MonoBehaviour__Fields _;
    float AngularVelocityMultiplier;
    float AngularFriction;
    float MaxAngularVelocity;
    float FloatHeight;
    float BounceDamp;
    struct Vector2 EnterWaterDamp;
    struct GameObject* SplashEffect;
    float WaterHorizontalMaxVelocity;
    float WaterHorizontalMultiplier;
    float WaterHorizontalFriction;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WaterThatRockFallsInto__Fields_FWDDECL)
#define IL2CPP_STRUCT_WaterThatRockFallsInto__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#endif
#undef IL2CPP_STRUCT_WaterThatRockFallsInto__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaterThatRockFallsInto__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WaterThatRockFallsInto__Fields_FWDDECL)
#include <Modloader/app/structs/WaterThatRockFallsInto__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaterThatRockFallsInto__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
