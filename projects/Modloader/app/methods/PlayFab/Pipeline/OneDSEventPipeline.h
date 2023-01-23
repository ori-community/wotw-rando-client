#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/OneDSEventPipelineSettings.h>
#include <Modloader/app/structs/OneDSEventPipeline.h>
#include <Modloader/app/structs/Task.h>
#include <Modloader/app/structs/ILogger_1.h>
#include <Modloader/app/structs/CancellationToken.h>
#include <Modloader/app/structs/IPlayFabEmitEventRequest.h>
#include <Modloader/app/structs/Task_1_PlayFab_IPlayFabEmitEventResponse_.h>

namespace app::classes::PlayFab::Pipeline::OneDSEventPipeline {
    IL2CPP_REGISTER_METHOD(0x002FB950, app::OneDSEventPipelineSettings*, get_Settings, (app::OneDSEventPipeline * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBC0, app::Task*, get_PipelineTask, (app::OneDSEventPipeline * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017B0D30, void, ctor, (app::OneDSEventPipeline * this_ptr, app::OneDSEventPipelineSettings* settings, app::ILogger_1* logger))
    IL2CPP_REGISTER_METHODINFO(0x0478F470, OneDSEventPipeline__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x017B11E0, app::Task*, StartAsync_1, (app::OneDSEventPipeline * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017B12E0, app::Task*, StartAsync_2, (app::OneDSEventPipeline * this_ptr, app::CancellationToken cancellation_token))
    IL2CPP_REGISTER_METHOD(0x017B13F0, void, Stop, (app::OneDSEventPipeline * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017B1640, void, Complete, (app::OneDSEventPipeline * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017B18A0, bool, IntakeEvent, (app::OneDSEventPipeline * this_ptr, app::IPlayFabEmitEventRequest* request))
    IL2CPP_REGISTER_METHOD(0x017B1BB0, app::Task_1_PlayFab_IPlayFabEmitEventResponse_*, IntakeEventAsync, (app::OneDSEventPipeline * this_ptr, app::IPlayFabEmitEventRequest* request))
    IL2CPP_REGISTER_METHOD(0x017B1CD0, void, Cancel, (app::OneDSEventPipeline * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017B1D80, void, ThrowIfDisposed, (app::OneDSEventPipeline * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04701D08, OneDSEventPipeline_ThrowIfDisposed__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x017B1E30, void, Dispose_1, (app::OneDSEventPipeline * this_ptr, bool disposing))
    IL2CPP_REGISTER_METHOD(0x017B1E80, void, Dispose_2, (app::OneDSEventPipeline * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017B1FF0, void, ResetPipelineTask, (app::OneDSEventPipeline * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017B2170, void, ResetBatchingTask, (app::OneDSEventPipeline * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017B22F0, void, ResetSendingTask, (app::OneDSEventPipeline * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017B2470, void, _ResetBatchingTask_b__31_0, (app::OneDSEventPipeline * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470D340, OneDSEventPipeline__ResetBatchingTask_b__31_0__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x017B25A0, void, _ResetSendingTask_b__32_0, (app::OneDSEventPipeline * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047253D0, OneDSEventPipeline__ResetSendingTask_b__32_0__MethodInfo)
} // namespace app::classes::PlayFab::Pipeline::OneDSEventPipeline
