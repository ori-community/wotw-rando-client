#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimationMetaDataDrivenTransform__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimationMetaDataDrivenTransform__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationMetaDataDrivenTransform__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_AnimationMetaDataDrivenTransform__Fields_DEFINED
struct SpriteAnimator;
struct SpriteAnimatorWithTransitions;
struct String;
struct AnimationMetaData_AnimationData;
struct TextureAnimation;
struct TextureAnimator;
struct Transform;
struct AnimationMetaDataDrivenTransform__Fields {
    struct MonoBehaviour__Fields _;
    struct SpriteAnimator* Animator;
    struct SpriteAnimatorWithTransitions* SpriteAnimatorWithTransitions;
    bool UseDelta;
    bool ShouldFollowCameraPlane;
    struct String* NodeName;
    bool DontInterpolate;
    bool ShouldUpdateScale;
    bool ShouldUpdateRotation;
    struct AnimationMetaData_AnimationData* m_data;
    struct TextureAnimation* m_textureAnimation;
    struct TextureAnimator* m_textureAnimator;
    struct Transform* m_targetTransform;
    struct Vector3 m_originalScale;
    struct Vector3 m_originalLocalPosition;
    struct Transform* m_transform;
    bool m_isInitialized;
    struct TextureAnimation* m_lastAnimation;
    bool m_previousValue;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AnimationMetaDataDrivenTransform__Fields_FWDDECL)
#define IL2CPP_STRUCT_AnimationMetaDataDrivenTransform__Fields_FWDDECL
#include <Modloader/app/structs/AnimationMetaData_AnimationData.h>
#include <Modloader/app/structs/SpriteAnimator.h>
#include <Modloader/app/structs/SpriteAnimatorWithTransitions.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TextureAnimation.h>
#include <Modloader/app/structs/TextureAnimator.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_AnimationMetaDataDrivenTransform__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationMetaDataDrivenTransform__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AnimationMetaDataDrivenTransform__Fields_FWDDECL)
#include <Modloader/app/structs/AnimationMetaDataDrivenTransform__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimationMetaDataDrivenTransform__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
