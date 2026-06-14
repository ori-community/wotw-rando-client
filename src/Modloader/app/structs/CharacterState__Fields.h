#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CharacterState__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CharacterState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterState__Fields_DEFINED)
#include <Modloader/app/structs/SaveSerialize__Fields.h>
#if defined(IL2CPP_STRUCT_SaveSerialize__Fields_DEFINED)
#define IL2CPP_STRUCT_CharacterState__Fields_DEFINED
struct DynamicDataResolver;
struct GameObject;
struct MoonAnimator;
struct SeinLogicCycle_IsAllowedDelegate;
struct CharacterStatePuppet;
struct SeinCharacter;
struct Boolean__Array;
struct String;
struct CharacterState__Fields {
    struct SaveSerialize__Fields _;
    struct DynamicDataResolver* m_dataResolver;
    struct GameObject* SeinCharacterPreview;
    struct MoonAnimator* m_previewAnimator;
    struct SeinLogicCycle_IsAllowedDelegate* IsAllowed;
    struct GameObject* PuppetPrefab;
    struct CharacterStatePuppet* m_characterStatePuppet;
    bool DebugStateOutput;
    bool IsExclusiveActiveState;
    int32_t m_id;
    struct SeinCharacter* m_sein;
    bool m_isActive;
    struct Boolean__Array* m_canBeInterruptedBy;
    bool m_canInputBeQueued;
    struct String* CharacterStateUpdateString;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CharacterState__Fields_FWDDECL)
#define IL2CPP_STRUCT_CharacterState__Fields_FWDDECL
#include <Modloader/app/structs/Boolean__Array.h>
#include <Modloader/app/structs/CharacterStatePuppet.h>
#include <Modloader/app/structs/DynamicDataResolver.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MoonAnimator.h>
#include <Modloader/app/structs/SeinCharacter.h>
#include <Modloader/app/structs/SeinLogicCycle_IsAllowedDelegate.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_CharacterState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterState__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CharacterState__Fields_FWDDECL)
#include <Modloader/app/structs/CharacterState__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CharacterState__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
