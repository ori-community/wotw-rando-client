#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KuDoubleJump__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KuDoubleJump__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KuDoubleJump__Fields_DEFINED)
#include <Modloader/app/structs/KuState__Fields.h>
#if defined(IL2CPP_STRUCT_KuState__Fields_DEFINED)
#define IL2CPP_STRUCT_KuDoubleJump__Fields_DEFINED
struct MoonAnimation;
struct Event_1;
struct CharacterTimelineTurning;
struct KuDoubleJump__Fields {
    struct KuState__Fields _;
    struct MoonAnimation* DoubleJumpAnimation;
    struct MoonAnimation* IdleDoubleJumpAnimation;
    float JumpHeight;
    bool JumpSustain;
    struct Event_1* DoubleJumpSoundEvent;
    float m_doubleJumpTime;
    int32_t m_numberOfJumpsAvailable;
    float m_remainingLockTime;
    struct CharacterTimelineTurning* DoubleJumpTurning;
    struct CharacterTimelineTurning* DoubleJumpIdleTurning;
    struct CharacterTimelineTurning* m_currentTurning;
    bool _WantsToFaceLeft_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KuDoubleJump__Fields_FWDDECL)
#define IL2CPP_STRUCT_KuDoubleJump__Fields_FWDDECL
#include <Modloader/app/structs/CharacterTimelineTurning.h>
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/MoonAnimation.h>
#endif
#undef IL2CPP_STRUCT_KuDoubleJump__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KuDoubleJump__Fields_DEFINED) && !defined(IL2CPP_STRUCT_KuDoubleJump__Fields_FWDDECL)
#include <Modloader/app/structs/KuDoubleJump__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KuDoubleJump__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
