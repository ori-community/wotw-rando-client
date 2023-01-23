#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FBIKChain__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FBIKChain__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FBIKChain__Fields_DEFINED)
#include <Modloader/app/structs/FBIKChain_Smoothing__Enum.h>
#if defined(IL2CPP_STRUCT_FBIKChain_Smoothing__Enum_DEFINED)
#define IL2CPP_STRUCT_FBIKChain__Fields_DEFINED
struct IKSolver_Node__Array;
struct Int32__Array;
struct FBIKChain_ChildConstraint__Array;
struct IKConstraintBend;
struct IKSolver_Point;
struct Single__Array;
struct __declspec(align(8)) FBIKChain__Fields {
    float pin;
    float pull;
    float push;
    float pushParent;
    float reach;
    FBIKChain_Smoothing__Enum reachSmoothing;

    FBIKChain_Smoothing__Enum pushSmoothing;

    struct IKSolver_Node__Array* nodes;
    struct Int32__Array* children;
    struct FBIKChain_ChildConstraint__Array* childConstraints;
    struct IKConstraintBend* bendConstraint;
    float rootLength;
    bool initiated;
    float length;
    float distance;
    struct IKSolver_Point* p;
    float reachForce;
    float pullParentSum;
    struct Single__Array* crossFades;
    float sqrMag1;
    float sqrMag2;
    float sqrMagDif;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FBIKChain__Fields_FWDDECL)
#define IL2CPP_STRUCT_FBIKChain__Fields_FWDDECL
#include <Modloader/app/structs/FBIKChain_ChildConstraint__Array.h>
#include <Modloader/app/structs/IKConstraintBend.h>
#include <Modloader/app/structs/IKSolver_Node__Array.h>
#include <Modloader/app/structs/IKSolver_Point.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/Single__Array.h>
#endif
#undef IL2CPP_STRUCT_FBIKChain__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FBIKChain__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FBIKChain__Fields_FWDDECL)
#include <Modloader/app/structs/FBIKChain__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FBIKChain__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
