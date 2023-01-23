#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LaserShooterChangeShieldBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LaserShooterChangeShieldBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LaserShooterChangeShieldBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityBehaviourNode_1_LaserShooterMinibossEntity___Fields.h>
#include <Modloader/app/structs/LaserShieldRotationController_RotationType__Enum.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourNode_1_LaserShooterMinibossEntity___Fields_DEFINED) && defined(IL2CPP_STRUCT_LaserShieldRotationController_RotationType__Enum_DEFINED)
#define IL2CPP_STRUCT_LaserShooterChangeShieldBehaviour__Fields_DEFINED
struct LaserShieldRotationController;
struct LaserShooterChangeShieldBehaviour__Fields {
    struct EntityBehaviourNode_1_LaserShooterMinibossEntity___Fields _;
    bool OverrideRotationType;
    LaserShieldRotationController_RotationType__Enum RotationType;

    bool OverrideSpeedMultiplier;
    float SpeedMultiplier;
    bool SetSpeedMultiplierInstantly;
    bool SetTargetSpeed;
    float TargetSpeed;
    bool SetTargetSpeedInstantly;
    bool ChangeDirection;
    struct LaserShieldRotationController* m_shieldController;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LaserShooterChangeShieldBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_LaserShooterChangeShieldBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/LaserShieldRotationController.h>
#endif
#undef IL2CPP_STRUCT_LaserShooterChangeShieldBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LaserShooterChangeShieldBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LaserShooterChangeShieldBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/LaserShooterChangeShieldBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LaserShooterChangeShieldBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
