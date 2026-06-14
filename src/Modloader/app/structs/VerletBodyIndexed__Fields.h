#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VerletBodyIndexed__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VerletBodyIndexed__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletBodyIndexed__Fields_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_VerletBodyIndexed__Fields_DEFINED
struct VerletBodyIndexed_Point__Array;
struct VerletBodyIndexed_Link__Array;
struct VerletBodyIndexed_AngularConstraint__Array;
struct __declspec(align(8)) VerletBodyIndexed__Fields {
    int32_t LinksAccuracy;
    struct Vector3 Gravity;
    float DistanceTolerance;
    float AngleTolerance;
    struct VerletBodyIndexed_Point__Array* Points;
    struct VerletBodyIndexed_Link__Array* Links;
    struct VerletBodyIndexed_AngularConstraint__Array* AngularConstraints;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VerletBodyIndexed__Fields_FWDDECL)
#define IL2CPP_STRUCT_VerletBodyIndexed__Fields_FWDDECL
#include <Modloader/app/structs/VerletBodyIndexed_AngularConstraint__Array.h>
#include <Modloader/app/structs/VerletBodyIndexed_Link__Array.h>
#include <Modloader/app/structs/VerletBodyIndexed_Point__Array.h>
#endif
#undef IL2CPP_STRUCT_VerletBodyIndexed__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletBodyIndexed__Fields_DEFINED) && !defined(IL2CPP_STRUCT_VerletBodyIndexed__Fields_FWDDECL)
#include <Modloader/app/structs/VerletBodyIndexed__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VerletBodyIndexed__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
