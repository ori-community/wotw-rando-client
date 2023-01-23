#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpitterEnemyState__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpitterEnemyState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpitterEnemyState__Fields_DEFINED)
#include <Modloader/app/structs/GroundEnemyState__Fields.h>
#if defined(IL2CPP_STRUCT_GroundEnemyState__Fields_DEFINED)
#define IL2CPP_STRUCT_SpitterEnemyState__Fields_DEFINED
struct SpitterEnemy;
struct SpitterEnemyState__Fields {
    struct GroundEnemyState__Fields _;
    struct SpitterEnemy* SpitterEnemy;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpitterEnemyState__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpitterEnemyState__Fields_FWDDECL
#include <Modloader/app/structs/SpitterEnemy.h>
#endif
#undef IL2CPP_STRUCT_SpitterEnemyState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpitterEnemyState__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpitterEnemyState__Fields_FWDDECL)
#include <Modloader/app/structs/SpitterEnemyState__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpitterEnemyState__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
