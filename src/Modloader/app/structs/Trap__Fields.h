#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Trap__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Trap__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Trap__Fields_DEFINED)
#include <Modloader/app/structs/DamageType__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_DamageType__Enum_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_Trap__Fields_DEFINED
struct GameObject;
struct AnimationCurve;
struct Renderer;
struct IAttackable;
struct Trap__Fields {
    struct MonoBehaviour__Fields _;
    struct GameObject* Explosion;
    float Timeout;
    float Range;
    float DamageDuration;
    DamageType__Enum DamageType;

    float DamagePerSecond;
    struct AnimationCurve* TrapTimeoutBlinkingCurve;
    bool m_triggered;
    float m_currentTime;
    float m_trapTime;
    struct Renderer* m_renderer;
    struct IAttackable* m_trappedTarget;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Trap__Fields_FWDDECL)
#define IL2CPP_STRUCT_Trap__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IAttackable.h>
#include <Modloader/app/structs/Renderer.h>
#endif
#undef IL2CPP_STRUCT_Trap__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Trap__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Trap__Fields_FWDDECL)
#include <Modloader/app/structs/Trap__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Trap__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
