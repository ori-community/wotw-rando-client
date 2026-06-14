#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiderEnemy__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiderEnemy__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderEnemy__Fields_DEFINED)
#include <Modloader/app/structs/Enemy2D__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Enemy2D__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_SpiderEnemy__Fields_DEFINED
struct Rigidbody;
struct List_1_SpiderEnemyLimb_;
struct Transform;
struct SpiderEnemy__Fields {
    struct Enemy2D__Fields _;
    struct Vector3 Normal;
    struct Rigidbody* m_rigidbody;
    struct List_1_SpiderEnemyLimb_* Limbs;
    float m_limbWaitTime;
    float SpringForce;
    struct Transform* MoveTarget;
    float MoveForce;
    float Friction;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiderEnemy__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpiderEnemy__Fields_FWDDECL
#include <Modloader/app/structs/List_1_SpiderEnemyLimb_.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SpiderEnemy__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderEnemy__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpiderEnemy__Fields_FWDDECL)
#include <Modloader/app/structs/SpiderEnemy__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiderEnemy__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
