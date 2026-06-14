#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventBatchingStage__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventBatchingStage__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventBatchingStage__Fields_DEFINED)
#include <Modloader/app/structs/PipelineStageBase_2_PlayFab_IPlayFabEmitEventRequest_TitleEventBatch___Fields.h>
#include <Modloader/app/structs/TimeSpan.h>
#if defined(IL2CPP_STRUCT_PipelineStageBase_2_PlayFab_IPlayFabEmitEventRequest_TitleEventBatch___Fields_DEFINED) && defined(IL2CPP_STRUCT_TimeSpan_DEFINED)
#define IL2CPP_STRUCT_EventBatchingStage__Fields_DEFINED
struct Dictionary_2_System_String_List_1_PlayFab_IPlayFabEmitEventRequest_;
struct Stopwatch;
struct ILogger_1;
struct EventBatchingStage__Fields {
    struct PipelineStageBase_2_PlayFab_IPlayFabEmitEventRequest_TitleEventBatch___Fields _;
    int32_t _BatchSize_k__BackingField;
    struct TimeSpan _BatchFillTimeout_k__BackingField;
    struct Dictionary_2_System_String_List_1_PlayFab_IPlayFabEmitEventRequest_* batches;
    struct Stopwatch* stopwatch;
    struct ILogger_1* logger;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EventBatchingStage__Fields_FWDDECL)
#define IL2CPP_STRUCT_EventBatchingStage__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_String_List_1_PlayFab_IPlayFabEmitEventRequest_.h>
#include <Modloader/app/structs/ILogger_1.h>
#include <Modloader/app/structs/Stopwatch.h>
#endif
#undef IL2CPP_STRUCT_EventBatchingStage__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventBatchingStage__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EventBatchingStage__Fields_FWDDECL)
#include <Modloader/app/structs/EventBatchingStage__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventBatchingStage__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
