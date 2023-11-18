#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StepMovementBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StepMovementBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StepMovementBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_EntityBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_StepMovementBehaviour__Fields_DEFINED
struct AnimationCurve;
struct LegacyTimelineSequence;
struct Locomotion;
struct StepMovementBehaviour__Fields {
    struct EntityBehaviour__Fields _;
    struct AnimationCurve* StepSpeedOverTimeNormalized;
    float MaxStepSpeed;
    struct Vector3 InitPosition;
    float MaxDistanceFromInitPos;
    float MaxStepTime;
    struct LegacyTimelineSequence* StepTS;
    float m_timer;
    struct Locomotion* m_locomotion;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StepMovementBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_StepMovementBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/LegacyTimelineSequence.h>
#include <Modloader/app/structs/Locomotion.h>
#endif
#undef IL2CPP_STRUCT_StepMovementBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StepMovementBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_StepMovementBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/StepMovementBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StepMovementBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
