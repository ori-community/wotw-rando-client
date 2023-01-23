#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IKSolver_Point__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IKSolver_Point__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKSolver_Point__Fields_DEFINED)
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Quaternion_DEFINED)
#define IL2CPP_STRUCT_IKSolver_Point__Fields_DEFINED
struct Transform;
struct __declspec(align(8)) IKSolver_Point__Fields {
    struct Transform* transform;
    float weight;
    struct Vector3 solverPosition;
    struct Quaternion solverRotation;
    struct Vector3 defaultLocalPosition;
    struct Quaternion defaultLocalRotation;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IKSolver_Point__Fields_FWDDECL)
#define IL2CPP_STRUCT_IKSolver_Point__Fields_FWDDECL
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_IKSolver_Point__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKSolver_Point__Fields_DEFINED) && !defined(IL2CPP_STRUCT_IKSolver_Point__Fields_FWDDECL)
#include <Modloader/app/structs/IKSolver_Point__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IKSolver_Point__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
