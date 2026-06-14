#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TurtleAIUtilities__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TurtleAIUtilities__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TurtleAIUtilities__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_TurtleAIUtilities__Fields_DEFINED
struct AnimationCurve;
struct Sensor;
struct DynamicDataResolver;
struct TurtleAIUtilities__Fields {
    struct MonoBehaviour__Fields _;
    struct AnimationCurve* TargetDistanceToDodgeUtility;
    struct AnimationCurve* TargetDistanceToAttackUtility;
    struct AnimationCurve* TargetSpeedToRunningAttackUtility;
    struct Sensor* m_sensor;
    float m_utilityDodge;
    float m_utilityAttack;
    struct DynamicDataResolver* m_dataResolver;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TurtleAIUtilities__Fields_FWDDECL)
#define IL2CPP_STRUCT_TurtleAIUtilities__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/DynamicDataResolver.h>
#include <Modloader/app/structs/Sensor.h>
#endif
#undef IL2CPP_STRUCT_TurtleAIUtilities__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TurtleAIUtilities__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TurtleAIUtilities__Fields_FWDDECL)
#include <Modloader/app/structs/TurtleAIUtilities__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TurtleAIUtilities__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
