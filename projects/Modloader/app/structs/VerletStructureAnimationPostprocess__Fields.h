#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VerletStructureAnimationPostprocess__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VerletStructureAnimationPostprocess__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletStructureAnimationPostprocess__Fields_DEFINED)
#include <Modloader/app/structs/AnimationPostprocess__Fields.h>
#if defined(IL2CPP_STRUCT_AnimationPostprocess__Fields_DEFINED)
#define IL2CPP_STRUCT_VerletStructureAnimationPostprocess__Fields_DEFINED
struct VerletStructure;
struct Vector3__Array;
struct Quaternion__Array;
struct VerletStructureAnimationPostprocess__Fields {
    struct AnimationPostprocess__Fields _;
    int32_t OrderNumber;
    struct VerletStructure* verletStructure;
    bool initialised;
    struct Vector3__Array* initialPositions;
    struct Quaternion__Array* initialRotations;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VerletStructureAnimationPostprocess__Fields_FWDDECL)
#define IL2CPP_STRUCT_VerletStructureAnimationPostprocess__Fields_FWDDECL
#include <Modloader/app/structs/Quaternion__Array.h>
#include <Modloader/app/structs/Vector3__Array.h>
#include <Modloader/app/structs/VerletStructure.h>
#endif
#undef IL2CPP_STRUCT_VerletStructureAnimationPostprocess__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletStructureAnimationPostprocess__Fields_DEFINED) && !defined(IL2CPP_STRUCT_VerletStructureAnimationPostprocess__Fields_FWDDECL)
#include <Modloader/app/structs/VerletStructureAnimationPostprocess__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VerletStructureAnimationPostprocess__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
