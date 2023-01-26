#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PipelineStageBase_2_PlayFab_IPlayFabEmitEventRequest_TitleEventBatch_.h>
#include <Modloader/app/structs/BlockingCollection_1_PlayFab_IPlayFabEmitEventRequest_.h>
#include <Modloader/app/structs/BlockingCollection_1_PlayFab_Pipeline_TitleEventBatch_.h>
#include <Modloader/app/structs/CancellationTokenSource.h>
#include <Modloader/app/structs/TitleEventBatch.h>

namespace app::classes::PlayFab::Pipeline::PipelineStageBase_2_PlayFab_IPlayFabEmitEventRequest_TitleEventBatch_ {
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::PipelineStageBase_2_PlayFab_IPlayFabEmitEventRequest_TitleEventBatch_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D16110, void, RunStage, (app::PipelineStageBase_2_PlayFab_IPlayFabEmitEventRequest_TitleEventBatch_ * this_ptr, app::BlockingCollection_1_PlayFab_IPlayFabEmitEventRequest_* input, app::BlockingCollection_1_PlayFab_Pipeline_TitleEventBatch_* output, app::CancellationTokenSource* cts))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, InitStage, (app::PipelineStageBase_2_PlayFab_IPlayFabEmitEventRequest_TitleEventBatch_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D164A0, void, StoreOutput, (app::PipelineStageBase_2_PlayFab_IPlayFabEmitEventRequest_TitleEventBatch_ * this_ptr, app::TitleEventBatch* output_item))
} // namespace app::classes::PlayFab::Pipeline::PipelineStageBase_2_PlayFab_IPlayFabEmitEventRequest_TitleEventBatch_
