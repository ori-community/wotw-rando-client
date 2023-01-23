#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StaggerDamageTracker__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StaggerDamageTracker__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StaggerDamageTracker__Fields_DEFINED)
#define IL2CPP_STRUCT_StaggerDamageTracker__Fields_DEFINED
struct __declspec(align(8)) StaggerDamageTracker__Fields {
    float StaggerThreshold;
    float TimeToReset;
    float StaggerImmunityDuration;
    float InitialAccumulatorFillPercentage;
    bool m_firstStagger;
    float m_damageAccumulator;
    float m_resetTimer;
    float m_imunityTimer;
};
#endif
#if !defined(IL2CPP_STRUCT_StaggerDamageTracker__Fields_FWDDECL)
#define IL2CPP_STRUCT_StaggerDamageTracker__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_StaggerDamageTracker__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StaggerDamageTracker__Fields_DEFINED) && !defined(IL2CPP_STRUCT_StaggerDamageTracker__Fields_FWDDECL)
#include <Modloader/app/structs/StaggerDamageTracker__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StaggerDamageTracker__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
