#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LizardGroundChaseBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LizardGroundChaseBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LizardGroundChaseBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityBehaviourNode__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourNode__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_LizardGroundChaseBehaviour__Fields_DEFINED
struct MoonFloat;
struct GroundEntityLocomotion;
struct LizardGroundChaseBehaviour__Fields {
    struct EntityBehaviourNode__Fields _;
    struct MoonFloat* OvershootDistance;
    struct MoonFloat* MinChaseDistance;
    struct MoonFloat* TraversalTier;
    float MaxStuckTime;
    float StuckPositionError;
    bool StopLocomotionNearLedge;
    float LedgeCheckDepth;
    bool JustRunForward;
    struct GroundEntityLocomotion* m_locomotion;
    float _ChasingTime_k__BackingField;
    struct Vector3 m_initialEntityPosition;
    float m_timeStuck;
    struct Vector3 m_lastFramePosition;
    bool m_wasTargetPostionUpdatedThisTick;
    struct Vector3 m_cachedOvershootPos;
    float m_chaseDirection;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LizardGroundChaseBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_LizardGroundChaseBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/GroundEntityLocomotion.h>
#include <Modloader/app/structs/MoonFloat.h>
#endif
#undef IL2CPP_STRUCT_LizardGroundChaseBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LizardGroundChaseBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LizardGroundChaseBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/LizardGroundChaseBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LizardGroundChaseBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
