#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TentacleEnemy_LookAtOriState__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TentacleEnemy_LookAtOriState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleEnemy_LookAtOriState__Fields_DEFINED)
#include <Modloader/app/structs/TentacleEnemy_TentacleState__Fields.h>
#if defined(IL2CPP_STRUCT_TentacleEnemy_TentacleState__Fields_DEFINED)
#define IL2CPP_STRUCT_TentacleEnemy_LookAtOriState__Fields_DEFINED
struct TentacleEnemy_LookAtOriState__Fields {
    struct TentacleEnemy_TentacleState__Fields _;
    float SeekForceMin;
    float SeekForceMax;
    float TimeToResetForceMin;
    float TimeToResetForceMax;
    float Wiggle;
    float m_timeResetForce;
    float m_seekForce;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TentacleEnemy_LookAtOriState__Fields_FWDDECL)
#define IL2CPP_STRUCT_TentacleEnemy_LookAtOriState__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_TentacleEnemy_LookAtOriState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleEnemy_LookAtOriState__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TentacleEnemy_LookAtOriState__Fields_FWDDECL)
#include <Modloader/app/structs/TentacleEnemy_LookAtOriState__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TentacleEnemy_LookAtOriState__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
