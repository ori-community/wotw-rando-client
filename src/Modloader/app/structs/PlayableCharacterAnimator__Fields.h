#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayableCharacterAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayableCharacterAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayableCharacterAnimator__Fields_DEFINED)
#include <Modloader/app/structs/PlayableCharacterAnimator_PlayableCharacters__Enum.h>
#include <Modloader/app/structs/TimelineEntity__Fields.h>
#if defined(IL2CPP_STRUCT_TimelineEntity__Fields_DEFINED) && defined(IL2CPP_STRUCT_PlayableCharacterAnimator_PlayableCharacters__Enum_DEFINED)
#define IL2CPP_STRUCT_PlayableCharacterAnimator__Fields_DEFINED
struct GameObject;
struct Transform;
struct ICharacter;
struct PlayableCharacterAnimator__Fields {
    struct TimelineEntity__Fields _;
    PlayableCharacterAnimator_PlayableCharacters__Enum PlayableCharacter;

    struct GameObject* CharacterToInstantiateOnStart;
    struct Transform* StartPosition;
    bool DisposeCharacterOnFinish;
    bool DisableCarry;
    struct ICharacter* m_originalCharacter;
    struct GameObject* m_instance;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayableCharacterAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlayableCharacterAnimator__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/ICharacter.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_PlayableCharacterAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayableCharacterAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlayableCharacterAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/PlayableCharacterAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayableCharacterAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
