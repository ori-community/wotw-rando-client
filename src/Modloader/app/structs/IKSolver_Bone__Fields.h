#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IKSolver_Bone__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IKSolver_Bone__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKSolver_Bone__Fields_DEFINED)
#include <Modloader/app/structs/IKSolver_Point__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_IKSolver_Point__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_IKSolver_Bone__Fields_DEFINED
struct RotationLimit;
struct IKSolver_Bone__Fields {
    struct IKSolver_Point__Fields _;
    float length;
    float sqrMag;
    struct Vector3 axis;
    struct RotationLimit* _rotationLimit;
    bool isLimited;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IKSolver_Bone__Fields_FWDDECL)
#define IL2CPP_STRUCT_IKSolver_Bone__Fields_FWDDECL
#include <Modloader/app/structs/RotationLimit.h>
#endif
#undef IL2CPP_STRUCT_IKSolver_Bone__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKSolver_Bone__Fields_DEFINED) && !defined(IL2CPP_STRUCT_IKSolver_Bone__Fields_FWDDECL)
#include <Modloader/app/structs/IKSolver_Bone__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IKSolver_Bone__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
