#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiritLeashEffectPoseAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiritLeashEffectPoseAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritLeashEffectPoseAnimator__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_SpiritLeashEffectPoseAnimator__Fields_DEFINED
struct AnimationCurve;
struct LineRenderer;
struct Transform;
struct SeinCharacter;
struct IAttackable;
struct Vector3__Array;
struct SpiritLeashEffectKeyframe__Array;
struct SpiritLeashEffectPoseAnimator__Fields {
    struct MonoBehaviour__Fields _;
    struct AnimationCurve* CircleScaleAnimation;
    struct LineRenderer* LineRenderer;
    struct Transform* LightObject;
    struct Transform* CircleTransform;
    struct SeinCharacter* m_sein;
    struct IAttackable* m_target;
    struct Vector3 m_targetRelativePosition;
    struct Transform* m_targetTransform;
    struct Vector3 m_circleStartScale;
    float EffectDuration;
    float m_currentTime;
    struct Transform* GlowSprite;
    struct Vector3 GlowOffsetStart;
    struct Vector3 GlowOffsetEnd;
    struct AnimationCurve* DistanceOverTime;
    struct AnimationCurve* TransparencyOverTime;
    int32_t VertexCount;
    struct Vector3__Array* m_positions;
    struct SpiritLeashEffectKeyframe__Array* Frames;
    struct AnimationCurve* widthCurve;
    struct AnimationCurve* widthOverTime;
    float randomTimeOffset;
    float EndDistanceOffset;
    float EndDistancePerpendicularOffset;
    struct Transform* m_handTransformCache;
    struct Vector2 endOffset;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiritLeashEffectPoseAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpiritLeashEffectPoseAnimator__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/IAttackable.h>
#include <Modloader/app/structs/LineRenderer.h>
#include <Modloader/app/structs/SeinCharacter.h>
#include <Modloader/app/structs/SpiritLeashEffectKeyframe__Array.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector3__Array.h>
#endif
#undef IL2CPP_STRUCT_SpiritLeashEffectPoseAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritLeashEffectPoseAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpiritLeashEffectPoseAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/SpiritLeashEffectPoseAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiritLeashEffectPoseAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
