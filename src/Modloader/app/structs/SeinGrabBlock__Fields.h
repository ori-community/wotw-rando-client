#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinGrabBlock__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinGrabBlock__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinGrabBlock__Fields_DEFINED)
#include <Modloader/app/structs/CharacterState__Fields.h>
#include <Modloader/app/structs/SeinGrabBlock_State__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_CharacterState__Fields_DEFINED) && defined(IL2CPP_STRUCT_SeinGrabBlock_State__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_SeinGrabBlock__Fields_DEFINED
struct MoonAnimation;
struct FloatAnimationParameter;
struct HorizontalPlatformMovementSettings_SpeedMultiplierSet;
struct SurfaceToSoundProviderMap;
struct SoundProvider;
struct SoundPlayer;
struct IPushable;
struct PlayerGrabPushPullHintSystem;
struct SeinGrabBlock__Fields {
    struct CharacterState__Fields _;
    bool _InRange_k__BackingField;
    bool _IsGrabbing_k__BackingField;
    SeinGrabBlock_State__Enum CurrentState;

    struct MoonAnimation* CantPull;
    struct MoonAnimation* CantPush;
    struct MoonAnimation* Idle;
    struct MoonAnimation* Pull;
    struct MoonAnimation* Push;
    struct FloatAnimationParameter* SlopeIdle;
    struct FloatAnimationParameter* SlopeMoving;
    struct HorizontalPlatformMovementSettings_SpeedMultiplierSet* PullMultiplier;
    struct HorizontalPlatformMovementSettings_SpeedMultiplierSet* PushMultipler;
    struct SurfaceToSoundProviderMap* PullBlockSound;
    struct SurfaceToSoundProviderMap* PushBlockSound;
    struct SoundProvider* GrabBlockSound;
    struct SoundProvider* ReleaseBlockSound;
    float FootstepsSoundsPerSecond;
    float m_currentTime;
    float m_distanceToBlock;
    struct SoundPlayer* m_lastPullSoundPlayer;
    struct SoundPlayer* m_lastPushSoundPlayer;
    float m_nextPullTime;
    float m_nextPushTime;
    struct IPushable* m_pushable;
    SeinGrabBlock_State__Enum NewState;

    struct Vector3 m_lastFramePushablePosition;
    struct PlayerGrabPushPullHintSystem* Hints;
    bool m_spriteMirrorLock;
    float PullRayDistance;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinGrabBlock__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinGrabBlock__Fields_FWDDECL
#include <Modloader/app/structs/FloatAnimationParameter.h>
#include <Modloader/app/structs/HorizontalPlatformMovementSettings_SpeedMultiplierSet.h>
#include <Modloader/app/structs/IPushable.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/PlayerGrabPushPullHintSystem.h>
#include <Modloader/app/structs/SoundPlayer.h>
#include <Modloader/app/structs/SoundProvider.h>
#include <Modloader/app/structs/SurfaceToSoundProviderMap.h>
#endif
#undef IL2CPP_STRUCT_SeinGrabBlock__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinGrabBlock__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinGrabBlock__Fields_FWDDECL)
#include <Modloader/app/structs/SeinGrabBlock__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinGrabBlock__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
