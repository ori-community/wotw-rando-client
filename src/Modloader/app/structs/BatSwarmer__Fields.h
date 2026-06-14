#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BatSwarmer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BatSwarmer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BatSwarmer__Fields_DEFINED)
#include <Modloader/app/structs/UberSwarmer__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_UberSwarmer__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_BatSwarmer__Fields_DEFINED
struct BatEnemy;
struct Transform;
struct Rigidbody;
struct BatSwarmer__Fields {
    struct UberSwarmer__Fields _;
    struct Vector2 MainPOI;
    float MainPOIRadius;
    bool Avoid;
    struct BatEnemy* m_enemy;
    struct Transform* m_transform;
    struct Rigidbody* m_rigidbody;
    struct Vector2 m_poiInfluence;
    float m_rotateDir;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BatSwarmer__Fields_FWDDECL)
#define IL2CPP_STRUCT_BatSwarmer__Fields_FWDDECL
#include <Modloader/app/structs/BatEnemy.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_BatSwarmer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BatSwarmer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BatSwarmer__Fields_FWDDECL)
#include <Modloader/app/structs/BatSwarmer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BatSwarmer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
