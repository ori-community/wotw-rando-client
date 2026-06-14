#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayableCharacterControlAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayableCharacterControlAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayableCharacterControlAnimator__Fields_DEFINED)
#include <Modloader/app/structs/CinematicCharacterAnimator_FacingDirection__Enum.h>
#include <Modloader/app/structs/PlayableCharacterControlAnimator_PlayableCharacters__Enum.h>
#include <Modloader/app/structs/TimelineEntity__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_TimelineEntity__Fields_DEFINED) && defined(IL2CPP_STRUCT_PlayableCharacterControlAnimator_PlayableCharacters__Enum_DEFINED) && defined(IL2CPP_STRUCT_CinematicCharacterAnimator_FacingDirection__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_PlayableCharacterControlAnimator__Fields_DEFINED
struct Transform;
struct ICharacter;
struct GameObject;
struct AnimationCurve;
struct MoonReference_1_ICharacterInteractable_;
struct MoonAnimation;
struct PlayableCharacterControlAnimator__Fields {
    struct TimelineEntity__Fields _;
    PlayableCharacterControlAnimator_PlayableCharacters__Enum PlayableCharacter;

    struct Transform* OverrideStartPosition;
    struct ICharacter* m_originalCharacter;
    struct GameObject* m_instance;
    CinematicCharacterAnimator_FacingDirection__Enum Direction;

    struct Transform* TargetPosition;
    struct Vector3 TargetOffset;
    struct AnimationCurve* SpeedByDistanceTraveledNormalized;
    float MaxDuration;
    float m_time;
    float m_distance;
    float m_startDistance;
    bool m_ended;
    struct Vector3 m_initPos;
    bool JumpOverGaps;
    struct MoonReference_1_ICharacterInteractable_* InteractOnEnd;
    struct MoonAnimation* ReachedTargetAnimation;
    struct MoonAnimation* EndAnimation;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayableCharacterControlAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlayableCharacterControlAnimator__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/ICharacter.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/MoonReference_1_ICharacterInteractable_.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_PlayableCharacterControlAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayableCharacterControlAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlayableCharacterControlAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/PlayableCharacterControlAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayableCharacterControlAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
