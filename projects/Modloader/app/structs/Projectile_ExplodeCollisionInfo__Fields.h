#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Projectile_ExplodeCollisionInfo__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Projectile_ExplodeCollisionInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Projectile_ExplodeCollisionInfo__Fields_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_Projectile_ExplodeCollisionInfo__Fields_DEFINED
struct Collider;
struct __declspec(align(8)) Projectile_ExplodeCollisionInfo__Fields {
    struct Vector3 Position;
    struct Vector3 Normal;
    struct Collider* Collider;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Projectile_ExplodeCollisionInfo__Fields_FWDDECL)
#define IL2CPP_STRUCT_Projectile_ExplodeCollisionInfo__Fields_FWDDECL
#include <Modloader/app/structs/Collider.h>
#endif
#undef IL2CPP_STRUCT_Projectile_ExplodeCollisionInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Projectile_ExplodeCollisionInfo__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Projectile_ExplodeCollisionInfo__Fields_FWDDECL)
#include <Modloader/app/structs/Projectile_ExplodeCollisionInfo__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Projectile_ExplodeCollisionInfo__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
