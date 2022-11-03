#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::ArtOptimization::CompositeTask {
    IL2CPP_REGISTER_METHOD(0x0134B680, void, EnqueueSubTask, (app::CompositeTask * this_ptr, app::IOptimizationTask* sub_task))
    IL2CPP_REGISTER_METHOD(0x0134B750, void, Update, (app::CompositeTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0134B9E0, void, ctor, (app::CompositeTask * this_ptr))
} // namespace app::classes::Moon::ArtOptimization::CompositeTask
