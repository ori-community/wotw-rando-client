#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IKSolver_Node__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IKSolver_Node__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKSolver_Node__Fields_DEFINED)
#include <Modloader/app/structs/IKSolver_Point__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_IKSolver_Point__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_IKSolver_Node__Fields_DEFINED
struct IKSolver_Node__Fields {
    struct IKSolver_Point__Fields _;
    float length;
    float effectorPositionWeight;
    float effectorRotationWeight;
    struct Vector3 offset;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IKSolver_Node__Fields_FWDDECL)
#define IL2CPP_STRUCT_IKSolver_Node__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_IKSolver_Node__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKSolver_Node__Fields_DEFINED) && !defined(IL2CPP_STRUCT_IKSolver_Node__Fields_FWDDECL)
#include <Modloader/app/structs/IKSolver_Node__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IKSolver_Node__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
