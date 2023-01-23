#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RaceHandler__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RaceHandler__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceHandler__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_RaceHandler__Fields_DEFINED
struct RaceData;
struct Action;
struct PickupBase;
struct RaceHandler__Fields {
    struct MonoBehaviour__Fields _;
    struct RaceData* Data;
    bool m_initialized;
    bool m_inProgress;
    bool m_inStartProximity;
    bool m_inEndProximity;
    bool m_isSyncing;
    bool m_startRaceOnEnable;
    bool m_showingChallengeUi;
    struct Action* m_onStartRaceAction;
    struct Vector3 m_oriStartRacePosition;
    struct PickupBase* m_rewardInstance;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RaceHandler__Fields_FWDDECL)
#define IL2CPP_STRUCT_RaceHandler__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/PickupBase.h>
#include <Modloader/app/structs/RaceData.h>
#endif
#undef IL2CPP_STRUCT_RaceHandler__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceHandler__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RaceHandler__Fields_FWDDECL)
#include <Modloader/app/structs/RaceHandler__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RaceHandler__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
