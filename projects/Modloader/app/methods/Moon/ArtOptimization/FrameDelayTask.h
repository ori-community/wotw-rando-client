#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FrameDelayTask.h>
#include <Modloader/app/structs/IOptimizationTask.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::Moon::ArtOptimization::FrameDelayTask {
    IL2CPP_REGISTER_METHOD(0x002FD1E0, void, ctor, (app::FrameDelayTask * this_ptr, int32_t frames_delay))
    IL2CPP_REGISTER_METHOD(0x0134BB50, void, Update, (app::FrameDelayTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CB2AE0, void, OnEnterContext, (app::FrameDelayTask * this_ptr, app::IOptimizationTask* antecedent, app::Object* context_data))
} // namespace app::classes::Moon::ArtOptimization::FrameDelayTask
