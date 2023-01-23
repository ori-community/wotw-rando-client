#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UnloadTexturesTask.h>

namespace app::classes::Moon::ArtOptimization::UnloadTexturesTask {
    IL2CPP_REGISTER_METHOD(0x00CB4780, void, Update, (app::UnloadTexturesTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::UnloadTexturesTask * this_ptr))
} // namespace app::classes::Moon::ArtOptimization::UnloadTexturesTask
