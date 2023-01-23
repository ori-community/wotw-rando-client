#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BashAttackCritical__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BashAttackCritical__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BashAttackCritical__Fields_DEFINED)
#include <Modloader/app/structs/BashAttackCritical_State__Enum.h>
#include <Modloader/app/structs/Suspendable__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Suspendable__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_BashAttackCritical_State__Enum_DEFINED)
#define IL2CPP_STRUCT_BashAttackCritical__Fields_DEFINED
struct Texture2D;
struct BashAttackCritical__Fields {
    struct Suspendable__Fields _;
    float ChargingDuration;
    float CriticalDuration;
    float FailedDuration;
    float ShakePeriod;
    float ShakeAmount;
    struct Vector3 m_localScale;
    BashAttackCritical_State__Enum CurrentState;

    bool m_suspended;
    float m_stateCurrentTime;
    struct Texture2D* BashAttackArrow;
    struct Texture2D* RedirectArrow;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BashAttackCritical__Fields_FWDDECL)
#define IL2CPP_STRUCT_BashAttackCritical__Fields_FWDDECL
#include <Modloader/app/structs/Texture2D.h>
#endif
#undef IL2CPP_STRUCT_BashAttackCritical__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BashAttackCritical__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BashAttackCritical__Fields_FWDDECL)
#include <Modloader/app/structs/BashAttackCritical__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BashAttackCritical__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
