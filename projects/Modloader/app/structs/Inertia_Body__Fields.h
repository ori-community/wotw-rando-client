#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Inertia_Body__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Inertia_Body__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Inertia_Body__Fields_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_Inertia_Body__Fields_DEFINED
struct Transform;
struct Inertia_Body_EffectorLink__Array;
struct __declspec(align(8)) Inertia_Body__Fields {
    struct Transform* transform;
    struct Inertia_Body_EffectorLink__Array* effectorLinks;
    float speed;
    float acceleration;
    float matchVelocity;
    float gravity;
    struct Vector3 delta;
    struct Vector3 lazyPoint;
    struct Vector3 direction;
    struct Vector3 lastPosition;
    bool firstUpdate;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Inertia_Body__Fields_FWDDECL)
#define IL2CPP_STRUCT_Inertia_Body__Fields_FWDDECL
#include <Modloader/app/structs/Inertia_Body_EffectorLink__Array.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_Inertia_Body__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Inertia_Body__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Inertia_Body__Fields_FWDDECL)
#include <Modloader/app/structs/Inertia_Body__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Inertia_Body__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
