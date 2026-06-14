#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinWallJump__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinWallJump__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinWallJump__Fields_DEFINED)
#include <Modloader/app/structs/ActiveAnimationHandle.h>
#include <Modloader/app/structs/CharacterState__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_CharacterState__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_ActiveAnimationHandle_DEFINED)
#define IL2CPP_STRUCT_SeinWallJump__Fields_DEFINED
struct Coroutine;
struct Action_1_UnityEngine_Vector2_;
struct SeinWallJump__Fields {
    struct CharacterState__Fields _;
    struct Vector2 JumpStrength;
    struct Vector2 JumpStrengthUnderCeiling;
    float LockDoubleJumpTowardsDuration;
    float WallJumpImpulse;
    float CeilingTestMaxDistance;
    float AirNoDecelerationDurationForNoInputWallJump;
    bool m_spriteMirrorLock;
    float InwardsJumpAssistTime;
    float InwardsReJumpRayMaxDistance;
    bool m_canPerformAssistedWallJump;
    float m_inwardsJumpAssistTimer;
    float m_lastInwardsJumpDirection;
    struct Coroutine* m_coro;
    struct ActiveAnimationHandle m_currentFlipAnimation;
    int32_t m_changeDirectionWhileJumpingCouroutinesCount;
    struct Action_1_UnityEngine_Vector2_* OnWallJumpEvent;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinWallJump__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinWallJump__Fields_FWDDECL
#include <Modloader/app/structs/Action_1_UnityEngine_Vector2_.h>
#include <Modloader/app/structs/Coroutine.h>
#endif
#undef IL2CPP_STRUCT_SeinWallJump__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinWallJump__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinWallJump__Fields_FWDDECL)
#include <Modloader/app/structs/SeinWallJump__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinWallJump__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
