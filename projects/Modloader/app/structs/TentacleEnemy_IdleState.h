#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TentacleEnemy_IdleState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TentacleEnemy_IdleState_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleEnemy_IdleState_DEFINED)
#include <Modloader/app/structs/TentacleEnemy_IdleState__Fields.h>
#if defined(IL2CPP_STRUCT_TentacleEnemy_IdleState__Fields_DEFINED)
#define IL2CPP_STRUCT_TentacleEnemy_IdleState_DEFINED
struct TentacleEnemy_IdleState__Class;
struct TentacleEnemy_IdleState {
    struct TentacleEnemy_IdleState__Class* klass;
    MonitorData* monitor;
    struct TentacleEnemy_IdleState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TentacleEnemy_IdleState_FWDDECL)
#define IL2CPP_STRUCT_TentacleEnemy_IdleState_FWDDECL
#include <Modloader/app/structs/TentacleEnemy_IdleState__Class.h>
#endif
#undef IL2CPP_STRUCT_TentacleEnemy_IdleState_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleEnemy_IdleState_DEFINED) && !defined(IL2CPP_STRUCT_TentacleEnemy_IdleState_FWDDECL)
#include <Modloader/app/structs/TentacleEnemy_IdleState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TentacleEnemy_IdleState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
