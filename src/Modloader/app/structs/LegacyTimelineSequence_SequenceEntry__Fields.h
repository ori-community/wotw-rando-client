#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacyTimelineSequence_SequenceEntry__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacyTimelineSequence_SequenceEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyTimelineSequence_SequenceEntry__Fields_DEFINED)
#define IL2CPP_STRUCT_LegacyTimelineSequence_SequenceEntry__Fields_DEFINED
struct BaseAnimator;
struct LegacyTimelineSequence_SequenceEntry_Constraint;
struct __declspec(align(8)) LegacyTimelineSequence_SequenceEntry__Fields {
    struct BaseAnimator* BaseAnimator;
    bool External;
    struct LegacyTimelineSequence_SequenceEntry_Constraint* StartConstraint;
    struct LegacyTimelineSequence_SequenceEntry_Constraint* EndConstraint;
    float m_speed;
    float m_startTime;
};
#endif
#if !defined(IL2CPP_STRUCT_LegacyTimelineSequence_SequenceEntry__Fields_FWDDECL)
#define IL2CPP_STRUCT_LegacyTimelineSequence_SequenceEntry__Fields_FWDDECL
#include <Modloader/app/structs/BaseAnimator.h>
#include <Modloader/app/structs/LegacyTimelineSequence_SequenceEntry_Constraint.h>
#endif
#undef IL2CPP_STRUCT_LegacyTimelineSequence_SequenceEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyTimelineSequence_SequenceEntry__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LegacyTimelineSequence_SequenceEntry__Fields_FWDDECL)
#include <Modloader/app/structs/LegacyTimelineSequence_SequenceEntry__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacyTimelineSequence_SequenceEntry__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
