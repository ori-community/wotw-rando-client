#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiderBossLocomotion__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiderBossLocomotion__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderBossLocomotion__Fields_DEFINED)
#include <Modloader/app/structs/EntityWeightData_EntityWeight__Enum.h>
#include <Modloader/app/structs/Locomotion__Fields.h>
#include <Modloader/app/structs/Nullable_1_Single_.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Locomotion__Fields_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Single__DEFINED) && defined(IL2CPP_STRUCT_EntityWeightData_EntityWeight__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_SpiderBossLocomotion__Fields_DEFINED
struct SpiderBossLocomotionIdleBehaviour;
struct BaseLocomotionTurningBehaviour;
struct Transform;
struct Rigidbody;
struct SpiderBossEntity;
struct SpiderBossLocomotion__Fields {
    struct Locomotion__Fields _;
    struct SpiderBossLocomotionIdleBehaviour* IdleBehaviour;
    struct BaseLocomotionTurningBehaviour* TurningBehaviour;
    struct Transform* Feet;
    struct Rigidbody* Rigidbody;
    bool DebugLocomotion;
    struct Nullable_1_Single_ m_registeredLookDirection;
    struct SpiderBossEntity* m_spider;
    EntityWeightData_EntityWeight__Enum _Weight_k__BackingField;

    struct Vector3 m_additiveLocalVelocity;
    float BlendOutRootMotionSpeed;
    struct Vector3 m_feetStartPosition;
    struct Vector2 m_lookDirection;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiderBossLocomotion__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpiderBossLocomotion__Fields_FWDDECL
#include <Modloader/app/structs/BaseLocomotionTurningBehaviour.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/SpiderBossEntity.h>
#include <Modloader/app/structs/SpiderBossLocomotionIdleBehaviour.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SpiderBossLocomotion__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderBossLocomotion__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpiderBossLocomotion__Fields_FWDDECL)
#include <Modloader/app/structs/SpiderBossLocomotion__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiderBossLocomotion__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
