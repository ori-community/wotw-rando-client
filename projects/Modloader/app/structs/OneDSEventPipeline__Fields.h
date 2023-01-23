#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OneDSEventPipeline__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OneDSEventPipeline__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OneDSEventPipeline__Fields_DEFINED)
#include <Modloader/app/structs/CancellationToken.h>
#if defined(IL2CPP_STRUCT_CancellationToken_DEFINED)
#define IL2CPP_STRUCT_OneDSEventPipeline__Fields_DEFINED
struct Object;
struct OneDSEventPipelineSettings;
struct CancellationTokenSource;
struct BlockingCollection_1_PlayFab_IPlayFabEmitEventRequest_;
struct BlockingCollection_1_PlayFab_Pipeline_TitleEventBatch_;
struct BlockingCollection_1_PlayFab_SharedModels_PlayFabResult_1_;
struct IPipelineStage_2_PlayFab_IPlayFabEmitEventRequest_TitleEventBatch_;
struct IPipelineStage_2_TitleEventBatch_PlayFab_SharedModels_PlayFabResult_1_;
struct Task;
struct ILogger_1;
struct __declspec(align(8)) OneDSEventPipeline__Fields {
    bool isActive;
    struct Object* isActiveLock;
    struct OneDSEventPipelineSettings* settings;
    struct CancellationToken externalCancellationToken;
    struct CancellationTokenSource* pipelineCancellationTokenSource;
    struct BlockingCollection_1_PlayFab_IPlayFabEmitEventRequest_* eventBuffer;
    struct BlockingCollection_1_PlayFab_Pipeline_TitleEventBatch_* batchBuffer;
    struct BlockingCollection_1_PlayFab_SharedModels_PlayFabResult_1_* sendResultBuffer;
    struct IPipelineStage_2_PlayFab_IPlayFabEmitEventRequest_TitleEventBatch_* batchingStage;
    struct IPipelineStage_2_TitleEventBatch_PlayFab_SharedModels_PlayFabResult_1_* sendingStage;
    struct Task* batchingTask;
    struct Task* sendingTask;
    struct Task* pipelineTask;
    struct ILogger_1* logger;
    bool disposed;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OneDSEventPipeline__Fields_FWDDECL)
#define IL2CPP_STRUCT_OneDSEventPipeline__Fields_FWDDECL
#include <Modloader/app/structs/BlockingCollection_1_PlayFab_IPlayFabEmitEventRequest_.h>
#include <Modloader/app/structs/BlockingCollection_1_PlayFab_Pipeline_TitleEventBatch_.h>
#include <Modloader/app/structs/BlockingCollection_1_PlayFab_SharedModels_PlayFabResult_1_.h>
#include <Modloader/app/structs/CancellationTokenSource.h>
#include <Modloader/app/structs/ILogger_1.h>
#include <Modloader/app/structs/IPipelineStage_2_PlayFab_IPlayFabEmitEventRequest_TitleEventBatch_.h>
#include <Modloader/app/structs/IPipelineStage_2_TitleEventBatch_PlayFab_SharedModels_PlayFabResult_1_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/OneDSEventPipelineSettings.h>
#include <Modloader/app/structs/Task.h>
#endif
#undef IL2CPP_STRUCT_OneDSEventPipeline__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OneDSEventPipeline__Fields_DEFINED) && !defined(IL2CPP_STRUCT_OneDSEventPipeline__Fields_FWDDECL)
#include <Modloader/app/structs/OneDSEventPipeline__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OneDSEventPipeline__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
