#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TentacleAttackMetadata_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TentacleAttackMetadata_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleAttackMetadata_DEFINED)
#include <Modloader/app/structs/TentacleAttackMetadata__Fields.h>
#if defined(IL2CPP_STRUCT_TentacleAttackMetadata__Fields_DEFINED)
#define IL2CPP_STRUCT_TentacleAttackMetadata_DEFINED
struct TentacleAttackMetadata__Class;
struct TentacleAttackMetadata {
    struct TentacleAttackMetadata__Class* klass;
    MonitorData* monitor;
    struct TentacleAttackMetadata__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TentacleAttackMetadata_FWDDECL)
#define IL2CPP_STRUCT_TentacleAttackMetadata_FWDDECL
#include <Modloader/app/structs/TentacleAttackMetadata__Class.h>
#endif
#undef IL2CPP_STRUCT_TentacleAttackMetadata_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleAttackMetadata_DEFINED) && !defined(IL2CPP_STRUCT_TentacleAttackMetadata_FWDDECL)
#include <Modloader/app/structs/TentacleAttackMetadata.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TentacleAttackMetadata.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
