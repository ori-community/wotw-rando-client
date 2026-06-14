#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinDoubleJump__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinDoubleJump__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinDoubleJump__Fields_DEFINED)
#include <Modloader/app/structs/ActiveAnimationHandle.h>
#include <Modloader/app/structs/CharacterState__Fields.h>
#include <Modloader/app/structs/WwiseEventSystem_SoundHandle.h>
#if defined(IL2CPP_STRUCT_CharacterState__Fields_DEFINED) && defined(IL2CPP_STRUCT_ActiveAnimationHandle_DEFINED) && defined(IL2CPP_STRUCT_WwiseEventSystem_SoundHandle_DEFINED)
#define IL2CPP_STRUCT_SeinDoubleJump__Fields_DEFINED
struct SoundPlayer;
struct SeinDoubleJump__Fields {
    struct CharacterState__Fields _;
    float JumpStrength;
    float InterruptibleByTurnNormalizedTime;
    struct SoundPlayer* m_doubleJumpSound;
    float m_doubleJumpTime;
    int32_t m_numberOfJumpsAvailable;
    float m_remainingLockTime;
    bool m_isDoubleJumping;
    bool m_isInAirCached;
    struct ActiveAnimationHandle m_activeAnimation;
    struct WwiseEventSystem_SoundHandle m_doubleJumpSoundHandler;
    float m_earliestCancelTime;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinDoubleJump__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinDoubleJump__Fields_FWDDECL
#include <Modloader/app/structs/SoundPlayer.h>
#endif
#undef IL2CPP_STRUCT_SeinDoubleJump__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinDoubleJump__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinDoubleJump__Fields_FWDDECL)
#include <Modloader/app/structs/SeinDoubleJump__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinDoubleJump__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
