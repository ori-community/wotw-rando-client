#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiderBossLocomotionProxy__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiderBossLocomotionProxy__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderBossLocomotionProxy__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_SpiderBossLocomotionProxy__Fields_DEFINED
struct SpiderBossLocomotionIdleBehaviour;
struct SpiderBossLocomotionMoveBehaviour;
struct BaseLocomotionTurningBehaviour;
struct SpiderBossLocomotionProxy__Fields {
    struct MonoBehaviour__Fields _;
    struct SpiderBossLocomotionIdleBehaviour* IdleBehaviourBehaviour;
    struct SpiderBossLocomotionMoveBehaviour* MoveBehaviourBehaviour;
    struct BaseLocomotionTurningBehaviour* TurningBehaviour;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiderBossLocomotionProxy__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpiderBossLocomotionProxy__Fields_FWDDECL
#include <Modloader/app/structs/BaseLocomotionTurningBehaviour.h>
#include <Modloader/app/structs/SpiderBossLocomotionIdleBehaviour.h>
#include <Modloader/app/structs/SpiderBossLocomotionMoveBehaviour.h>
#endif
#undef IL2CPP_STRUCT_SpiderBossLocomotionProxy__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderBossLocomotionProxy__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpiderBossLocomotionProxy__Fields_FWDDECL)
#include <Modloader/app/structs/SpiderBossLocomotionProxy__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiderBossLocomotionProxy__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
