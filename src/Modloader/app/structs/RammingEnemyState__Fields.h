#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RammingEnemyState__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RammingEnemyState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RammingEnemyState__Fields_DEFINED)
#include <Modloader/app/structs/GroundEnemyState__Fields.h>
#if defined(IL2CPP_STRUCT_GroundEnemyState__Fields_DEFINED)
#define IL2CPP_STRUCT_RammingEnemyState__Fields_DEFINED
struct RammingEnemy;
struct RammingEnemyState__Fields {
    struct GroundEnemyState__Fields _;
    struct RammingEnemy* RammingEnemy;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RammingEnemyState__Fields_FWDDECL)
#define IL2CPP_STRUCT_RammingEnemyState__Fields_FWDDECL
#include <Modloader/app/structs/RammingEnemy.h>
#endif
#undef IL2CPP_STRUCT_RammingEnemyState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RammingEnemyState__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RammingEnemyState__Fields_FWDDECL)
#include <Modloader/app/structs/RammingEnemyState__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RammingEnemyState__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
