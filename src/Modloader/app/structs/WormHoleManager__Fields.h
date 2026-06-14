#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WormHoleManager__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WormHoleManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WormHoleManager__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_WormHoleManager__Fields_DEFINED
struct WormHole__Array;
struct MortarWormEnemy;
struct WormHole;
struct WormHoleManager__Fields {
    struct MonoBehaviour__Fields _;
    struct WormHole__Array* m_wormHoles;
    struct MortarWormEnemy* _mMortarWormEnemy;
    float m_timeBetweenHolesRemaining;
    bool IsAggressive;
    struct WormHole* m_lastHole;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WormHoleManager__Fields_FWDDECL)
#define IL2CPP_STRUCT_WormHoleManager__Fields_FWDDECL
#include <Modloader/app/structs/MortarWormEnemy.h>
#include <Modloader/app/structs/WormHole.h>
#include <Modloader/app/structs/WormHole__Array.h>
#endif
#undef IL2CPP_STRUCT_WormHoleManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WormHoleManager__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WormHoleManager__Fields_FWDDECL)
#include <Modloader/app/structs/WormHoleManager__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WormHoleManager__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
