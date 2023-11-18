#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaterSplashControl__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaterSplashControl__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaterSplashControl__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_WaterSplashControl__Fields_DEFINED
struct WaterSplashEffect__Array;
struct Transform;
struct WaterSplashControl__Fields {
    struct MonoBehaviour__Fields _;
    struct WaterSplashEffect__Array* Effects;
    struct Transform* waterPlane;
    float maxSpeed;
    float speedScale;
    float speedPower;
    float fullForceDistance;
    float DripTimeMin;
    float DripTimeMax;
    float DripFaloffPower;
    float vertOffset;
    float waterImpactPower;
    float waterImpactRadius;
    struct Vector3 waterImpactPosOffet;
    float dripCooldownMax;
    bool useTimelineTime;
    bool dbgPause;
    float m_deltaTime;
    float m_prevRealTime;
    float m_prevTimelineTime;
    bool m_timelineInPreviewMode;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WaterSplashControl__Fields_FWDDECL)
#define IL2CPP_STRUCT_WaterSplashControl__Fields_FWDDECL
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/WaterSplashEffect__Array.h>
#endif
#undef IL2CPP_STRUCT_WaterSplashControl__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaterSplashControl__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WaterSplashControl__Fields_FWDDECL)
#include <Modloader/app/structs/WaterSplashControl__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaterSplashControl__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
