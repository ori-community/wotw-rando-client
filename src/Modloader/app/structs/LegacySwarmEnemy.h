#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacySwarmEnemy_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacySwarmEnemy_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacySwarmEnemy_DEFINED)
#include <Modloader/app/structs/LegacySwarmEnemy__Fields.h>
#if defined(IL2CPP_STRUCT_LegacySwarmEnemy__Fields_DEFINED)
#define IL2CPP_STRUCT_LegacySwarmEnemy_DEFINED
struct LegacySwarmEnemy__Class;
struct LegacySwarmEnemy {
    struct LegacySwarmEnemy__Class* klass;
    MonitorData* monitor;
    struct LegacySwarmEnemy__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LegacySwarmEnemy_FWDDECL)
#define IL2CPP_STRUCT_LegacySwarmEnemy_FWDDECL
#include <Modloader/app/structs/LegacySwarmEnemy__Class.h>
#endif
#undef IL2CPP_STRUCT_LegacySwarmEnemy_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacySwarmEnemy_DEFINED) && !defined(IL2CPP_STRUCT_LegacySwarmEnemy_FWDDECL)
#include <Modloader/app/structs/LegacySwarmEnemy.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacySwarmEnemy.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
