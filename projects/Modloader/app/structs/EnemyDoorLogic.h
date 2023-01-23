#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnemyDoorLogic_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnemyDoorLogic_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnemyDoorLogic_DEFINED)
#include <Modloader/app/structs/EnemyDoorLogic__Fields.h>
#if defined(IL2CPP_STRUCT_EnemyDoorLogic__Fields_DEFINED)
#define IL2CPP_STRUCT_EnemyDoorLogic_DEFINED
struct EnemyDoorLogic__Class;
struct EnemyDoorLogic {
    struct EnemyDoorLogic__Class* klass;
    MonitorData* monitor;
    struct EnemyDoorLogic__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EnemyDoorLogic_FWDDECL)
#define IL2CPP_STRUCT_EnemyDoorLogic_FWDDECL
#include <Modloader/app/structs/EnemyDoorLogic__Class.h>
#endif
#undef IL2CPP_STRUCT_EnemyDoorLogic_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnemyDoorLogic_DEFINED) && !defined(IL2CPP_STRUCT_EnemyDoorLogic_FWDDECL)
#include <Modloader/app/structs/EnemyDoorLogic.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnemyDoorLogic.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
