#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CartJump__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CartJump__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CartJump__Fields_DEFINED)
#include <Modloader/app/structs/CharacterState__Fields.h>
#include <Modloader/app/structs/SurfaceMaterialType__Enum.h>
#if defined(IL2CPP_STRUCT_CharacterState__Fields_DEFINED) && defined(IL2CPP_STRUCT_SurfaceMaterialType__Enum_DEFINED)
#define IL2CPP_STRUCT_CartJump__Fields_DEFINED
struct PlatformBehaviour;
struct GameObject;
struct LegacyTimelineSequence;
struct MoonTimeline;
struct CartAnimation;
struct Func_1_Boolean_;
struct Action;
struct Action_1_Single_;
struct CartJump__Fields {
    struct CharacterState__Fields _;
    struct PlatformBehaviour* PlatformBehaviour;
    float JumpHeight;
    float DurationSinceLastOnGroundThatWeCanStillJump;
    struct GameObject* JumpEffect;
    struct LegacyTimelineSequence* JumpSequence;
    struct MoonTimeline* JumpSequenceNew;
    struct CartAnimation* CartAnimation;
    float CartScaleForce;
    float timeSinceLastJump;
    SurfaceMaterialType__Enum m_currentJumpingMaterial;

    bool m_spriteMirrorLock;
    float m_timeWeCanJumpRemaining;
    struct Func_1_Boolean_* m_shouldJumpMoving;
    struct Action* onAnimationEnd;
    struct Action_1_Single_* OnJumpEvent;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CartJump__Fields_FWDDECL)
#define IL2CPP_STRUCT_CartJump__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Action_1_Single_.h>
#include <Modloader/app/structs/CartAnimation.h>
#include <Modloader/app/structs/Func_1_Boolean_.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/LegacyTimelineSequence.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/PlatformBehaviour.h>
#endif
#undef IL2CPP_STRUCT_CartJump__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CartJump__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CartJump__Fields_FWDDECL)
#include <Modloader/app/structs/CartJump__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CartJump__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
