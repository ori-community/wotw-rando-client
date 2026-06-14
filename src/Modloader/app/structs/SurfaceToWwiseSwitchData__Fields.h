#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SurfaceToWwiseSwitchData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SurfaceToWwiseSwitchData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SurfaceToWwiseSwitchData__Fields_DEFINED)
#include <Modloader/app/structs/ScriptableObject__Fields.h>
#if defined(IL2CPP_STRUCT_ScriptableObject__Fields_DEFINED)
#define IL2CPP_STRUCT_SurfaceToWwiseSwitchData__Fields_DEFINED
struct RTPC;
struct Switch_1;
struct SurfaceToWwiseSwitchData__Fields {
    struct ScriptableObject__Fields _;
    struct RTPC* DistanceToWaterRtpc;
    float DistanceToWaterDivisor;
    struct RTPC* DistanceToSandRtpc;
    float DistanceToSandDivisor;
    struct RTPC* RainingStateRtpc;
    struct Switch_1* None;
    struct Switch_1* Wood;
    struct Switch_1* Grass;
    struct Switch_1* Water;
    struct Switch_1* Rock;
    struct Switch_1* Ice;
    struct Switch_1* Mushroom;
    struct Switch_1* Sand;
    struct Switch_1* LightDarkPlatform;
    struct Switch_1* MovingLightDarkPlatform;
    struct Switch_1* Stone;
    struct Switch_1* DiggableSand;
    struct Switch_1* Ceramic;
    struct Switch_1* Snow;
    struct Switch_1* DiggableSnow;
    struct Switch_1* RockSnow;
    struct Switch_1* WoodSnow;
    struct Switch_1* Insect;
    struct Switch_1* LagoonMoss;
    struct Switch_1* Bone;
    struct Switch_1* SandPlatform;
    struct Switch_1* Ash;
    struct Switch_1* Metal;
    struct Switch_1* Plank;
    struct Switch_1* Moss;
    struct Switch_1* RopeBridge;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SurfaceToWwiseSwitchData__Fields_FWDDECL)
#define IL2CPP_STRUCT_SurfaceToWwiseSwitchData__Fields_FWDDECL
#include <Modloader/app/structs/RTPC.h>
#include <Modloader/app/structs/Switch_1.h>
#endif
#undef IL2CPP_STRUCT_SurfaceToWwiseSwitchData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SurfaceToWwiseSwitchData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SurfaceToWwiseSwitchData__Fields_FWDDECL)
#include <Modloader/app/structs/SurfaceToWwiseSwitchData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SurfaceToWwiseSwitchData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
