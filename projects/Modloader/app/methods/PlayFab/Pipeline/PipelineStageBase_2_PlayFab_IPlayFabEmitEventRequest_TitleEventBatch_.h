#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::PlayFab::Pipeline::PipelineStageBase_2_PlayFab_IPlayFabEmitEventRequest_TitleEventBatch_ {
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::PipelineStageBase_2_PlayFab_IPlayFabEmitEventRequest_TitleEventBatch_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047489A8, PipelineStageBase_2_PlayFab_IPlayFabEmitEventRequest_TitleEventBatch___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D16110, void, RunStage, (app::PipelineStageBase_2_PlayFab_IPlayFabEmitEventRequest_TitleEventBatch_ * this_ptr, app::BlockingCollection_1_PlayFab_IPlayFabEmitEventRequest_* input, app::BlockingCollection_1_PlayFab_Pipeline_TitleEventBatch_* output, app::CancellationTokenSource* cts))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, InitStage, (app::PipelineStageBase_2_PlayFab_IPlayFabEmitEventRequest_TitleEventBatch_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D164A0, void, StoreOutput, (app::PipelineStageBase_2_PlayFab_IPlayFabEmitEventRequest_TitleEventBatch_ * this_ptr, app::TitleEventBatch* output_item))
} // namespace app::classes::PlayFab::Pipeline::PipelineStageBase_2_PlayFab_IPlayFabEmitEventRequest_TitleEventBatch_
