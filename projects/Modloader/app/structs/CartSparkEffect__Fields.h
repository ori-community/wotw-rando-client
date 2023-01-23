#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CartSparkEffect__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CartSparkEffect__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CartSparkEffect__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_CartSparkEffect__Fields_DEFINED
struct List_1_UnityEngine_GameObject_;
struct ParticleSystem;
struct AnimationCurve;
struct GameObject;
struct Transform;
struct MoonTrail__Array;
struct CartPlatformMovement;
struct Cart;
struct CartSparkEffect__Fields {
    struct MonoBehaviour__Fields _;
    struct List_1_UnityEngine_GameObject_* Lights;
    struct ParticleSystem* Sparks;
    struct AnimationCurve* Noise;
    float MaxSampleSpeed;
    float AccelerationForceToSparks;
    float MinSparkInterval;
    struct GameObject* EletricityFX;
    struct Transform* EletricityAnchor;
    float TrailDeactivationDelay;
    struct GameObject* m_eletricityFxInstance;
    struct MoonTrail__Array* m_trails;
    struct CartPlatformMovement* m_cartMov;
    struct Cart* m_cart;
    float m_sampleTimer;
    float noise;
    bool m_wasOn;
    bool m_forceSparks;
    float m_oldSpeed;
    float m_cartAcceleration;
    float m_emisionTimer;
    bool m_trailsActive;
    float m_offRailTime;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CartSparkEffect__Fields_FWDDECL)
#define IL2CPP_STRUCT_CartSparkEffect__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/Cart.h>
#include <Modloader/app/structs/CartPlatformMovement.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/MoonTrail__Array.h>
#include <Modloader/app/structs/ParticleSystem.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_CartSparkEffect__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CartSparkEffect__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CartSparkEffect__Fields_FWDDECL)
#include <Modloader/app/structs/CartSparkEffect__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CartSparkEffect__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
