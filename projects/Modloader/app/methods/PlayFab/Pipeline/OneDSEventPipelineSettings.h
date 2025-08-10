#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/OneDSEventPipelineSettings.h>
#include <Modloader/app/structs/TimeSpan.h>

namespace app::classes::PlayFab::Pipeline::OneDSEventPipelineSettings {
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_EventBufferSize, app::OneDSEventPipelineSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FD1E0, void, set_EventBufferSize, app::OneDSEventPipelineSettings* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x00529E80, int32_t, get_BatchBufferSize, app::OneDSEventPipelineSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00529E90, void, set_BatchBufferSize, app::OneDSEventPipelineSettings* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_BatchSize, app::OneDSEventPipelineSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017B3870, void, set_BatchSize, app::OneDSEventPipelineSettings* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::TimeSpan, get_BatchFillTimeout, app::OneDSEventPipelineSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017B39C0, void, set_BatchFillTimeout, app::OneDSEventPipelineSettings* this_ptr, app::TimeSpan value)
    IL2CPP_REGISTER_METHOD(0x002FB970, int32_t, get_MaxHttpAttempts, app::OneDSEventPipelineSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB980, void, set_MaxHttpAttempts, app::OneDSEventPipelineSettings* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x017B3C40, void, ctor, app::OneDSEventPipelineSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017B3D10, void, cctor, )
} // namespace app::classes::PlayFab::Pipeline::OneDSEventPipelineSettings
