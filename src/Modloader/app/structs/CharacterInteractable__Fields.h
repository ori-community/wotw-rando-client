#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CharacterInteractable__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CharacterInteractable__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterInteractable__Fields_DEFINED)
#include <Modloader/app/structs/CharacterInteractableType__Enum.h>
#include <Modloader/app/structs/Suspendable__Fields.h>
#if defined(IL2CPP_STRUCT_Suspendable__Fields_DEFINED) && defined(IL2CPP_STRUCT_CharacterInteractableType__Enum_DEFINED)
#define IL2CPP_STRUCT_CharacterInteractable__Fields_DEFINED
struct PlayerStayInsideZoneTrigger;
struct Func_2_ICharacter_Boolean_;
struct MessageProvider;
struct Condition_1;
struct CharacterInteractable__Fields {
    struct Suspendable__Fields _;
    bool _IsSuspended_k__BackingField;
    CharacterInteractableType__Enum Type;

    struct PlayerStayInsideZoneTrigger* InteractionZone;
    struct Func_2_ICharacter_Boolean_* CanCharacterInteractModifier;
    struct MessageProvider* InteractionHint;
    struct Condition_1* InteractionCondition;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CharacterInteractable__Fields_FWDDECL)
#define IL2CPP_STRUCT_CharacterInteractable__Fields_FWDDECL
#include <Modloader/app/structs/Condition_1.h>
#include <Modloader/app/structs/Func_2_ICharacter_Boolean_.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/PlayerStayInsideZoneTrigger.h>
#endif
#undef IL2CPP_STRUCT_CharacterInteractable__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterInteractable__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CharacterInteractable__Fields_FWDDECL)
#include <Modloader/app/structs/CharacterInteractable__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CharacterInteractable__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
