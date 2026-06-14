#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VerletUndergroundPlantController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VerletUndergroundPlantController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletUndergroundPlantController__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_VerletUndergroundPlantController__Fields_DEFINED
struct VerletStructure__Array;
struct Transform;
struct AnimationCurve;
struct FloatAnimator;
struct VerletUndergroundPlantController__Fields {
    struct MonoBehaviour__Fields _;
    struct VerletStructure__Array* VerletStructures;
    struct Transform* GroundPoint;
    struct AnimationCurve* AngleLerpCurve;
    float DefaultWigglePressure;
    struct FloatAnimator* WiggleForceCurve1;
    struct FloatAnimator* WiggleForceCurve2;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VerletUndergroundPlantController__Fields_FWDDECL)
#define IL2CPP_STRUCT_VerletUndergroundPlantController__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/FloatAnimator.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/VerletStructure__Array.h>
#endif
#undef IL2CPP_STRUCT_VerletUndergroundPlantController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletUndergroundPlantController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_VerletUndergroundPlantController__Fields_FWDDECL)
#include <Modloader/app/structs/VerletUndergroundPlantController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VerletUndergroundPlantController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
