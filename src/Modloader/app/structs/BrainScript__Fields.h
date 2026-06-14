#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BrainScript__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BrainScript__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BrainScript__Fields_DEFINED)
#include <Modloader/app/structs/GhostReplayAnimator__Fields.h>
#include <Modloader/app/structs/ServerConfigurationProperties.h>
#if defined(IL2CPP_STRUCT_GhostReplayAnimator__Fields_DEFINED) && defined(IL2CPP_STRUCT_ServerConfigurationProperties_DEFINED)
#define IL2CPP_STRUCT_BrainScript__Fields_DEFINED
struct List_1_LegacyTimelineSequence_SequenceEntry_;
struct Dictionary_2_BaseAnimator_System_Int32_;
struct Dictionary_2_BaseAnimator_LegacyTimelineSequence_SequenceEntry_;
struct Stack_1_UnityEngine_Transform_;
struct BrainScript__Fields {
    struct GhostReplayAnimator__Fields _;
    struct List_1_LegacyTimelineSequence_SequenceEntry_* Entries;
    bool Simulate;
    bool OverrideServerTimeWithPreviewDuration;
    struct ServerConfigurationProperties SimulationConfig;
    struct Dictionary_2_BaseAnimator_System_Int32_* m_entriesIndexes;
    struct List_1_LegacyTimelineSequence_SequenceEntry_* m_editorEntries;
    struct Dictionary_2_BaseAnimator_LegacyTimelineSequence_SequenceEntry_* m_existingAnimators;
    struct Stack_1_UnityEngine_Transform_* m_process;
    bool ContainsDuplicateEntry;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BrainScript__Fields_FWDDECL)
#define IL2CPP_STRUCT_BrainScript__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_BaseAnimator_LegacyTimelineSequence_SequenceEntry_.h>
#include <Modloader/app/structs/Dictionary_2_BaseAnimator_System_Int32_.h>
#include <Modloader/app/structs/List_1_LegacyTimelineSequence_SequenceEntry_.h>
#include <Modloader/app/structs/Stack_1_UnityEngine_Transform_.h>
#endif
#undef IL2CPP_STRUCT_BrainScript__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BrainScript__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BrainScript__Fields_FWDDECL)
#include <Modloader/app/structs/BrainScript__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BrainScript__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
