#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::PlayFab::Pipeline::PipelineStageBase_2_TitleEventBatch_PlayFab_SharedModels_PlayFabResult_1_ {
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::PipelineStageBase_2_TitleEventBatch_PlayFab_SharedModels_PlayFabResult_1_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476A7D0, PipelineStageBase_2_TitleEventBatch_PlayFab_SharedModels_PlayFabResult_1___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D16110, void, RunStage, (app::PipelineStageBase_2_TitleEventBatch_PlayFab_SharedModels_PlayFabResult_1_ * this_ptr, app::BlockingCollection_1_PlayFab_Pipeline_TitleEventBatch_* input, app::BlockingCollection_1_PlayFab_SharedModels_PlayFabResult_1_* output, app::CancellationTokenSource* cts))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, InitStage, (app::PipelineStageBase_2_TitleEventBatch_PlayFab_SharedModels_PlayFabResult_1_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D16470, app::IEnumerable_1_PlayFab_Pipeline_TitleEventBatch_*, GetInputConsumingEnumerable, (app::PipelineStageBase_2_TitleEventBatch_PlayFab_SharedModels_PlayFabResult_1_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D164A0, void, StoreOutput, (app::PipelineStageBase_2_TitleEventBatch_PlayFab_SharedModels_PlayFabResult_1_ * this_ptr, app::PlayFabResult_1_PlayFab_EventsModels_WriteEventsResponse_* output_item))
} // namespace app::classes::PlayFab::Pipeline::PipelineStageBase_2_TitleEventBatch_PlayFab_SharedModels_PlayFabResult_1_
