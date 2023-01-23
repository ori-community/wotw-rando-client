#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TentacleEnemy_DyingState__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TentacleEnemy_DyingState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleEnemy_DyingState__Fields_DEFINED)
#include <Modloader/app/structs/TentacleEnemy_TentacleState__Fields.h>
#if defined(IL2CPP_STRUCT_TentacleEnemy_TentacleState__Fields_DEFINED)
#define IL2CPP_STRUCT_TentacleEnemy_DyingState__Fields_DEFINED
struct TentacleEnemy_DyingState__Fields {
    struct TentacleEnemy_TentacleState__Fields _;
    float DestroyDelay;
    float m_timeToDestroy;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TentacleEnemy_DyingState__Fields_FWDDECL)
#define IL2CPP_STRUCT_TentacleEnemy_DyingState__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_TentacleEnemy_DyingState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleEnemy_DyingState__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TentacleEnemy_DyingState__Fields_FWDDECL)
#include <Modloader/app/structs/TentacleEnemy_DyingState__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TentacleEnemy_DyingState__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
