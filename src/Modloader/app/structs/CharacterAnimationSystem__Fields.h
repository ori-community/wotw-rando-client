#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CharacterAnimationSystem__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CharacterAnimationSystem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterAnimationSystem__Fields_DEFINED)
#include <Modloader/app/structs/ActiveAnimationHandle.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_ActiveAnimationHandle_DEFINED)
#define IL2CPP_STRUCT_CharacterAnimationSystem__Fields_DEFINED
struct CharacterSpriteMirror;
struct MoonAnimator;
struct MoonAnimation;
struct List_1_CharacterAnimationSystem_CharacterAnimationState_;
struct SpriteAnimatorWithTransitions;
struct CharacterAnimationSystem_CharacterAnimationState;
struct CharacterAnimationSystem__Fields {
    struct MonoBehaviour__Fields _;
    struct CharacterSpriteMirror* SpriteMirror;
    struct MoonAnimator* MoonAnimator;
    struct MoonAnimation* MissingAnimationPlaceholder;
    struct ActiveAnimationHandle m_currentState;
    int32_t m_rootMotionEnabled;
    struct List_1_CharacterAnimationSystem_CharacterAnimationState_* m_states;
    struct SpriteAnimatorWithTransitions* Animator;
    struct CharacterAnimationSystem_CharacterAnimationState* m_lastPlayingAnimationState;
    bool m_wasFacingLeft;
    float m_flipTime;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CharacterAnimationSystem__Fields_FWDDECL)
#define IL2CPP_STRUCT_CharacterAnimationSystem__Fields_FWDDECL
#include <Modloader/app/structs/CharacterAnimationSystem_CharacterAnimationState.h>
#include <Modloader/app/structs/CharacterSpriteMirror.h>
#include <Modloader/app/structs/List_1_CharacterAnimationSystem_CharacterAnimationState_.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/MoonAnimator.h>
#include <Modloader/app/structs/SpriteAnimatorWithTransitions.h>
#endif
#undef IL2CPP_STRUCT_CharacterAnimationSystem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterAnimationSystem__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CharacterAnimationSystem__Fields_FWDDECL)
#include <Modloader/app/structs/CharacterAnimationSystem__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CharacterAnimationSystem__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
