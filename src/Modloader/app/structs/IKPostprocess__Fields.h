#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IKPostprocess__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IKPostprocess__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKPostprocess__Fields_DEFINED)
#include <Modloader/app/structs/AnimationPostprocess__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_AnimationPostprocess__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_IKPostprocess__Fields_DEFINED
struct IK;
struct Transform;
struct IKSolverHeuristic;
struct IKPostprocess__Fields {
    struct AnimationPostprocess__Fields _;
    int32_t OrderNumber;
    struct IK* IK;
    struct Transform* Root;
    struct Transform* endBone;
    struct Transform* startBone;
    struct IKSolverHeuristic* solver;
    bool boneScalingRequired;
    struct Vector3 ResultEndPos;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IKPostprocess__Fields_FWDDECL)
#define IL2CPP_STRUCT_IKPostprocess__Fields_FWDDECL
#include <Modloader/app/structs/IK.h>
#include <Modloader/app/structs/IKSolverHeuristic.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_IKPostprocess__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKPostprocess__Fields_DEFINED) && !defined(IL2CPP_STRUCT_IKPostprocess__Fields_FWDDECL)
#include <Modloader/app/structs/IKPostprocess__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IKPostprocess__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
