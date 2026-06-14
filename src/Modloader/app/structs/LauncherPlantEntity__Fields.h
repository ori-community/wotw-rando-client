#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LauncherPlantEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LauncherPlantEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LauncherPlantEntity__Fields_DEFINED)
#include <Modloader/app/structs/LauncherPlantEntity_State__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_LauncherPlantEntity_State__Enum_DEFINED)
#define IL2CPP_STRUCT_LauncherPlantEntity__Fields_DEFINED
struct MessageProvider;
struct MessageBox;
struct MoonMath_VerletDynamicsValue;
struct PlayerInsideZoneChecker;
struct SoftCollider;
struct MoonAnimator;
struct LegacyTimelineSequence;
struct TimelineEventTrigger;
struct FloatAnimationParameter;
struct Transform;
struct AnimationPostprocess;
struct ParticleSystem;
struct LineRenderer;
struct ILaunchable;
struct Collider;
struct LauncherPlantEntity__Fields {
    struct MonoBehaviour__Fields _;
    bool Controllable;
    bool UseJumpButton;
    struct Vector3 launchVelocity;
    bool randomEnemyVelocity;
    struct MessageProvider* pressJumpMessage;
    struct MessageProvider* controlAngleMessage;
    struct MessageBox* m_hintBox;
    float controlSpeed;
    float minAngle;
    float maxAngle;
    float launchReleaseRadius;
    struct MoonMath_VerletDynamicsValue* angleDynamics;
    struct PlayerInsideZoneChecker* collisionBox;
    struct Vector3 playerCatchAnchor;
    float launchDelayTime;
    struct SoftCollider* softCollider;
    float previewGravity;
    float previewMaxFallSpeed;
    struct MoonAnimator* Animator;
    struct LegacyTimelineSequence* openedTimeline;
    struct LegacyTimelineSequence* closedTimeline;
    struct LegacyTimelineSequence* swallowTimeline;
    struct LegacyTimelineSequence* launchTimeline;
    struct TimelineEventTrigger* hideTrigger;
    struct TimelineEventTrigger* releaseTrigger;
    struct FloatAnimationParameter* launchAngleParameter;
    struct Transform* characterJoint;
    struct AnimationPostprocess* touchPostprocess;
    struct ParticleSystem* ParticleSystem;
    struct LineRenderer* lineRenderer;
    float lineAlpha;
    int32_t previewStepsPerLineSegment;
    struct Transform* lineJoint;
    struct Transform* tip1;
    struct Transform* tip2;
    struct Transform* tip3;
    LauncherPlantEntity_State__Enum m_State;

    float m_stateTime;
    float m_launchSpeed;
    bool m_launchingPlayer;
    struct ILaunchable* m_Launchable;
    struct Collider* m_launchingCollider;
    float m_lineAlpha;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LauncherPlantEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_LauncherPlantEntity__Fields_FWDDECL
#include <Modloader/app/structs/AnimationPostprocess.h>
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/FloatAnimationParameter.h>
#include <Modloader/app/structs/ILaunchable.h>
#include <Modloader/app/structs/LegacyTimelineSequence.h>
#include <Modloader/app/structs/LineRenderer.h>
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/MoonAnimator.h>
#include <Modloader/app/structs/MoonMath_VerletDynamicsValue.h>
#include <Modloader/app/structs/ParticleSystem.h>
#include <Modloader/app/structs/PlayerInsideZoneChecker.h>
#include <Modloader/app/structs/SoftCollider.h>
#include <Modloader/app/structs/TimelineEventTrigger.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_LauncherPlantEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LauncherPlantEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LauncherPlantEntity__Fields_FWDDECL)
#include <Modloader/app/structs/LauncherPlantEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LauncherPlantEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
