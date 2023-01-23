#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DeadEnemyRagdoll_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DeadEnemyRagdoll_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeadEnemyRagdoll_DEFINED)
#include <Modloader/app/structs/DeadEnemyRagdoll__Fields.h>
#if defined(IL2CPP_STRUCT_DeadEnemyRagdoll__Fields_DEFINED)
#define IL2CPP_STRUCT_DeadEnemyRagdoll_DEFINED
struct DeadEnemyRagdoll__Class;
struct DeadEnemyRagdoll {
    struct DeadEnemyRagdoll__Class* klass;
    MonitorData* monitor;
    struct DeadEnemyRagdoll__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DeadEnemyRagdoll_FWDDECL)
#define IL2CPP_STRUCT_DeadEnemyRagdoll_FWDDECL
#include <Modloader/app/structs/DeadEnemyRagdoll__Class.h>
#endif
#undef IL2CPP_STRUCT_DeadEnemyRagdoll_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeadEnemyRagdoll_DEFINED) && !defined(IL2CPP_STRUCT_DeadEnemyRagdoll_FWDDECL)
#include <Modloader/app/structs/DeadEnemyRagdoll.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DeadEnemyRagdoll.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
