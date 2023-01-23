#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacyTimelineSequence__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacyTimelineSequence__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyTimelineSequence__Fields_DEFINED)
#include <Modloader/app/structs/BaseTimelineSequence__Fields.h>
#include <Modloader/app/structs/LegacyTimelineSequence_SortMode__Enum.h>
#if defined(IL2CPP_STRUCT_BaseTimelineSequence__Fields_DEFINED) && defined(IL2CPP_STRUCT_LegacyTimelineSequence_SortMode__Enum_DEFINED)
#define IL2CPP_STRUCT_LegacyTimelineSequence__Fields_DEFINED
struct List_1_LegacyTimelineSequence_SequenceEntry_;
struct Dictionary_2_System_Int32_System_Single_;
struct Action_2_BaseAnimator_LegacyTimelineSequence_SequenceEntry_;
struct Action;
struct Dictionary_2_BaseAnimator_LegacyTimelineSequence_SequenceEntry_;
struct HashSet_1_BaseAnimator_;
struct Stack_1_UnityEngine_Transform_;
struct LegacyTimelineSequence__Fields {
    struct BaseTimelineSequence__Fields _;
    LegacyTimelineSequence_SortMode__Enum Mode;

    bool ExcludeFromOtherTimelines;
    bool Loop;
    struct List_1_LegacyTimelineSequence_SequenceEntry_* Entries;
    struct Dictionary_2_System_Int32_System_Single_* PreviousEntriesStartTime;
    float m_cachedUnlockedDuration;
    struct Action_2_BaseAnimator_LegacyTimelineSequence_SequenceEntry_* AddCallback;
    struct Action* BeforeUpdateCallback;
    struct Dictionary_2_BaseAnimator_LegacyTimelineSequence_SequenceEntry_* m_existingAnimators;
    struct HashSet_1_BaseAnimator_* m_missingAnimators;
    struct Stack_1_UnityEngine_Transform_* m_process;
    bool ContainsDuplicateEntry;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LegacyTimelineSequence__Fields_FWDDECL)
#define IL2CPP_STRUCT_LegacyTimelineSequence__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Action_2_BaseAnimator_LegacyTimelineSequence_SequenceEntry_.h>
#include <Modloader/app/structs/Dictionary_2_BaseAnimator_LegacyTimelineSequence_SequenceEntry_.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32_System_Single_.h>
#include <Modloader/app/structs/HashSet_1_BaseAnimator_.h>
#include <Modloader/app/structs/List_1_LegacyTimelineSequence_SequenceEntry_.h>
#include <Modloader/app/structs/Stack_1_UnityEngine_Transform_.h>
#endif
#undef IL2CPP_STRUCT_LegacyTimelineSequence__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyTimelineSequence__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LegacyTimelineSequence__Fields_FWDDECL)
#include <Modloader/app/structs/LegacyTimelineSequence__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacyTimelineSequence__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
