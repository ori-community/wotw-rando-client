#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TentacleEnemy_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TentacleEnemy_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleEnemy_DEFINED)
#include <Modloader/app/structs/TentacleEnemy__Fields.h>
#if defined(IL2CPP_STRUCT_TentacleEnemy__Fields_DEFINED)
#define IL2CPP_STRUCT_TentacleEnemy_DEFINED
struct TentacleEnemy__Class;
struct TentacleEnemy {
    struct TentacleEnemy__Class* klass;
    MonitorData* monitor;
    struct TentacleEnemy__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TentacleEnemy_FWDDECL)
#define IL2CPP_STRUCT_TentacleEnemy_FWDDECL
#include <Modloader/app/structs/TentacleEnemy__Class.h>
#endif
#undef IL2CPP_STRUCT_TentacleEnemy_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleEnemy_DEFINED) && !defined(IL2CPP_STRUCT_TentacleEnemy_FWDDECL)
#include <Modloader/app/structs/TentacleEnemy.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TentacleEnemy.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
