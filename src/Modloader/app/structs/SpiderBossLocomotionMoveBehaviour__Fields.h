#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiderBossLocomotionMoveBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiderBossLocomotionMoveBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderBossLocomotionMoveBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityLocomotionTask_1_SpiderBossEntity___Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_EntityLocomotionTask_1_SpiderBossEntity___Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_SpiderBossLocomotionMoveBehaviour__Fields_DEFINED
struct SpiderBossLocomotionMoveBehaviour_SpiderBossTransition__Array;
struct SpiderBossLocomotionMoveBehaviour__Fields {
    struct EntityLocomotionTask_1_SpiderBossEntity___Fields _;
    struct Vector3 _TargetPosition_k__BackingField;
    float _TraversalSpeed_k__BackingField;
    float ArrivalDistance;
    bool MoveToTarget;
    struct SpiderBossLocomotionMoveBehaviour_SpiderBossTransition__Array* Transitions;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiderBossLocomotionMoveBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpiderBossLocomotionMoveBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/SpiderBossLocomotionMoveBehaviour_SpiderBossTransition__Array.h>
#endif
#undef IL2CPP_STRUCT_SpiderBossLocomotionMoveBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderBossLocomotionMoveBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpiderBossLocomotionMoveBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/SpiderBossLocomotionMoveBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiderBossLocomotionMoveBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
