#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CharacterAnimationController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CharacterAnimationController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterAnimationController__Fields_DEFINED)
#include <Modloader/app/structs/Suspendable__Fields.h>
#if defined(IL2CPP_STRUCT_Suspendable__Fields_DEFINED)
#define IL2CPP_STRUCT_CharacterAnimationController__Fields_DEFINED
struct List_1_CharacterAnimationStateBase_;
struct CharacterAnimationStateBase;
struct SpriteAnimatorWithTransitions;
struct CharacterSpriteMirror;
struct CharacterAnimationController__Fields {
    struct Suspendable__Fields _;
    struct List_1_CharacterAnimationStateBase_* States;
    struct CharacterAnimationStateBase* CurrentState;
    struct SpriteAnimatorWithTransitions* SpriteAnimator;
    struct CharacterSpriteMirror* SpriteMirror;
    bool m_wasFacingLeft;
    bool _IsSuspended_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CharacterAnimationController__Fields_FWDDECL)
#define IL2CPP_STRUCT_CharacterAnimationController__Fields_FWDDECL
#include <Modloader/app/structs/CharacterAnimationStateBase.h>
#include <Modloader/app/structs/CharacterSpriteMirror.h>
#include <Modloader/app/structs/List_1_CharacterAnimationStateBase_.h>
#include <Modloader/app/structs/SpriteAnimatorWithTransitions.h>
#endif
#undef IL2CPP_STRUCT_CharacterAnimationController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterAnimationController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CharacterAnimationController__Fields_FWDDECL)
#include <Modloader/app/structs/CharacterAnimationController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CharacterAnimationController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
