#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScenarioLineRendererAnimatorEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScenarioLineRendererAnimatorEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScenarioLineRendererAnimatorEntity__Fields_DEFINED)
#include <Modloader/app/structs/TimelineEntity__Fields.h>
#if defined(IL2CPP_STRUCT_TimelineEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_ScenarioLineRendererAnimatorEntity__Fields_DEFINED
struct Int32__Array;
struct Vector3__Array__Array;
struct AnimationCurve;
struct ScenarioLineRendererAnimatorEntity__Fields {
    struct TimelineEntity__Fields _;
    struct Int32__Array* Lengths;
    struct Vector3__Array__Array* Positions;
    struct AnimationCurve* TransparencyOverTime;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ScenarioLineRendererAnimatorEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_ScenarioLineRendererAnimatorEntity__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/Vector3__Array__Array.h>
#endif
#undef IL2CPP_STRUCT_ScenarioLineRendererAnimatorEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScenarioLineRendererAnimatorEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ScenarioLineRendererAnimatorEntity__Fields_FWDDECL)
#include <Modloader/app/structs/ScenarioLineRendererAnimatorEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScenarioLineRendererAnimatorEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
