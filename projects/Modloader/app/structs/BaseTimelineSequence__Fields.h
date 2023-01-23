#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BaseTimelineSequence__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BaseTimelineSequence__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaseTimelineSequence__Fields_DEFINED)
#include <Modloader/app/structs/BaseAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_BaseAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_BaseTimelineSequence__Fields_DEFINED
struct List_1_IEntry_;
struct HashSet_1_IEntry_;
struct List_1_BaseAnimator_;
struct BaseTimelineSequence__Fields {
    struct BaseAnimator__Fields _;
    bool LockDuration;
    float LockedDuration;
    struct List_1_IEntry_* m_currentlySampledEntries;
    struct HashSet_1_IEntry_* m_entriesProcessedThisFrame;
    struct List_1_BaseAnimator_* m_allSubAnimators;
    float _UnlockedDuration_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BaseTimelineSequence__Fields_FWDDECL)
#define IL2CPP_STRUCT_BaseTimelineSequence__Fields_FWDDECL
#include <Modloader/app/structs/HashSet_1_IEntry_.h>
#include <Modloader/app/structs/List_1_BaseAnimator_.h>
#include <Modloader/app/structs/List_1_IEntry_.h>
#endif
#undef IL2CPP_STRUCT_BaseTimelineSequence__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaseTimelineSequence__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BaseTimelineSequence__Fields_FWDDECL)
#include <Modloader/app/structs/BaseTimelineSequence__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BaseTimelineSequence__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
