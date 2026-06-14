#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SimpleIKSolver_JointEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SimpleIKSolver_JointEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleIKSolver_JointEntity__Fields_DEFINED)
#include <Modloader/app/structs/Quaternion.h>
#if defined(IL2CPP_STRUCT_Quaternion_DEFINED)
#define IL2CPP_STRUCT_SimpleIKSolver_JointEntity__Fields_DEFINED
struct Transform;
struct SimpleIKSolver_AngleRestriction;
struct __declspec(align(8)) SimpleIKSolver_JointEntity__Fields {
    struct Transform* Joint;
    struct SimpleIKSolver_AngleRestriction* AngleRestrictionRange;
    struct Quaternion _initialRotation;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SimpleIKSolver_JointEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_SimpleIKSolver_JointEntity__Fields_FWDDECL
#include <Modloader/app/structs/SimpleIKSolver_AngleRestriction.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SimpleIKSolver_JointEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleIKSolver_JointEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SimpleIKSolver_JointEntity__Fields_FWDDECL)
#include <Modloader/app/structs/SimpleIKSolver_JointEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SimpleIKSolver_JointEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
