#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RaceTimer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RaceTimer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceTimer__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_RaceTimer__Fields_DEFINED
struct Action;
struct Event_1;
struct ISoundHost;
struct RaceTimer__Fields {
    struct MonoBehaviour__Fields _;
    float _ElapsedTime_k__BackingField;
    float _PersonalBestTime_k__BackingField;
    float _TimeLimit_k__BackingField;
    float _BestTime_k__BackingField;
    float _TimeToBeat_k__BackingField;
    float _PreviousElapsedTime_k__BackingField;
    struct Action* TimeoutPulse;
    struct Event_1* TimeoutWarningEvent;
    struct Event_1* BestTimeNotBeatenSoundEvent;
    float m_adjustedElapsedTime;
    bool m_startedRace;
    struct ISoundHost* m_soundHost;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RaceTimer__Fields_FWDDECL)
#define IL2CPP_STRUCT_RaceTimer__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/ISoundHost.h>
#endif
#undef IL2CPP_STRUCT_RaceTimer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceTimer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RaceTimer__Fields_FWDDECL)
#include <Modloader/app/structs/RaceTimer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RaceTimer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
