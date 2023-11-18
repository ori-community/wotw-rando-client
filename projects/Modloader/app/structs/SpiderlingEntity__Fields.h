#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiderlingEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiderlingEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderlingEntity__Fields_DEFINED)
#include <Modloader/app/structs/GroundMovingEntity__Fields.h>
#include <Modloader/app/structs/GroundPatrolDirectionMode__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_GroundMovingEntity__Fields_DEFINED) && defined(IL2CPP_STRUCT_GroundPatrolDirectionMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_SpiderlingEntity__Fields_DEFINED
struct GroundEntityLocomotion;
struct SpiderlingEntity__Fields {
    struct GroundMovingEntity__Fields _;
    struct GroundEntityLocomotion* m_slugLocomotion;
    GroundPatrolDirectionMode__Enum _MovementPattern_k__BackingField;

    struct Vector2 AttackRange;
    bool _ShouldIdleDuringPatrol_k__BackingField;
    struct Vector2 m_lastPosition;
    struct Vector2 m_newPosition;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiderlingEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpiderlingEntity__Fields_FWDDECL
#include <Modloader/app/structs/GroundEntityLocomotion.h>
#endif
#undef IL2CPP_STRUCT_SpiderlingEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderlingEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpiderlingEntity__Fields_FWDDECL)
#include <Modloader/app/structs/SpiderlingEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiderlingEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
