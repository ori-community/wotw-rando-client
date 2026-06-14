#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KwolokBossDryPhaseStartBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KwolokBossDryPhaseStartBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KwolokBossDryPhaseStartBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/CheckpointFunctionality.h>
#include <Modloader/app/structs/KwolokBossBaseBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_KwolokBossBaseBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_CheckpointFunctionality_DEFINED)
#define IL2CPP_STRUCT_KwolokBossDryPhaseStartBehaviour__Fields_DEFINED
struct MoonTimeline;
struct KwolokBossLocomotion_MoveRequest;
struct KwolokBossDryPhaseStartBehaviour__Fields {
    struct KwolokBossBaseBehaviour__Fields _;
    struct MoonTimeline* Timeline;
    float LockLookCenterTime;
    struct KwolokBossLocomotion_MoveRequest* m_moveRequest;
    struct CheckpointFunctionality m_checkpoint;
    float m_timeSinceEnter;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KwolokBossDryPhaseStartBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_KwolokBossDryPhaseStartBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/KwolokBossLocomotion_MoveRequest.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_KwolokBossDryPhaseStartBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KwolokBossDryPhaseStartBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_KwolokBossDryPhaseStartBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/KwolokBossDryPhaseStartBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KwolokBossDryPhaseStartBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
