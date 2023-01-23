#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JumperEnemyState__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JumperEnemyState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JumperEnemyState__Fields_DEFINED)
#include <Modloader/app/structs/GroundEnemyState__Fields.h>
#if defined(IL2CPP_STRUCT_GroundEnemyState__Fields_DEFINED)
#define IL2CPP_STRUCT_JumperEnemyState__Fields_DEFINED
struct JumperEnemy;
struct JumperEnemyState__Fields {
    struct GroundEnemyState__Fields _;
    struct JumperEnemy* JumperEnemy;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JumperEnemyState__Fields_FWDDECL)
#define IL2CPP_STRUCT_JumperEnemyState__Fields_FWDDECL
#include <Modloader/app/structs/JumperEnemy.h>
#endif
#undef IL2CPP_STRUCT_JumperEnemyState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JumperEnemyState__Fields_DEFINED) && !defined(IL2CPP_STRUCT_JumperEnemyState__Fields_FWDDECL)
#include <Modloader/app/structs/JumperEnemyState__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JumperEnemyState__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
