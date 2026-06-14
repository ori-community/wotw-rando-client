#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinJump__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinJump__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinJump__Fields_DEFINED)
#include <Modloader/app/structs/ActiveAnimationHandle.h>
#include <Modloader/app/structs/CharacterState__Fields.h>
#include <Modloader/app/structs/SurfaceMaterialType__Enum.h>
#if defined(IL2CPP_STRUCT_CharacterState__Fields_DEFINED) && defined(IL2CPP_STRUCT_SurfaceMaterialType__Enum_DEFINED) && defined(IL2CPP_STRUCT_ActiveAnimationHandle_DEFINED)
#define IL2CPP_STRUCT_SeinJump__Fields_DEFINED
struct MaterialBasedSeinEffectsMap;
struct Func_1_Boolean_;
struct Action;
struct Action_1_Single_;
struct List_1_UnityEngine_Component_;
struct CharacterTimelineTurning;
struct SeinJump__Fields {
    struct CharacterState__Fields _;
    float BackflipJumpHeight;
    float CrouchJumpHeight;
    float DurationSinceLastOnGroundThatWeCanStillJump;
    float FirstJumpHeight;
    float JumpIdleHeight;
    float JumpImpulse;
    SurfaceMaterialType__Enum m_currentJumpingMaterial;

    float SecondJumpHeight;
    float ThirdJumpHeight;
    float SpringJumpTurnAllowedNormalizedTime;
    struct MaterialBasedSeinEffectsMap* SeinEffects;
    float m_bunnyHopTimeRemaining;
    int32_t m_jumpIdleNumber;
    int32_t m_runningJumpNumber;
    bool m_spriteMirrorLock;
    float m_timeWeCanJumpRemaining;
    struct Func_1_Boolean_* m_shouldJumpMoving;
    struct Action* onAnimationEnd;
    struct Action* m_directionFlipTransitionAction;
    int32_t m_previusDirection;
    bool _PerformingSpringJump_k__BackingField;
    struct ActiveAnimationHandle m_currentFlipAnimation;
    struct ActiveAnimationHandle m_currentSpringJumpAnimation;
    float m_timeSinceLastJump;
    struct Action_1_Single_* OnJumpEvent;
    struct List_1_UnityEngine_Component_* m_useGenericJumpFlipTransitionAsDefault;
    struct CharacterTimelineTurning* m_currentTurning;
    bool _WantsToFaceLeft_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinJump__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinJump__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Action_1_Single_.h>
#include <Modloader/app/structs/CharacterTimelineTurning.h>
#include <Modloader/app/structs/Func_1_Boolean_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Component_.h>
#include <Modloader/app/structs/MaterialBasedSeinEffectsMap.h>
#endif
#undef IL2CPP_STRUCT_SeinJump__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinJump__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinJump__Fields_FWDDECL)
#include <Modloader/app/structs/SeinJump__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinJump__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
