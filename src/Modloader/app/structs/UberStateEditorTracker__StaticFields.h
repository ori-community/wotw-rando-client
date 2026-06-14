#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberStateEditorTracker__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberStateEditorTracker__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateEditorTracker__StaticFields_DEFINED)
#define IL2CPP_STRUCT_UberStateEditorTracker__StaticFields_DEFINED
struct List_1_Moon_IUberStateApplier_;
struct List_1_ITimelineStateRequirementResolver_;
struct List_1_ITimelineStateRequirementResolverArray_;
struct UberStateEditorTracker__StaticFields {
    struct List_1_Moon_IUberStateApplier_* s_allAppliers;
    struct List_1_ITimelineStateRequirementResolver_* s_timelineStateResolvers;
    struct List_1_ITimelineStateRequirementResolverArray_* s_timelineStateResolversArray;
};
#endif
#if !defined(IL2CPP_STRUCT_UberStateEditorTracker__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_UberStateEditorTracker__StaticFields_FWDDECL
#include <Modloader/app/structs/List_1_ITimelineStateRequirementResolverArray_.h>
#include <Modloader/app/structs/List_1_ITimelineStateRequirementResolver_.h>
#include <Modloader/app/structs/List_1_Moon_IUberStateApplier_.h>
#endif
#undef IL2CPP_STRUCT_UberStateEditorTracker__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateEditorTracker__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_UberStateEditorTracker__StaticFields_FWDDECL)
#include <Modloader/app/structs/UberStateEditorTracker__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberStateEditorTracker__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
