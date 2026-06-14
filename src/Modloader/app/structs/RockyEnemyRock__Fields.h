#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RockyEnemyRock__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RockyEnemyRock__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RockyEnemyRock__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_RockyEnemyRock__Fields_DEFINED
struct Rigidbody;
struct RockyEnemy;
struct RockyEnemyRock__Fields {
    struct MonoBehaviour__Fields _;
    float OpenDistance;
    float SlowDownFriction;
    bool m_turnedBack;
    struct Rigidbody* m_rigidbody;
    struct RockyEnemy* m_rockyEnemy;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RockyEnemyRock__Fields_FWDDECL)
#define IL2CPP_STRUCT_RockyEnemyRock__Fields_FWDDECL
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/RockyEnemy.h>
#endif
#undef IL2CPP_STRUCT_RockyEnemyRock__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RockyEnemyRock__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RockyEnemyRock__Fields_FWDDECL)
#include <Modloader/app/structs/RockyEnemyRock__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RockyEnemyRock__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
