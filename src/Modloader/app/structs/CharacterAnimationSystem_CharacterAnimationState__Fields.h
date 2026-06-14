#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CharacterAnimationSystem_CharacterAnimationState__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CharacterAnimationSystem_CharacterAnimationState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterAnimationSystem_CharacterAnimationState__Fields_DEFINED)
#define IL2CPP_STRUCT_CharacterAnimationSystem_CharacterAnimationState__Fields_DEFINED
struct TextureAnimationWithTransitions;
struct String;
struct Func_1_Boolean_;
struct Action;
struct __declspec(align(8)) CharacterAnimationSystem_CharacterAnimationState__Fields {
    int32_t Layer;
    struct TextureAnimationWithTransitions* Animation;
    struct String* AnimationName;
    struct Func_1_Boolean_* ConditionFunction;
    bool PlayOnce;
    struct Action* OnStopPlaying;
    struct Action* OnStartPlaying;
    bool KeepFrame;
    bool m_onStopPlayingActionInvoked;
};
#endif
#if !defined(IL2CPP_STRUCT_CharacterAnimationSystem_CharacterAnimationState__Fields_FWDDECL)
#define IL2CPP_STRUCT_CharacterAnimationSystem_CharacterAnimationState__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Func_1_Boolean_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TextureAnimationWithTransitions.h>
#endif
#undef IL2CPP_STRUCT_CharacterAnimationSystem_CharacterAnimationState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterAnimationSystem_CharacterAnimationState__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CharacterAnimationSystem_CharacterAnimationState__Fields_FWDDECL)
#include <Modloader/app/structs/CharacterAnimationSystem_CharacterAnimationState__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CharacterAnimationSystem_CharacterAnimationState__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
