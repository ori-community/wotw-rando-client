#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnemyDoorAnimator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnemyDoorAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnemyDoorAnimator_DEFINED)
#include <Modloader/app/structs/EnemyDoorAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_EnemyDoorAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_EnemyDoorAnimator_DEFINED
struct EnemyDoorAnimator__Class;
struct EnemyDoorAnimator {
    struct EnemyDoorAnimator__Class* klass;
    MonitorData* monitor;
    struct EnemyDoorAnimator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EnemyDoorAnimator_FWDDECL)
#define IL2CPP_STRUCT_EnemyDoorAnimator_FWDDECL
#include <Modloader/app/structs/EnemyDoorAnimator__Class.h>
#endif
#undef IL2CPP_STRUCT_EnemyDoorAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnemyDoorAnimator_DEFINED) && !defined(IL2CPP_STRUCT_EnemyDoorAnimator_FWDDECL)
#include <Modloader/app/structs/EnemyDoorAnimator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnemyDoorAnimator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
