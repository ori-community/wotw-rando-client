#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Mine__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Mine__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Mine__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_Mine__Fields_DEFINED
struct GameObject;
struct AnimationCurve;
struct SoundProvider;
struct BaseAnimator;
struct Rigidbody;
struct IDamageReciever__Array;
struct Mine__Fields {
    struct MonoBehaviour__Fields _;
    struct GameObject* Explosion;
    float Timeout;
    float BlinkingInitialValue;
    float BlinkDuration;
    struct AnimationCurve* BlinkCurve;
    float Damage;
    struct SoundProvider* DropMineSoundProvider;
    struct SoundProvider* BlinkingSoundProvider;
    float Gravity;
    float MaxFallSpeed;
    bool InAir;
    struct BaseAnimator* BlinkAnimator;
    float m_currentTime;
    struct Rigidbody* m_rigidbody;
    float m_currentBlinkTime;
    float m_currentFallSpeed;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;

    struct IDamageReciever__Array* m_damageReceivers;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Mine__Fields_FWDDECL)
#define IL2CPP_STRUCT_Mine__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/BaseAnimator.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IDamageReciever__Array.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/SoundProvider.h>
#endif
#undef IL2CPP_STRUCT_Mine__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Mine__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Mine__Fields_FWDDECL)
#include <Modloader/app/structs/Mine__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Mine__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
