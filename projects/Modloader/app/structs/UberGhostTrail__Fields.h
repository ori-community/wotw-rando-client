#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberGhostTrail__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberGhostTrail__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberGhostTrail__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_UberGhostTrail__Fields_DEFINED
struct AnimationCurve;
struct GameObject;
struct Renderer;
struct SpriteAnimator;
struct SpriteAnimatorWithTransitions;
struct SeinNaruComboAnimator;
struct UberGhostTrailMeshUpdate;
struct UberGhostTrail__Fields {
    struct MonoBehaviour__Fields _;
    float SpawnDistance;
    struct AnimationCurve* FadeoutCurve;
    struct AnimationCurve* ScaleCurve;
    struct GameObject* AnimatorTarget;
    struct Renderer* m_targetRenderer;
    bool m_shouldSetSettings;
    struct Vector2 ConstantForce;
    struct Vector2 LocalConstantForce;
    struct Vector2 Startspeed;
    struct Vector2 RandomStartSpeed;
    struct Vector2 LocalStartSpeed;
    struct Vector2 LocalRandomStartSpeed;
    bool UseCenterOfCroppedSprite;
    struct SpriteAnimator* m_animator;
    struct SpriteAnimatorWithTransitions* m_transAnimator;
    struct SeinNaruComboAnimator* m_comboAnimator;
    struct Vector3 m_lastSpawnPoint;
    struct Vector3 m_previousPosition;
    float m_travelDistance;
    struct GameObject* m_trailParent;
    struct Renderer* m_renderer;
    struct Renderer* m_parentRenderer;
    float m_lastTime;
    struct UberGhostTrailMeshUpdate* m_meshUpdater;
    float m_deltaTime;
    struct Vector2 m_previousCenterOffset;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberGhostTrail__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberGhostTrail__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/SeinNaruComboAnimator.h>
#include <Modloader/app/structs/SpriteAnimator.h>
#include <Modloader/app/structs/SpriteAnimatorWithTransitions.h>
#include <Modloader/app/structs/UberGhostTrailMeshUpdate.h>
#endif
#undef IL2CPP_STRUCT_UberGhostTrail__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberGhostTrail__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberGhostTrail__Fields_FWDDECL)
#include <Modloader/app/structs/UberGhostTrail__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberGhostTrail__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
