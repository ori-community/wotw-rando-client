#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AlignSplineToVerletStructure__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AlignSplineToVerletStructure__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AlignSplineToVerletStructure__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_AlignSplineToVerletStructure__Fields_DEFINED
struct VelocityBezierSplineComponent;
struct VerletStructure;
struct Single__Array;
struct Int32__Array;
struct AlignSplineToVerletStructure__Fields {
    struct MonoBehaviour__Fields _;
    struct VelocityBezierSplineComponent* Spline;
    int32_t SplinePointShift;
    struct VerletStructure* VerletStructure;
    struct Single__Array* JointValues;
    struct Int32__Array* JointNumbers;
    float Gravity;
    bool m_isSuspended;
    bool m_initialized;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AlignSplineToVerletStructure__Fields_FWDDECL)
#define IL2CPP_STRUCT_AlignSplineToVerletStructure__Fields_FWDDECL
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/Single__Array.h>
#include <Modloader/app/structs/VelocityBezierSplineComponent.h>
#include <Modloader/app/structs/VerletStructure.h>
#endif
#undef IL2CPP_STRUCT_AlignSplineToVerletStructure__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AlignSplineToVerletStructure__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AlignSplineToVerletStructure__Fields_FWDDECL)
#include <Modloader/app/structs/AlignSplineToVerletStructure__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AlignSplineToVerletStructure__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
