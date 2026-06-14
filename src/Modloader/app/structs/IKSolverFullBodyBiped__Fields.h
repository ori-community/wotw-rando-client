#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IKSolverFullBodyBiped__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IKSolverFullBodyBiped__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKSolverFullBodyBiped__Fields_DEFINED)
#include <Modloader/app/structs/IKSolverFullBody__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_IKSolverFullBody__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_IKSolverFullBodyBiped__Fields_DEFINED
struct Transform;
struct IKSolverFullBodyBiped__Fields {
    struct IKSolverFullBody__Fields _;
    struct Transform* rootNode;
    float spineStiffness;
    float pullBodyVertical;
    float pullBodyHorizontal;
    struct Vector3 _pullBodyOffset_k__BackingField;
    struct Vector3 offset;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IKSolverFullBodyBiped__Fields_FWDDECL)
#define IL2CPP_STRUCT_IKSolverFullBodyBiped__Fields_FWDDECL
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_IKSolverFullBodyBiped__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKSolverFullBodyBiped__Fields_DEFINED) && !defined(IL2CPP_STRUCT_IKSolverFullBodyBiped__Fields_FWDDECL)
#include <Modloader/app/structs/IKSolverFullBodyBiped__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IKSolverFullBodyBiped__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
