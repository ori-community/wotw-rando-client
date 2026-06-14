#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BossRaceHandler__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BossRaceHandler__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BossRaceHandler__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_BossRaceHandler__Fields_DEFINED
struct BossRaceData;
struct Action;
struct HashSet_1_Moon_ISuspendable_;
struct BossRaceHandler__Fields {
    struct MonoBehaviour__Fields _;
    struct BossRaceData* Data;
    bool m_inProgress;
    bool m_startRaceOnEnable;
    struct Action* m_onStartRaceAction;
    struct Vector3 m_oriStartRacePosition;
    struct HashSet_1_Moon_ISuspendable_* m_suspendables;
    bool m_alreadySuspended;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BossRaceHandler__Fields_FWDDECL)
#define IL2CPP_STRUCT_BossRaceHandler__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/BossRaceData.h>
#include <Modloader/app/structs/HashSet_1_Moon_ISuspendable_.h>
#endif
#undef IL2CPP_STRUCT_BossRaceHandler__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BossRaceHandler__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BossRaceHandler__Fields_FWDDECL)
#include <Modloader/app/structs/BossRaceHandler__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BossRaceHandler__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
