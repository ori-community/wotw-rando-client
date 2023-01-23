#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CollisionSoundSource__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CollisionSoundSource__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CollisionSoundSource__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/WwiseEventSystem_SoundHandle.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_WwiseEventSystem_SoundHandle_DEFINED)
#define IL2CPP_STRUCT_CollisionSoundSource__Fields_DEFINED
struct CollisionBasedSoundProvider;
struct SoundSource;
struct Event_1;
struct RTPC;
struct Rigidbody;
struct Collider;
struct SoundHost;
struct CollisionSoundSource__Fields {
    struct MonoBehaviour__Fields _;
    struct CollisionBasedSoundProvider* LegacyCollisionSoundProvider;
    struct SoundSource* LegacyContinuousSoundSource;
    struct Event_1* CollisionSound;
    struct RTPC* CollisionSoundRtpc;
    struct Event_1* ContinuousSound;
    struct RTPC* ContinuousSoundRtpc;
    float MinImpulse;
    bool SilenceContinuousRtpc;
    float RtpcDivisor;
    int32_t m_collisionCount;
    struct Rigidbody* m_rigidbody;
    struct Collider* m_collisionReciever;
    struct SoundHost* m_soundHost;
    struct WwiseEventSystem_SoundHandle m_soundHandle;
    float m_contactTimeout;
    float m_contactTime;
    float m_contactLostTime;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CollisionSoundSource__Fields_FWDDECL)
#define IL2CPP_STRUCT_CollisionSoundSource__Fields_FWDDECL
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/CollisionBasedSoundProvider.h>
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/RTPC.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/SoundHost.h>
#include <Modloader/app/structs/SoundSource.h>
#endif
#undef IL2CPP_STRUCT_CollisionSoundSource__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CollisionSoundSource__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CollisionSoundSource__Fields_FWDDECL)
#include <Modloader/app/structs/CollisionSoundSource__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CollisionSoundSource__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
