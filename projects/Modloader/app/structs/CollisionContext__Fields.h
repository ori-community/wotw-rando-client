#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CollisionContext__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CollisionContext__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CollisionContext__Fields_DEFINED)
#define IL2CPP_STRUCT_CollisionContext__Fields_DEFINED
struct Collision;
struct Collider;
struct __declspec(align(8)) CollisionContext__Fields {
    struct Collision* _Collision_k__BackingField;
    struct Collider* _CollisionReciever_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_CollisionContext__Fields_FWDDECL)
#define IL2CPP_STRUCT_CollisionContext__Fields_FWDDECL
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/Collision.h>
#endif
#undef IL2CPP_STRUCT_CollisionContext__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CollisionContext__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CollisionContext__Fields_FWDDECL)
#include <Modloader/app/structs/CollisionContext__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CollisionContext__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
