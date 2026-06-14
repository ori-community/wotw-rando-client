#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberInteractionActor__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberInteractionActor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberInteractionActor__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Vector4.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector4_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_UberInteractionActor__Fields_DEFINED
struct GameObject;
struct UberWaterControl;
struct InstantiationRecycleHelper;
struct SphereCollider;
struct Event_1;
struct SoundHost;
struct SoundProvider;
struct UberInteractionActor__Fields {
    struct MonoBehaviour__Fields _;
    float Radius;
    float ZScale;
    struct Vector4 Strength;
    struct Vector3 PrevPos;
    struct GameObject* SplashPrefab;
    bool OverrideSplash;
    bool ForceSplashOnEnterAndExit;
    bool UseCooldownForSplash;
    float SplashCooldown;
    struct UberWaterControl* _Water_k__BackingField;
    bool OnlyWater;
    int32_t PrewarmAmount;
    bool LimitAmountOfActiveInstances;
    bool StripForNintendoSwitch;
    float m_splashesCooldownTimer;
    struct InstantiationRecycleHelper* SplashRecycler;
    struct SphereCollider* m_sphereCollider;
    bool m_sphereColliderCached;
    struct Event_1* WaterEnterOverrideSoundEvent;
    struct SoundHost* SoundHost;
    struct SoundProvider* WaterEnter;
    int32_t Priority;
    float m_prevTime;
    bool m_inited;
    int32_t m_frame;
    int32_t m_actorId;
    bool m_hasActorId;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberInteractionActor__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberInteractionActor__Fields_FWDDECL
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/InstantiationRecycleHelper.h>
#include <Modloader/app/structs/SoundHost.h>
#include <Modloader/app/structs/SoundProvider.h>
#include <Modloader/app/structs/SphereCollider.h>
#include <Modloader/app/structs/UberWaterControl.h>
#endif
#undef IL2CPP_STRUCT_UberInteractionActor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberInteractionActor__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberInteractionActor__Fields_FWDDECL)
#include <Modloader/app/structs/UberInteractionActor__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberInteractionActor__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
