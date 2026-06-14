#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KuJump__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KuJump__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KuJump__Fields_DEFINED)
#include <Modloader/app/structs/KuState__Fields.h>
#if defined(IL2CPP_STRUCT_KuState__Fields_DEFINED)
#define IL2CPP_STRUCT_KuJump__Fields_DEFINED
struct MoonAnimation;
struct SurfaceToSoundProviderMap;
struct Action_1_Single_;
struct Event_1;
struct CharacterTimelineTurning;
struct KuJump__Fields {
    struct KuState__Fields _;
    struct MoonAnimation* RunningJumpAnimation;
    struct MoonAnimation* IdleJumpAnimation;
    struct MoonAnimation* SpringRunningJumpAnimation;
    struct MoonAnimation* SpringIdleJumpAnimation;
    struct MoonAnimation* JumpDownAnimation;
    float JumpHeight;
    float CoyoteTime;
    struct SurfaceToSoundProviderMap* JumpSounds;
    struct Action_1_Single_* OnJump;
    struct Event_1* KuCrouchGoThroughSound;
    float JumpImpulse;
    struct CharacterTimelineTurning* JumpTurning;
    struct CharacterTimelineTurning* JumpIdleTurning;
    struct CharacterTimelineTurning* m_currentTurning;
    float m_springJumpTimer;
    float m_timeWeCanJumpRemaining;
    bool _WantsToFaceLeft_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KuJump__Fields_FWDDECL)
#define IL2CPP_STRUCT_KuJump__Fields_FWDDECL
#include <Modloader/app/structs/Action_1_Single_.h>
#include <Modloader/app/structs/CharacterTimelineTurning.h>
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/SurfaceToSoundProviderMap.h>
#endif
#undef IL2CPP_STRUCT_KuJump__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KuJump__Fields_DEFINED) && !defined(IL2CPP_STRUCT_KuJump__Fields_FWDDECL)
#include <Modloader/app/structs/KuJump__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KuJump__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
