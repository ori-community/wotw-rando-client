#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TentacleEnemy_IdleState__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TentacleEnemy_IdleState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleEnemy_IdleState__Fields_DEFINED)
#include <Modloader/app/structs/TentacleEnemy_TentacleState__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_TentacleEnemy_TentacleState__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_TentacleEnemy_IdleState__Fields_DEFINED
struct TentacleEnemy_IdleState__Fields {
    struct TentacleEnemy_TentacleState__Fields _;
    float SeekForceMin;
    float SeekForceMax;
    float TimeToResetTargetMin;
    float TimeToResetTargetMax;
    float MaxTargetDistance;
    struct Vector3 m_target;
    float m_timeResetTarget;
    float m_targetSeekForce;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TentacleEnemy_IdleState__Fields_FWDDECL)
#define IL2CPP_STRUCT_TentacleEnemy_IdleState__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_TentacleEnemy_IdleState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleEnemy_IdleState__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TentacleEnemy_IdleState__Fields_FWDDECL)
#include <Modloader/app/structs/TentacleEnemy_IdleState__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TentacleEnemy_IdleState__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
