#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VerletPhysicsAnimationPostprocess_Job__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VerletPhysicsAnimationPostprocess_Job__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletPhysicsAnimationPostprocess_Job__StaticFields_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_VerletPhysicsAnimationPostprocess_Job__StaticFields_DEFINED
struct VerletPhysicsAnimationPostprocess;
struct VerletPhysicsAnimationPostprocess_Job__StaticFields {
    struct VerletPhysicsAnimationPostprocess* Current;
    struct Vector3 AdditionalForce;
    float DeltaTime;
    float Weight;
    bool TransformDeterminantChanged;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VerletPhysicsAnimationPostprocess_Job__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_VerletPhysicsAnimationPostprocess_Job__StaticFields_FWDDECL
#include <Modloader/app/structs/VerletPhysicsAnimationPostprocess.h>
#endif
#undef IL2CPP_STRUCT_VerletPhysicsAnimationPostprocess_Job__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletPhysicsAnimationPostprocess_Job__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_VerletPhysicsAnimationPostprocess_Job__StaticFields_FWDDECL)
#include <Modloader/app/structs/VerletPhysicsAnimationPostprocess_Job__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VerletPhysicsAnimationPostprocess_Job__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
