#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Finger__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Finger__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Finger__Fields_DEFINED)
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Quaternion_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_Finger__Fields_DEFINED
struct Transform;
struct IKSolverLimb;
struct __declspec(align(8)) Finger__Fields {
    float weight;
    struct Transform* bone1;
    struct Transform* bone2;
    struct Transform* bone3;
    struct Transform* tip;
    struct Transform* target;
    bool _initiated_k__BackingField;
    struct IKSolverLimb* solver;
    struct Quaternion bone3RelativeToTarget;
    struct Vector3 bone3DefaultLocalPosition;
    struct Quaternion bone3DefaultLocalRotation;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Finger__Fields_FWDDECL)
#define IL2CPP_STRUCT_Finger__Fields_FWDDECL
#include <Modloader/app/structs/IKSolverLimb.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_Finger__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Finger__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Finger__Fields_FWDDECL)
#include <Modloader/app/structs/Finger__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Finger__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
