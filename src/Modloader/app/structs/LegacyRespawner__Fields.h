#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacyRespawner__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacyRespawner__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyRespawner__Fields_DEFINED)
#include <Modloader/app/structs/SaveSerialize__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_SaveSerialize__Fields_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_LegacyRespawner__Fields_DEFINED
struct GameObject;
struct LegacyScaleAnimator;
struct LegacyAnimator__Array;
struct SoundSource;
struct SceneRoot;
struct IRespawnReciever;
struct LegacyEntityDamageReciever;
struct LegacyRespawner__Fields {
    struct SaveSerialize__Fields _;
    struct GameObject* Target;
    bool RespawnOnTimeout;
    bool RespawnOnScreen;
    bool RespawnOnScrollLock;
    bool RespawnOnRestoreCheckpoint;
    float RespawnTime;
    float MinDistanceFromPlayer;
    struct LegacyScaleAnimator* ScaleAnimator;
    struct LegacyAnimator__Array* TimedRespawnAnimators;
    struct SoundSource* TimedRespawnSoundSource;
    float m_respawnTime;
    struct SceneRoot* m_sceneRoot;
    bool m_needsToRespawn;
    struct IRespawnReciever* m_respawnReciever;
    struct LegacyEntityDamageReciever* m_damageReceiver;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LegacyRespawner__Fields_FWDDECL)
#define IL2CPP_STRUCT_LegacyRespawner__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IRespawnReciever.h>
#include <Modloader/app/structs/LegacyAnimator__Array.h>
#include <Modloader/app/structs/LegacyEntityDamageReciever.h>
#include <Modloader/app/structs/LegacyScaleAnimator.h>
#include <Modloader/app/structs/SceneRoot.h>
#include <Modloader/app/structs/SoundSource.h>
#endif
#undef IL2CPP_STRUCT_LegacyRespawner__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyRespawner__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LegacyRespawner__Fields_FWDDECL)
#include <Modloader/app/structs/LegacyRespawner__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacyRespawner__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
