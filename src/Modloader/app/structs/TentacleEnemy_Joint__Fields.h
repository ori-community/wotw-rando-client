#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TentacleEnemy_Joint__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TentacleEnemy_Joint__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleEnemy_Joint__Fields_DEFINED)
#define IL2CPP_STRUCT_TentacleEnemy_Joint__Fields_DEFINED
struct Transform;
struct VerletBody_Point;
struct __declspec(align(8)) TentacleEnemy_Joint__Fields {
    struct Transform* Transform;
    struct VerletBody_Point* PhysicalJoint;
};
#endif
#if !defined(IL2CPP_STRUCT_TentacleEnemy_Joint__Fields_FWDDECL)
#define IL2CPP_STRUCT_TentacleEnemy_Joint__Fields_FWDDECL
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/VerletBody_Point.h>
#endif
#undef IL2CPP_STRUCT_TentacleEnemy_Joint__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleEnemy_Joint__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TentacleEnemy_Joint__Fields_FWDDECL)
#include <Modloader/app/structs/TentacleEnemy_Joint__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TentacleEnemy_Joint__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
