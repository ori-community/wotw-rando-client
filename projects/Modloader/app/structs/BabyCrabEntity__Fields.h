#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BabyCrabEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BabyCrabEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BabyCrabEntity__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_BabyCrabEntity__Fields_DEFINED
struct List_1_Moon_BehaviourSystem_EntityBehaviourNode_;
struct CrabPlaceholderGroup;
struct Sensor;
struct CrabEntity;
struct BabyCrabEntity__Fields {
    struct MonoBehaviour__Fields _;
    struct List_1_Moon_BehaviourSystem_EntityBehaviourNode_* UpdateBlockingBehaviours;
    struct CrabPlaceholderGroup* _Group_k__BackingField;
    struct Sensor* m_sensor;
    float MinDistanceToOtherCrabs;
    float MinRunDistance;
    float DistanceToMumma;
    float DistanceToTargetToStartRunning;
    struct CrabEntity* _Entity_k__BackingField;
    bool _IsRunningAway_k__BackingField;
    struct Vector3 _RunPosition_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BabyCrabEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_BabyCrabEntity__Fields_FWDDECL
#include <Modloader/app/structs/CrabEntity.h>
#include <Modloader/app/structs/CrabPlaceholderGroup.h>
#include <Modloader/app/structs/List_1_Moon_BehaviourSystem_EntityBehaviourNode_.h>
#include <Modloader/app/structs/Sensor.h>
#endif
#undef IL2CPP_STRUCT_BabyCrabEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BabyCrabEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BabyCrabEntity__Fields_FWDDECL)
#include <Modloader/app/structs/BabyCrabEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BabyCrabEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
