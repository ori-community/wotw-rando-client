#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RockyEnemyState__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RockyEnemyState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RockyEnemyState__Fields_DEFINED)
#include <Modloader/app/structs/GroundEnemy3DState__Fields.h>
#if defined(IL2CPP_STRUCT_GroundEnemy3DState__Fields_DEFINED)
#define IL2CPP_STRUCT_RockyEnemyState__Fields_DEFINED
struct RockyEnemy;
struct RockyEnemyState__Fields {
    struct GroundEnemy3DState__Fields _;
    struct RockyEnemy* RockyEnemy;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RockyEnemyState__Fields_FWDDECL)
#define IL2CPP_STRUCT_RockyEnemyState__Fields_FWDDECL
#include <Modloader/app/structs/RockyEnemy.h>
#endif
#undef IL2CPP_STRUCT_RockyEnemyState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RockyEnemyState__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RockyEnemyState__Fields_FWDDECL)
#include <Modloader/app/structs/RockyEnemyState__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RockyEnemyState__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
