#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PetrifiedOwlPhaseCBrain__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PetrifiedOwlPhaseCBrain__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlPhaseCBrain__Fields_DEFINED)
#include <Modloader/app/structs/PetrifiedOwlBrainBase__Fields.h>
#if defined(IL2CPP_STRUCT_PetrifiedOwlBrainBase__Fields_DEFINED)
#define IL2CPP_STRUCT_PetrifiedOwlPhaseCBrain__Fields_DEFINED
struct BaseAnimator;
struct LegacyTimelineSequence;
struct PetrifiedOwlPhaseCBrain__Fields {
    struct PetrifiedOwlBrainBase__Fields _;
    float Health;
    float MaxHealth;
    struct BaseAnimator* HealthBarForFadeout;
    struct LegacyTimelineSequence* ExitSequence;
    float m_timeRunning;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PetrifiedOwlPhaseCBrain__Fields_FWDDECL)
#define IL2CPP_STRUCT_PetrifiedOwlPhaseCBrain__Fields_FWDDECL
#include <Modloader/app/structs/BaseAnimator.h>
#include <Modloader/app/structs/LegacyTimelineSequence.h>
#endif
#undef IL2CPP_STRUCT_PetrifiedOwlPhaseCBrain__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlPhaseCBrain__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PetrifiedOwlPhaseCBrain__Fields_FWDDECL)
#include <Modloader/app/structs/PetrifiedOwlPhaseCBrain__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PetrifiedOwlPhaseCBrain__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
