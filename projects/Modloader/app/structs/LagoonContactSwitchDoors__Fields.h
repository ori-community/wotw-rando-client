#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LagoonContactSwitchDoors__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LagoonContactSwitchDoors__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LagoonContactSwitchDoors__Fields_DEFINED)
#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Bounds_DEFINED)
#define IL2CPP_STRUCT_LagoonContactSwitchDoors__Fields_DEFINED
struct MoonTimeline;
struct LagoonContactSwitch__Array;
struct VerletStructure__Array;
struct LagoonContactSwitchDoors__Fields {
    struct MonoBehaviour__Fields _;
    struct MoonTimeline* Open;
    struct MoonTimeline* OpenedLoop;
    struct MoonTimeline* Close;
    struct MoonTimeline* ClosedLoop;
    struct LagoonContactSwitch__Array* AffectingSwitches;
    bool m_isOpened;
    bool m_isFrustumDisabled;
    bool m_appliedOpen;
    struct VerletStructure__Array* m_verletStructures;
    float m_delayBeforeDisableVerletStructuresTimer;
    bool m_insideFrustum;
    struct Bounds m_bounds;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LagoonContactSwitchDoors__Fields_FWDDECL)
#define IL2CPP_STRUCT_LagoonContactSwitchDoors__Fields_FWDDECL
#include <Modloader/app/structs/LagoonContactSwitch__Array.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/VerletStructure__Array.h>
#endif
#undef IL2CPP_STRUCT_LagoonContactSwitchDoors__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LagoonContactSwitchDoors__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LagoonContactSwitchDoors__Fields_FWDDECL)
#include <Modloader/app/structs/LagoonContactSwitchDoors__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LagoonContactSwitchDoors__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
