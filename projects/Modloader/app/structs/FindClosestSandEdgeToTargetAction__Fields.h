#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FindClosestSandEdgeToTargetAction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FindClosestSandEdgeToTargetAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FindClosestSandEdgeToTargetAction__Fields_DEFINED)
#include <Modloader/app/structs/Action_1__Fields.h>
#if defined(IL2CPP_STRUCT_Action_1__Fields_DEFINED)
#define IL2CPP_STRUCT_FindClosestSandEdgeToTargetAction__Fields_DEFINED
struct MoonReference_1_UnityEngine_GameObject_;
struct MoonVector3;
struct FindClosestSandEdgeToTargetAction__Fields {
    struct Action_1__Fields _;
    struct MoonReference_1_UnityEngine_GameObject_* CheckTarget;
    struct MoonVector3* VelocityOfTarget;
    float VelocityPredictionTime;
    float InnerEdgePadding;
    float OutsideClearence;
    struct MoonVector3* SandEdgePoint;
    struct MoonVector3* SandEdgePointNormal;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FindClosestSandEdgeToTargetAction__Fields_FWDDECL)
#define IL2CPP_STRUCT_FindClosestSandEdgeToTargetAction__Fields_FWDDECL
#include <Modloader/app/structs/MoonReference_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/MoonVector3.h>
#endif
#undef IL2CPP_STRUCT_FindClosestSandEdgeToTargetAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FindClosestSandEdgeToTargetAction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FindClosestSandEdgeToTargetAction__Fields_FWDDECL)
#include <Modloader/app/structs/FindClosestSandEdgeToTargetAction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FindClosestSandEdgeToTargetAction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
