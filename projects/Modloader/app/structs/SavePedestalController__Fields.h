#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SavePedestalController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SavePedestalController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SavePedestalController__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/RaycastHit.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_RaycastHit_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_SavePedestalController__Fields_DEFINED
struct MoonAnimation;
struct GameObject;
struct SoundSource;
struct SoundProvider;
struct SerializedByteUberState;
struct MessageProvider;
struct SoundPlayer;
struct List_1_GameMapSavePedestal_;
struct SavePedestalController__Fields {
    struct MonoBehaviour__Fields _;
    int32_t LerpFramesWhenSaving;
    struct MoonAnimation* TeleportingStart;
    struct MoonAnimation* TeleportingStartAir;
    struct MoonAnimation* TeleportingLoop;
    struct MoonAnimation* TeleportingLoopAir;
    struct MoonAnimation* TeleportingFinish;
    struct GameObject* TeleportingStartPrefab;
    struct SoundSource* TeleportingTwirlAnimationSound;
    struct SoundProvider* TeleportingStartSound;
    struct SoundProvider* TeleportingBloomSound;
    struct SoundProvider* TeleportingEndSound;
    struct SerializedByteUberState* MasterPedestalRepairedState;
    struct SerializedByteUberState* FastTravelEnabledState;
    struct MessageProvider* OtherPedestalsInactiveMessage;
    struct MessageProvider* TeleportDeniedInStateMessage;
    struct MessageProvider* MasterPedestalInactiveMessage;
    struct MessageProvider* SaveHintMessage;
    struct MessageProvider* SaveAndTeleportHintMessage;
    struct SoundPlayer* m_teleportingStartSound;
    float m_startTime;
    bool m_raycastGroundCheck;
    struct RaycastHit hit;
    bool DontTeleportForAnimationTesting;
    float NoTeleportAnimationTime;
    struct List_1_GameMapSavePedestal_* Pedestals;
    struct GameObject* BloomFade;
    float BloomFadeDuration;
    struct GameObject* TeleporterFinishEffect;
    struct GameObject* m_startEffectInstance;
    bool RequireOnGround;
    bool m_isTeleporting;
    bool m_isBlooming;
    float m_bloomCurrentTime;
    bool m_startedTeleportOnGround;
    bool m_shouldMoveCameraInstantlyNextFrame;
    bool ActivateOnVisit;
    struct Vector3 m_teleporterTargetPosition;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SavePedestalController__Fields_FWDDECL)
#define IL2CPP_STRUCT_SavePedestalController__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/List_1_GameMapSavePedestal_.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/SerializedByteUberState.h>
#include <Modloader/app/structs/SoundPlayer.h>
#include <Modloader/app/structs/SoundProvider.h>
#include <Modloader/app/structs/SoundSource.h>
#endif
#undef IL2CPP_STRUCT_SavePedestalController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SavePedestalController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SavePedestalController__Fields_FWDDECL)
#include <Modloader/app/structs/SavePedestalController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SavePedestalController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
