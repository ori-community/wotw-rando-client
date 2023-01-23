#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TentacleEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TentacleEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleEntity_DEFINED)
#include <Modloader/app/structs/TentacleEntity__Fields.h>
#if defined(IL2CPP_STRUCT_TentacleEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_TentacleEntity_DEFINED
struct TentacleEntity__Class;
struct TentacleEntity {
    struct TentacleEntity__Class* klass;
    MonitorData* monitor;
    struct TentacleEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TentacleEntity_FWDDECL)
#define IL2CPP_STRUCT_TentacleEntity_FWDDECL
#include <Modloader/app/structs/TentacleEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_TentacleEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleEntity_DEFINED) && !defined(IL2CPP_STRUCT_TentacleEntity_FWDDECL)
#include <Modloader/app/structs/TentacleEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TentacleEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
