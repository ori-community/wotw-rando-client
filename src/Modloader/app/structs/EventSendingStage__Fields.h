#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventSendingStage__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventSendingStage__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventSendingStage__Fields_DEFINED)
#include <Modloader/app/structs/PipelineStageBase_2_TitleEventBatch_PlayFab_SharedModels_PlayFabResult_1___Fields.h>
#if defined(IL2CPP_STRUCT_PipelineStageBase_2_TitleEventBatch_PlayFab_SharedModels_PlayFabResult_1___Fields_DEFINED)
#define IL2CPP_STRUCT_EventSendingStage__Fields_DEFINED
struct OneDSEventsAPI;
struct ILogger_1;
struct EventSendingStage__Fields {
    struct PipelineStageBase_2_TitleEventBatch_PlayFab_SharedModels_PlayFabResult_1___Fields _;
    struct OneDSEventsAPI* oneDSEventsApi;
    struct ILogger_1* logger;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EventSendingStage__Fields_FWDDECL)
#define IL2CPP_STRUCT_EventSendingStage__Fields_FWDDECL
#include <Modloader/app/structs/ILogger_1.h>
#include <Modloader/app/structs/OneDSEventsAPI.h>
#endif
#undef IL2CPP_STRUCT_EventSendingStage__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventSendingStage__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EventSendingStage__Fields_FWDDECL)
#include <Modloader/app/structs/EventSendingStage__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventSendingStage__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
