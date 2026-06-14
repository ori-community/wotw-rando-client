#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TentacleEnemy_Joint_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TentacleEnemy_Joint_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleEnemy_Joint_DEFINED)
#include <Modloader/app/structs/TentacleEnemy_Joint__Fields.h>
#if defined(IL2CPP_STRUCT_TentacleEnemy_Joint__Fields_DEFINED)
#define IL2CPP_STRUCT_TentacleEnemy_Joint_DEFINED
struct TentacleEnemy_Joint__Class;
struct TentacleEnemy_Joint {
    struct TentacleEnemy_Joint__Class* klass;
    MonitorData* monitor;
    struct TentacleEnemy_Joint__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TentacleEnemy_Joint_FWDDECL)
#define IL2CPP_STRUCT_TentacleEnemy_Joint_FWDDECL
#include <Modloader/app/structs/TentacleEnemy_Joint__Class.h>
#endif
#undef IL2CPP_STRUCT_TentacleEnemy_Joint_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleEnemy_Joint_DEFINED) && !defined(IL2CPP_STRUCT_TentacleEnemy_Joint_FWDDECL)
#include <Modloader/app/structs/TentacleEnemy_Joint.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TentacleEnemy_Joint.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
